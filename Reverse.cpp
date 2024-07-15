#include "Reverse.h"

std::string Reverse::reverse(std::string& toReverse)
{
    std::string ret;
    ret.reserve(toReverse.size()); // Reserve memory to avoid multiple allocations
    for(auto rit = toReverse.rbegin(); rit != toReverse.rend(); ++rit)
    {
        ret.push_back(*rit); // Use push_back instead of insert for better performance
    }
    return ret;
}