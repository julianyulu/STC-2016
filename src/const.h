//const.h
#ifndef __CONST_H_INCLUDED__
#define __CONST_H_INCLUDED__


const double geoR = 5e-3; // Radius of coil, 5 mm
const double geoAspectRatio = 2; // Space of the two coils for a single trap, with respect to geoR
const double geoOverlapRatio = 0.5; // geoOverlapRatio 0~1, 0 for not overlap, 1 for totally overlap, 0.5 for half overlap
const double zStep = 0.2 * geoR;  // Spatial step(resolution)
const double tPeriod = 50e-6; // Current pulse period, 50 us
const double tStep = tPeriod / 20.0; // Time step(resolution)
const double tOverlapRatio = 0.5; // The time overlap = tOverlapRatio * tPeriod
const double Imax = 500; // Current maxmium = 500 A
const int geoWindings = 8;
const int totTraps = 3;

#endif