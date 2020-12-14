#include <iostream>
#include "Random.h"

int main() {
    Random r;
    double mean = 1;
    std::cout << r.rand() << std::endl;
    std::cout << r.rnd() << std::endl;
    std::cout << r.randGaussian() << std::endl;
    std::cout << r.randExp(mean) << std::endl;
    return 0;
}
