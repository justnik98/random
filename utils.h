//
// Created by justnik on 14.12.2020.
//

#ifndef RANDOM_UTILS_H
#define RANDOM_UTILS_H

#include <iterator>

namespace stat {
    template<class It>
    double min(It first, It last);

    template<class It>
    double max(It first, It last);

    template<class It>
    double sum(It first, It last);

    template<class It>
    double mean(It first, It last);
}

#include "utils.ipp"


#endif //RANDOM_UTILS_H
