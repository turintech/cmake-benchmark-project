#include "Reverse.h"


/**
 * This function reverses the order of characters in a given string.
 * 
 * @param toReverse A reference to the string that needs to be reversed.
 * @return A new string that is the reverse of the input string.
 */
std::string Reverse::reverse(const std::string& toReverse)
{
    std::string reversedString;

    // Iterate over the input string in reverse order
    for(auto rit = toReverse.rbegin(); rit != toReverse.rend(); ++rit)
    {
        // Append each character to the end of the reversed string
        reversedString.push_back(*rit);
    }

    return reversedString;
}