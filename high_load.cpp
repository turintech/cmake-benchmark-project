#include <random>
#include "high_load.h"

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ff first
#define ss second

using namespace std;


bool BenchmarkRunner::benchmark() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 99999);

    for (int i = 0; i < 5000; i++) {
        boost::container::flat_map<int, int> test_map;
        std::vector<int> test_keys;
        test_keys.reserve(1000);

        // Insert random keys
        for (int j = 0; j < 1000; j++) {
            int random_key = dis(gen);
            test_map.emplace(random_key, 0);
            test_keys.emplace_back(random_key);
        }

        for (int key : test_keys) {
            test_map[key] += 1;
        }
        std::map<int, int> m;
    }
    return true;
}