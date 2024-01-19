#include "high_load.h"

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ff first
#define ss second

using namespace std;


bool BenchmarkRunner::runBenchmark() {
    // Initialize random number generator with current time as seed
    srand(static_cast<unsigned>(time(nullptr)));

    // Perform 5000 iterations of the benchmark
    for(int i = 0; i < 5000; i++) {
        // Initialize a flat_map and a stable_vector from the Boost library
        boost::container::flat_map<int, int> testMap;
        boost::container::stable_vector<int> testKeys;

        // Insert 1000 random keys into the map and vector
        for (int i = 0; i < 1000; i++) {
            int randomKey = rand() % 100000;
            testMap[randomKey] = 0;
            testKeys.push_back(randomKey);
        }

        // Increment the value of each key in the map
        for (int key : testKeys) {
            testMap[key] += 1;
        }

        // Unused map, consider removing if not needed
        map<int, int> m;
    }

    // Return true to indicate successful completion of the benchmark
    return true;
}