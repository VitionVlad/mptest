#include <iostream>

#include <thread>

#include "Prop.hpp"

#include "res.hpp"

#include "networking.hpp"

using namespace std;

Engine eng;

float speed = 0.1;

bool mousefocused = true;

bool shot = false;

bool hit = false;

bool ehit = false;

void movecallback(){
    int state = glfwGetKey(eng.window, GLFW_KEY_W);
    if (state == GLFW_PRESS){ //w
        eng.pos.z += cos(eng.rot.y) * cos(eng.rot.x) * speed;
        eng.pos.x += cos(eng.rot.y) * sin(eng.rot.x) * -speed;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_A);
    if (state == GLFW_PRESS){ // a
        eng.pos.x += cos(eng.rot.y) * cos(eng.rot.x) * speed;
        eng.pos.z -= cos(eng.rot.y) * sin(eng.rot.x) * -speed;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_S);
    if (state == GLFW_PRESS){ // s
        eng.pos.z -= cos(eng.rot.y) * cos(eng.rot.x) * speed;
        eng.pos.x -= cos(eng.rot.y) * sin(eng.rot.x) * -speed;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_D);
    if (state == GLFW_PRESS){ //d
        eng.pos.x -= cos(eng.rot.y) * cos(eng.rot.x) * speed;
        eng.pos.z += cos(eng.rot.y) * sin(eng.rot.x) * -speed;
    }
    state = glfwGetKey(eng.window, GLFW_KEY_F11);
    if (state == GLFW_PRESS){ //d
        switch(mousefocused){
            case false:
            mousefocused = true;
            break;
            case true:
            mousefocused = false;
            break;
        }
    }
}

void mousecallback(){
    int state = glfwGetMouseButton(eng.window, GLFW_MOUSE_BUTTON_LEFT);
    if (state == GLFW_PRESS){
        if(shot == false){
            eng.pos.z -= cos(eng.rot.y) * cos(eng.rot.x) * 5;
            eng.pos.y += sin(eng.rot.y) * 5;
            eng.pos.x -= cos(eng.rot.y) * sin(eng.rot.x) * -5;
            shot = true;
        }
    }
}

vec3 spawn = vec3(0, -5, 0);

int role = 0;

Server serv;

Client cl;

Mesh triangle2;

void recsendd(){
    while(!glfwWindowShouldClose(eng.window)){
        char xtr[4];
        char ytr[4];
        char ztr[4];
        char xrt[4];
        memcpy(xtr, &eng.pos.x, 4);
        memcpy(ytr, &eng.pos.y, 4);
        memcpy(ztr, &eng.pos.z, 4);
        memcpy(xrt, &eng.rot.x, 4);
        switch(role){
            case 1:
            serv.buffer[0] = xtr[0];
            serv.buffer[1] = xtr[1];
            serv.buffer[2] = xtr[2];
            serv.buffer[3] = xtr[3];
            serv.buffer[4] = ytr[0];
            serv.buffer[5] = ytr[1];
            serv.buffer[6] = ytr[2];
            serv.buffer[7] = ytr[3];
            serv.buffer[8] = ztr[0];
            serv.buffer[9] = ztr[1];
            serv.buffer[10] = ztr[2];
            serv.buffer[11] = ztr[3];
            serv.buffer[12] = xrt[0];
            serv.buffer[13] = xrt[1];
            serv.buffer[14] = xrt[2];
            serv.buffer[15] = xrt[3];
            serv.buffer[16] = ehit;
            ehit = false;
            serv.sendData(0);
            serv.reciveData(0);
            xtr[0] = serv.buffer[0];
            xtr[1] = serv.buffer[1];
            xtr[2] = serv.buffer[2];
            xtr[3] = serv.buffer[3];
            ytr[0] = serv.buffer[4];
            ytr[1] = serv.buffer[5];
            ytr[2] = serv.buffer[6];
            ytr[3] = serv.buffer[7];
            ztr[0] = serv.buffer[8];
            ztr[1] = serv.buffer[9];
            ztr[2] = serv.buffer[10];
            ztr[3] = serv.buffer[11];
            xrt[0] = serv.buffer[12];
            xrt[1] = serv.buffer[13];
            xrt[2] = serv.buffer[14];
            xrt[3] = serv.buffer[15];
            hit = serv.buffer[16];
            memcpy(&triangle2.meshPosition.x, xtr, 4);
            memcpy(&triangle2.meshPosition.y, ytr, 4);
            memcpy(&triangle2.meshPosition.z, ztr, 4);
            memcpy(&triangle2.meshRot.y, xrt, 4);
            triangle2.meshPosition.y = -triangle2.meshPosition.y-0.7f;
            break;
            case 2:
            cl.buffer[0] = xtr[0];
            cl.buffer[1] = xtr[1];
            cl.buffer[2] = xtr[2];
            cl.buffer[3] = xtr[3];
            cl.buffer[4] = ytr[0];
            cl.buffer[5] = ytr[1];
            cl.buffer[6] = ytr[2];
            cl.buffer[7] = ytr[3];
            cl.buffer[8] = ztr[0];
            cl.buffer[9] = ztr[1];
            cl.buffer[10] = ztr[2];
            cl.buffer[11] = ztr[3];
            cl.buffer[12] = xrt[0];
            cl.buffer[13] = xrt[1];
            cl.buffer[14] = xrt[2];
            cl.buffer[15] = xrt[3];
            cl.buffer[16] = ehit;
            ehit = false;
            cl.sendData();
            cl.reciveData();
            xtr[0] = cl.buffer[0];
            xtr[1] = cl.buffer[1];
            xtr[2] = cl.buffer[2];
            xtr[3] = cl.buffer[3];
            ytr[0] = cl.buffer[4];
            ytr[1] = cl.buffer[5];
            ytr[2] = cl.buffer[6];
            ytr[3] = cl.buffer[7];
            ztr[0] = cl.buffer[8];
            ztr[1] = cl.buffer[9];
            ztr[2] = cl.buffer[10]; 
            ztr[3] = cl.buffer[11];
            xrt[0] = cl.buffer[12];
            xrt[1] = cl.buffer[13];
            xrt[2] = cl.buffer[14];
            xrt[3] = cl.buffer[15];
            hit = cl.buffer[16];
            memcpy(&triangle2.meshPosition.x, xtr, 4);
            memcpy(&triangle2.meshPosition.y, ytr, 4);
            memcpy(&triangle2.meshPosition.z, ztr, 4);
            memcpy(&triangle2.meshRot.y, xrt, 4);
            triangle2.meshPosition.y = -triangle2.meshPosition.y-0.7f;
            break;
        }
    }
    terminate();
}

void roleselect(){
    cout << "enter role: 1 - server, 2 - client" << endl;
    cin >> role;
    string ipad;
    switch(role){
        case 1:
        serv.initServer();
        serv.waitforconnect(1);
        recsendd();
        break;
        case 2:
        cout << "ip address:";
        cin >> ipad;
        cout << endl;
        cl.initClient(ipad.c_str());
        recsendd();
        break;
        default:
        cout << "role select error" << endl;
        exit(-1);
        break;
    }
}

int main(int argc, char **argv){
    eng.Init();
    eng.shadowProj.buildperspectivemat(110, 0.1, 100, 1, 0);
    eng.shadowTrans.buildtranslatemat(vec3(0, -7, 0), 0);
    eng.shadowxrot.buildxrotmat(-1.5f, 0);
    eng.shadowyrot.buildyrotmat(0, 0);
    eng.setLight(0, vec3(0, 3.5, 0), vec3(1, 1, 0.5f), 1);

    thread rsel(roleselect);

    Mesh triangle;

    eng.copyFloatArray(cube_model().verts, triangle.vertexes);
    eng.copyFloatArray(cube_normals().normals, triangle.normals);
    eng.copyFloatArray(cube_uv().uv, triangle.uv);
    eng.copyucharArray(cube_texture().pixels, triangle.texture);
    eng.copyucharArray(cubespec_texture().pixels, triangle.specular);
    triangle.totalv = cube_model().totalv;
    triangle.texResolution.x = cube_texture().resx;
    triangle.texResolution.y = cube_texture().resy;
    triangle.meshPosition.z = -1.5f;
    triangle.meshPosition.y = 0;
    triangle.initMesh(fragmentShaderCode, vertexShaderCode);
    triangle.colision = false;
    triangle.meshScale.x = 0.2;
    triangle.meshScale.z = 0.2;

    eng.copyFloatArray(cube_model().verts, triangle2.vertexes);
    eng.copyFloatArray(cube_normals().normals, triangle2.normals);
    eng.copyFloatArray(cube_uv().uv, triangle2.uv);
    eng.copyucharArray(cube_texture().pixels, triangle2.texture);
    eng.copyucharArray(cubespec_texture().pixels, triangle2.specular);
    triangle2.totalv = cube_model().totalv;
    triangle2.texResolution.x = cube_texture().resx;
    triangle2.texResolution.y = cube_texture().resy;
    triangle2.meshPosition.z = -1.5f;
    triangle2.meshPosition.y = 0.5;
    triangle2.initMesh(fragmentShaderCode, vertexShaderCode);
    triangle2.meshScale.x = 0.2;
    triangle2.meshScale.z = 0.2;

    Mesh plane;

    eng.copyFloatArray(plane_model().verts, plane.vertexes);
    eng.copyFloatArray(plane_normals().normals, plane.normals);
    eng.copyFloatArray(plane_uv().uv, plane.uv);
    eng.copyucharArray(cube_texture().pixels, plane.texture);
    eng.copyucharArray(cubespec_texture().pixels, plane.specular);
    plane.totalv = plane_model().totalv;
    plane.texResolution.x = cube_texture().resx;
    plane.texResolution.y = cube_texture().resy;
    plane.meshPosition.y = -0.5f;
    plane.initMesh(fragmentShaderCode, vertexShaderCode);

    vec2 mousepos;

    Mesh scr;
    scr.meshPosition.x = -0.0005;
    scr.meshScale.x = 0.1;
    scr.meshScale.y = 0.1;
    scr.makeQuad(fragmentuiShaderCode, vertexuiShaderCode, eng, cube_texture().pixels, cube_texture().resx, cube_texture().resy);

    Mesh scr2;
    scr2.meshScale.x = 0.1;
    scr2.meshScale.y = 0.1;
    scr2.makeQuad(fragmentuiShaderCode, vertexuiShaderCode, eng, cube_texture().pixels, cube_texture().resx, cube_texture().resy);


    //audioSource aud("audio.wav");
    //aud.play();

    double lastTime = glfwGetTime();
    int nbFrames = 0;
    string tittle;
    double currentTime;

    while (!glfwWindowShouldClose(eng.window)){
        if(mousefocused == true){
            glfwSetInputMode(eng.window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
            glfwGetCursorPos(eng.window, &mousepos.x, &mousepos.y);
            eng.rot.x = mousepos.x/eng.resolution.x;
            eng.rot.y = -mousepos.y/eng.resolution.y;
            if(eng.rot.y > 1.5){
                eng.rot.y = 1.5;
            }
            if(eng.rot.y < -1.5f){
                eng.rot.y = -1.5f;
            }
            mousecallback();
        }else{
            glfwSetInputMode(eng.window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
            glfwGetCursorPos(eng.window, &mousepos.x, &mousepos.y);
        }

        triangle.meshPosition.x = -eng.pos.x;
        triangle.meshPosition.y = -eng.pos.y;
        triangle.meshPosition.z = -eng.pos.z;
        triangle.meshRot.y = eng.rot.x;

        eng.beginShadowPass(0);

        triangle.Draw(eng);
        plane.Draw(eng);
        triangle2.Draw(eng);

        eng.beginMainPass();

        movecallback();
        scr.Draw(eng);
        scr2.Draw(eng);
        plane.Draw(eng);
        triangle2.Draw(eng);

        vec3 sho = vec3(triangle2.meshPosition.x, triangle2.meshPosition.y, triangle2.meshPosition.z);
        triangle2.vecmatmult(sho, eng.translate);
        triangle2.vecmatmult(sho, eng.yrot);
        triangle2.vecmatmult(sho, eng.xrot);
        triangle2.vecmatmult(sho, eng.perspective);
        scr2.meshPosition.x = sho.x/sho.z;
        scr2.meshPosition.y = -sho.y/-sho.z;

        if(scr2.meshPosition.x-triangle2.aabb.x<-0.1&&scr2.meshPosition.x+triangle2.aabb.x>0.1 && scr2.meshPosition.y-triangle2.aabb.x<-0.1&&scr2.meshPosition.y+triangle2.aabb.x>0.1&&shot==true){
            ehit = true;
        }

        eng.endFrame();
        if(eng.pos.y >= 1){
            hit = true;
        }
        if(hit == true){
            eng.pos.x = spawn.x;
            eng.pos.y = spawn.y;
            eng.pos.z = spawn.z;
            hit = false;
        }
        currentTime = glfwGetTime();
        nbFrames++;
        if ( currentTime - lastTime >= 1.0 ){
            shot = false;
            tittle = to_string(nbFrames)+" FPS / mptest (x86-64) / Linux";
            glfwSetWindowTitle(eng.window, tittle.c_str());
            nbFrames = 0;
            lastTime += 1.0;
        }
    }
    switch(role){
        case 1:
        serv.closeServer();
        break;
        case 2:
        cl.closeClient();
        break;
        default:
        cout << "role selecr error" << endl;
        return -1;
        break;
    }
    return 1;
}
