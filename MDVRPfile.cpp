
#include "MDVRPfile.h"


MDVRP::MDVRP(std::string problemInstance) {
    std::ifstream infile(problemInstance);
    std::string line;
    std::getline(infile, line);
    std::istringstream iss(line);
    iss >> m >> n >> t;
    int total = m + n;
    int foo;
    D=new int[t];
    x= new int [total];
    y= new int [total];
    d= new int [total];
    q= new int [total];
    for (int i = 0; i < t; i++) {
        std::getline(infile, line);
        std::istringstream iss(line);
        iss >> D[i] >> Q;
    }
    for (int i = 0; i < total; i++) {
        std::getline(infile, line);
        std::istringstream iss(line);
        iss >> foo >> x[i] >> y[i] >> d[i] >> q[i];
    }
}

MDVRP::~MDVRP(){
    delete[] x;
    delete[] y;
    delete[] D;
    delete[] d;
    delete[] q;
}


