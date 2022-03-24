#ifndef __BENCHMARK_H__
#define __BENCHMARK_H__

#include <cstdio>
#include <ctime>
#include <boost/container/flat_map.hpp>
#include <boost/container/stable_vector.hpp>
#include <map>

/**
 * Trivial class to check if a string is a palindrome.
 */
class BenchmarkRunner
{
public:
    bool benchmark();
};

#endif
