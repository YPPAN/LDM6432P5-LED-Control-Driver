#ifndef PEDESTRIAN_H
#define PEDESTRIAN_H

const unsigned char pedestrian_IMG[]={
0x00,0x24,0x48,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x48,0x24,0x00,
0x24,0x24,0x24,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x24,0x24,
0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x48,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x28,0x4C,0x4C,0x28,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x4C,0x98,0x98,0x70,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x70,0x74,0x98,0x98,0x74,0x70,0x28,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x74,0x74,0x98,0x98,0x94,0x74,0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x24,0x70,0x98,0x98,0x70,0x48,0x24,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x48,0x70,0x74,0x74,0x70,0x28,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x28,0x74,0x98,0x98,0x4C,0x28,0x28,0x28,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x74,0x98,0x98,0x74,0x74,0x74,0x74,0x74,0x24,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x74,0x98,0x98,0x98,0x74,0x70,0x70,0x70,0x4C,0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x48,0x74,0x94,0x98,0x98,0x74,0x24,0x24,0x28,0x74,0x70,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x4C,0x74,0x4C,0x70,0x98,0x98,0x74,0x24,0x20,0x24,0x48,0x70,0x70,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x48,0x70,0x70,0x28,0x48,0x70,0x94,0x74,0x4C,0x24,0x20,0x20,0x4C,0x70,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x28,0x74,0x70,0x24,0x24,0x24,0x28,0x74,0x98,0x98,0x4C,0x20,0x20,0x24,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x48,0x28,0x20,0x00,0x00,0x24,0x70,0x98,0x98,0x4C,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x20,0x00,0x00,0x00,0x24,0x70,0x94,0x74,0x4C,0x28,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x70,0x74,0x48,0x70,0x74,0x24,0x24,0x24,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x70,0x74,0x24,0x48,0x70,0x70,0x70,0x4C,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x28,0x70,0x70,0x24,0x20,0x28,0x74,0x74,0x74,0x48,0x24,0x20,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x48,0x74,0x4C,0x24,0x24,0x00,0x24,0x28,0x48,0x48,0x74,0x70,0x24,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x4C,0x70,0x98,0x48,0x20,0x00,0x00,0x00,0x20,0x20,0x24,0x74,0x70,0x24,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x24,0x24,0x48,0x74,0x98,0x94,0x48,0x20,0x00,0x00,0x00,0x20,0x24,0x28,0x74,0x70,0x24,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x70,0x74,0x74,0x98,0x74,0x48,0x24,0x20,0x00,0x00,0x00,0x20,0x4C,0x74,0x4C,0x28,0x24,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x70,0x74,0x74,0x74,0x4C,0x24,0x20,0x00,0x00,0x00,0x00,0x20,0x4C,0x70,0x28,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x24,0x24,0x24,0x24,0x24,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0x24,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x24,
0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x48,
0x24,0x24,0x24,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x24,0x24,0x24,
0x00,0x24,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x24,0x00
};

const image_t pedestrian={32,32,1,1,pedestrian_IMG};

#endif
