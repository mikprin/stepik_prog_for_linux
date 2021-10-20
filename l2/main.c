#include "solution.h"

int main()
{
    //hello_message("USER");
    const char s[] = "1231231231";
    size_t multiplier = 1;
    int count = 1;
    int ret_code = stringStat(&s, multiplier, &count);

    printf("%d \n",ret_code);
    return 0;
}