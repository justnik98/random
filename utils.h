//
// Created by justnik on 14.12.2020.
//

#ifndef RANDOM_UTILS_H
#define RANDOM_UTILS_H

#include <numeric>

namespace stat {
    template<class It>
    double min(It first, It last) {
        return std::accumulate(first, last, std::numeric_limits<double>::max(), std::min<double>);
    }

    template<class It>
    double max(It first, It last) {
        return std::accumulate(first, last, std::numeric_limits<double>::min(), std::max<double>);
    }

    template<class It>
    double sum(It first, It last) {
        return std::accumulate(first, last, 0.0);
    }

    template<class It>
    double mean(It first, It last) {
        return static_cast<double>(sum(first, last)) / (last - first);
    }
}
#endif //RANDOM_UTILS_H
