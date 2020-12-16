#include <iostream>
#include <vector>
#include "Random.h"
#include "utils.h"

int main() {
    Random r;
    double mean = 1;
    double sigma = 1;
    uint32_t k = 2;
    double gamma = 1;
    double x0 = 0;
    std::cout << r.rand() << std::endl;
    std::cout << r.rnd() << std::endl;
    std::cout << r.randGaussian() << std::endl;
    std::cout << r.randGaussian(mean, sigma) << std::endl;
    std::cout << r.randExp(mean) << std::endl;
    std::cout << r.randChi2(k) << std::endl;
    std::cout << r.randLogistic(mean, sigma) << std::endl;
    std::cout << r.randCauchy(x0, gamma) << std::endl;
    std::cout << r.randStudentT(k) << std::endl;
    uint32_t num = 100000000;
    std::vector<double> v;
    for (int i = 0; i < num; ++i) {
        v.push_back(r.randGaussian(0, 3));
    }
    std::cout << stat::min(v.begin(), v.end()) << std::endl;
    std::cout << stat::max(v.begin(), v.end()) << std::endl;
    std::cout << stat::sum(v.begin(), v.end()) << std::endl;
    std::cout << stat::mean(v.begin(), v.end()) << std::endl;
    std::cout << stat::variance(v.begin(), v.end()) << std::endl;
    return 0;
}
