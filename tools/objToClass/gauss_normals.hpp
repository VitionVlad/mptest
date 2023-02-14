#include <iostream>

class gauss_normals {
public:
float normals [16383] = {
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.5413, -0.8409, 
0, 0.5413, -0.8409, 
0, 0.5413, -0.8409, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.5413, 0.8409, 
0, -0.5413, 0.8409, 
0, -0.5413, 0.8409, 
0, 0.8409, 0.5413, 
0, 0.8409, 0.5413, 
0, 0.8409, 0.5413, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.0397, 0.9992, 
0, 0.0397, 0.9992, 
0, 0.0397, 0.9992, 
0.7758, -0.6305, 0.025, 
0.7758, -0.6305, 0.025, 
0.7758, -0.6305, 0.025, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.971, 0.2392, 
0, -0.971, 0.2392, 
0, -0.971, 0.2392, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.2609, 0.9654, 
0, -0.2609, 0.9654, 
0, -0.2609, 0.9654, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.9654, 0.2609, 
0, 0.9654, 0.2609, 
0, 0.9654, 0.2609, 
0, -0.9654, -0.2609, 
0, -0.9654, -0.2609, 
0, -0.9654, -0.2609, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, 0.9654, 0.2609, 
0, 0.9654, 0.2609, 
0, 0.9654, 0.2609, 
0, -0.9654, -0.2609, 
0, -0.9654, -0.2609, 
0, -0.9654, -0.2609, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.9947, 0.0041, 0.1031, 
-0.9947, 0.0041, 0.1031, 
-0.9947, 0.0041, 0.1031, 
-0.7805, 0.6246, -0.0248, 
-0.7805, 0.6246, -0.0248, 
-0.7805, 0.6246, -0.0248, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.7805, -0.6246, 0.0248, 
-0.7805, -0.6246, 0.0248, 
-0.7805, -0.6246, 0.0248, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0.8387, -0.5441, 0.0216, 
0.8387, -0.5441, 0.0216, 
0.8387, -0.5441, 0.0216, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
-0.8387, -0.5441, 0.0216, 
-0.8387, -0.5441, 0.0216, 
-0.8387, -0.5441, 0.0216, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.7758, 0.6305, -0.025, 
0.7758, 0.6305, -0.025, 
0.7758, 0.6305, -0.025, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.9945, 0.0042, 0.1046, 
0.9945, 0.0042, 0.1046, 
0.9945, 0.0042, 0.1046, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.5413, -0.8409, 
0, 0.5413, -0.8409, 
0, 0.5413, -0.8409, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.5413, 0.8409, 
0, -0.5413, 0.8409, 
0, -0.5413, 0.8409, 
0, 0.8409, 0.5413, 
0, 0.8409, 0.5413, 
0, 0.8409, 0.5413, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.0397, 0.9992, 
0, 0.0397, 0.9992, 
0, 0.0397, 0.9992, 
0.7758, -0.6305, 0.025, 
0.7758, -0.6305, 0.025, 
0.7758, -0.6305, 0.025, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.971, 0.2392, 
0, -0.971, 0.2392, 
0, -0.971, 0.2392, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
-0.968, -0.0099, -0.2507, 
-0.968, -0.0099, -0.2507, 
-0.968, -0.0099, -0.2507, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, -0.0397, -0.9992, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, 0.9992, -0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
0, -0.25, 0.9682, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, -0.2609, 0.9654, 
0, -0.2609, 0.9654, 
0, -0.2609, 0.9654, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.9654, 0.2609, 
0, 0.9654, 0.2609, 
0, 0.9654, 0.2609, 
0, -0.9654, -0.2609, 
0, -0.9654, -0.2609, 
0, -0.9654, -0.2609, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
0, 0.9654, 0.2609, 
0, 0.9654, 0.2609, 
0, 0.9654, 0.2609, 
0, -0.9654, -0.2609, 
0, -0.9654, -0.2609, 
0, -0.9654, -0.2609, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
0, 0.2609, -0.9654, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-1, -0, 0, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.9947, 0.0041, 0.1031, 
-0.9947, 0.0041, 0.1031, 
-0.9947, 0.0041, 0.1031, 
-0.7805, 0.6246, -0.0248, 
-0.7805, 0.6246, -0.0248, 
-0.7805, 0.6246, -0.0248, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.968, -0.01, -0.2507, 
-0.7805, -0.6246, 0.0248, 
-0.7805, -0.6246, 0.0248, 
-0.7805, -0.6246, 0.0248, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0, -0.9992, 0.0397, 
0.8387, -0.5441, 0.0216, 
0.8387, -0.5441, 0.0216, 
0.8387, -0.5441, 0.0216, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
0, -0.9077, -0.4196, 
-0.8387, -0.5441, 0.0216, 
-0.8387, -0.5441, 0.0216, 
-0.8387, -0.5441, 0.0216, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
1, 0, 0, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.7758, 0.6305, -0.025, 
0.7758, 0.6305, -0.025, 
0.7758, 0.6305, -0.025, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.9945, 0.0042, 0.1047, 
0.9945, 0.0042, 0.1047, 
0.9945, 0.0042, 0.1047, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
0.967, -0.0101, -0.2544, 
};
};