#include "Reverse.h"

std::string Reverse::reverse(const std::string& toReverse)
{
    return std::string(toReverse.rbegin(), toReverse.rend());
}