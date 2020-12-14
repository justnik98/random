#include <iostream>
#include "Random.h"

int main() {
    Random r;
    double mean = 1;
    double sigma = 1;
    uint32_t k = 2;
    std::cout << r.rand() << std::endl;
    std::cout << r.rnd() << std::endl;
    std::cout << r.randGaussian() << std::endl;
    std::cout << r.randGaussian(mean, sigma) << std::endl;
    std::cout << r.randExp(mean) << std::endl;
    std::cout << r.randChi2(k) << std::endl;
    return 0;
}
