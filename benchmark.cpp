#include "benchmark.h"

using namespace std;

bool BenchmarkRunner::benchmark(){
        srand( (unsigned)time(NULL) );
        for(int i=0;i<100;i++) {
            boost::container::flat_map<int, int> test_map;
            boost::container::stable_vector<int> test_keys;
            // Insert random keys
            for (int i = 0; i < 5000; i++) {
                int random_key = rand() % 100000;
                test_map[random_key] = 0;
                test_keys.push_back(random_key);
            }

            for (int key : test_keys) {
                test_map[key] += 1;
            }
            map<int, int> m;
        }
        return true;
}