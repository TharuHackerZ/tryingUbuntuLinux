/*
generating a function to check whether the student is pass or fail on the basis of score
return "Pass" if score is equal or above 50 otherwise return "Fail"
*/ 

#include <stdio.h>
char* is_pass_or_fail(int score);
int main(void){
    int score;
    printf("Enter the obtained score:\t");
    scanf("%d", &score);
    char *result = is_pass_or_fail(score);
    printf("%s\n", result);

    return 0;
}
char* is_pass_or_fail(int score){
    if(score >= 50)
        return "Pass";
    return "Fail";
}