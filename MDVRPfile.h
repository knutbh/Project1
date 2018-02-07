//
// Created by Knut Bjarte Haus on 07.02.18.
//
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#ifndef PROJECT1_READMDVRP_H
#define PROJECT1_READMDVRP_H

#endif //PROJECT1_READMDVRP_H

class MDVRP{
private:

public:
    int m,n,t, Q;
    int* D;
    int* x;
    int* y;
    int* d;
    int* q;
    explicit MDVRP(std::string problemInstance);
    ~MDVRP();
};

class solution{
