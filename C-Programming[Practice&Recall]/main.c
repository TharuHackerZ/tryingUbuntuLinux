//fibonacci series

#include <stdio.h>
int main(void){
    int limit, swap1 = 0,  swap2 = 1, swap3 = swap1 + swap2;
    printf("Enter how many first fibonacci series number do you want to get[0 included]:\t");
    scanf("%d", &limit);
    printf("\n%d\t%d\t", swap1, swap2);
    for(int i = 0; i <= limit-3; ++i){
        swap1 = swap2;
        swap2 = swap3;
        printf("%d\t", swap3);
        swap3 = swap1 + swap2;
    }
    printf("\n");
    return 0;
}