#include "solution.h"
#include <stddef.h>

int main()
{
    //hello_message("USER");
    const char s[] = "123";
    size_t multiplier = 1;
    int count = 1;
    int ret_code = stringStat(&s, multiplier, &count);

    print("%d \n",ret_code);
    return 0;
}