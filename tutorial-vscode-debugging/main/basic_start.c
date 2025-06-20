#include <stdio.h>
#include "sdkconfig.h"


int add(int a, int b){
    int c = a+b;
    return c;
}

void app_main(void)
{
    printf("Hello tutorial!\n");
    int k = 7;
    int i = 8;
    int j = add(k,i);
    printf("Sum: %d + %d = %d\n",k,i,j);
    for(i=9;i<20;i++){
        printf("%d\n",i);
    }
}


