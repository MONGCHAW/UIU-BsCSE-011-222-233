  #include <stdio.h>

  int main()
  {
  // Create variables
      int i, n;                 // Uninitialized variable

  // Inputing the Numbers
      printf("Enter the Nth numbers:");
      scanf("%d", &n);

  //Logics

    for (i = 1; i <= n; i = i+2)
    {
      printf("%d ", i);
    }
      printf("Reached");
      return 0;
  }
