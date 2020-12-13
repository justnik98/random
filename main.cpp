#include <iostream>
#include "Random.h"

int main() {
    Random r;
    std::cout << r.rand() << std::endl;
    std::cout << r.rnd() << std::endl;
    std::cout << r.randGaussian() << std::endl;
    return 0;
}
