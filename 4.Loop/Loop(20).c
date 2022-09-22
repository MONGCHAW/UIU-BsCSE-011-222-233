#include <stdio.h>

int main() {

  int n, i, count = 1, addition = 0, temp = 0;
  printf("Enter N:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) 
  {
    count = (temp*10)+i;
    temp = count;
    addition = addition + count;
  }

  printf("\n%d", addition);
  
  return 0;
}