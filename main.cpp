#include <iostream>
#include "Random.h"

int main() {
    Random r;
    for (int i = 0; i < 1000; ++i) {
        std::cout << r.rand() << std::endl;
    }
    return 0;
}
