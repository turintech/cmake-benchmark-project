#include <unordered_map>
#include <folly/FBVector.h>
#include "high_load.h"

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ff first
#define ss second

using namespace std;


bool BenchmarkRunner::benchmark(){
        srand( (unsigned)time(NULL) );
        for(int i=0;i<5000;i++) {
            boost::container::flat_map<int, int> test_map;
            folly::fbvector<int> test_keys;
            // Insert random keys
            for (int i = 0; i < 1000; i++) {
                int random_key = rand() % 100000;
                test_map[random_key] = 0;
                test_keys.emplace_back(random_key);
            }

            for (int key : test_keys) {
                test_map[key] += 1;
            }
            std::unordered_map<int, int> m;
        }
        return true;
}