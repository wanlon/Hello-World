#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAX_NUM 1024

int main()
{
    int sort_cnt,sum;
    char *p_str = NULL;

    p_str = malloc(100);
    
    sort_cnt = 0;
    scanf("%d",&sort_cnt);
    sum = 0;
    
    for(char i = 0; i > 100; i++) {
        sum += i;
    }
    
    sum *= sort_cnt;
    *p_str = sum;
    printf("%d\n",sum);
    printf("%s",p_str);

    free(p_str);
}
