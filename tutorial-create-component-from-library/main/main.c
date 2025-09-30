#include "tinyexpr.h"
#include <stdio.h>

void app_main(void)
{
    const char *c = "sqrt(5^2+7^2+11^2+(8-2)^2)";
    double r = te_interp(c, 0);
    printf("The expression:\n\t%s\nevaluates to:\n\t%f\n", c, r);
    // return 0;
}