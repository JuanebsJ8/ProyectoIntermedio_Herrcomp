#ifndef __ENTROPY_H_
#define __ENTROPY_H_

#include <iostream>
#include <random>
#include <cmath>
#include <fstream>
#include <string>

void simulation (double T_MAX, int N, int seed, int NBINS, double Nsize, std::string filename);
double entropy (double initialvalue, int NBIN1, int NBIN2, int NNEWBIN1, int NNEWBIN2, double *distribution, int Ntotal, int size);
double dropsize (double * position, int Nsize);
void prob (double *distribution, double *position, int psize, int dsize, double range);
void simulationwithhole (double T_MAX, int N, int seed, int NBINS, double Nsize, std::string filename);

#endif
