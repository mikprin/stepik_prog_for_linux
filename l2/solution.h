#include <string.h>


int stringStat(const char *string, size_t multiplier, int *count){
    int str_lenth_modified = multiplier * strlen(*string);  // Return to function
    *count ++;
    return str_lenth_modified;
}