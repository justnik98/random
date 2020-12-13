//
// Created by justnik on 13.12.2020.
//

#include "Random.h"

Random::Random() {
    for (size_t i = 0; i < p; ++i) {
        X[i] = i;
    }
}

Random::Random(uint32_t seed) {
    srand(seed);
    for (size_t i = 0; i < p; ++i) {
        X[i] = std::rand();
    }
}

uint32_t Random::rand() {
    uint32_t y = (X[i] & mask1) + (X[i + 1] & mask2);
    if (y & 1) {
        X[i] = X[(i + q) % p] ^ (y >> 1) ^ a;
    } else {
        X[i] = X[(i + q) % p] ^ (y >> 1);
    }
    y = X[i] ^ (y >> u) ^ ((y << s) & b) ^ ((y << t) & c) ^ (y >> l);
    i++;
    i %= p;
    return y;
}

double Random::rnd() {
    return static_cast<double>(Random::rand()) / UINT32_MAX;
}
