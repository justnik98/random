#include <iostream>
#include <vector>
#include "src/Random.h"
#include "src/utils.h"

int main() {
    Random r;
    double mean = 1;
    double rate = 1;
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
    std::cout << r.randRayleigh(sigma) << std::endl;
    std::cout << r.randPoisson(rate) << std::endl;
    uint32_t num = 1000000;
    std::vector<double> v;
    v.reserve(num);
    for (int i = 0; i < num; ++i) {
        v.push_back(r.randGaussian(0, 3));
    }
    std::cout << stat::min(v.begin(), v.end()) << std::endl;
    std::cout << stat::max(v.begin(), v.end()) << std::endl;
    std::cout << stat::sum(v.begin(), v.end()) << std::endl;
    std::cout << stat::mean(v.begin(), v.end()) << std::endl;
    std::cout << stat::variance(v.begin(), v.end()) << std::endl;

    std::vector<double> v2;
    v2.reserve(num);
    for (int i = 0; i < num; ++i) {
        v2.push_back(r.rnd());
    }

    std::cout << stat::min(v2.begin(), v2.end()) << std::endl;
    std::cout << stat::max(v2.begin(), v2.end()) << std::endl;
    std::cout << stat::sum(v2.begin(), v2.end()) << std::endl;
    std::cout << stat::mean(v2.begin(), v2.end()) << std::endl;
    std::cout << stat::variance(v2.begin(), v2.end()) << std::endl;
    return 0;
}
