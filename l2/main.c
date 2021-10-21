#include "solution.h"

int main()
{
    //hello_message("USER");
    const char s[] = "";
    size_t multiplier = 1;
    int count = 1;
    int ret_code = stringStat(&s, multiplier, &count);

    printf("%d \n",ret_code);
    printf("%d \n",count);
    return 0;
}