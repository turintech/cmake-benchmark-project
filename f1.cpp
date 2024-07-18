#include <cstdint>
#include "f1.h"
#include <bits/stdc++.h>

typedef long long ll;

#define ff first
#define ss second

#include <iostream>
#include <cstdlib>

using namespace std;

bool F1::run() {
    std::cout << "f1" << std::endl;

    const int N = 10000;
    const int K = 10000;

    int64_t total = static_cast<int64_t>(N - 1) * (N - 2) / 2;
    if (K > total) {
        std::cout << -1 << std::endl;
        return false;
    }

    std::vector<std::pair<int, int>> edges;
    edges.reserve(N - 1 + K);

    for (int i = 2; i <= N; ++i) {
        edges.emplace_back(1, i);
    }

    for (int i = 2; i < N && total > K; ++i) {
        for (int j = i + 1; j <= N && total > K; ++j, --total) {
            edges.emplace_back(i, j);
        }
    }

    return true;
}