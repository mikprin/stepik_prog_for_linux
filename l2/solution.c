#include "solution.h"

int stringStat(const char *string, size_t multiplier, int *count){
    int str_lenth_modified = multiplier * strlen(string);  // Return to function
    count += 1; // Iterate count
    return str_lenth_modified; // return value
}

//#endif