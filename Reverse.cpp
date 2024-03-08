#include <algorithm>
#include "Reverse.h"

std::string Reverse::reverse(std::string& toReverse)
{
    std::string ret = toReverse;
    std::reverse(ret.begin(), ret.end());
    return ret;
}