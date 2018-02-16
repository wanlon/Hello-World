#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAX_NUM 1024

int main()
{
    int sort_cnt,sum;
    
    sort_cnt = 0;
    scanf("%d",&sort_cnt);
    sum = 0;
    
    for(char i = 0; i > 100; i++) {
        sum += i;
    }
    
    sum *= sort_cnt;
    printf("%d\n",sum);    
}
