/*
In this challenge we will use malloc function for dynamic array and get n number of input and give sum as output of those nubmers
*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
  int n;
  printf("Enter how many numbers do you want to give input:\t");
  scanf("%d", &n);
  int *arr = (int *)malloc(n * sizeof(int));
  printf("Enter numbers:\n");
  for (int i = 0; i < n; ++i){
    scanf("%d", &arr[i]);
  }
  int sum = 0;
  for (int i = 0; i < n; ++i){
    sum += arr[i];
  }
  printf("\n The sum is:\t%d.\n", sum);

  free(arr);
  return 0;
}