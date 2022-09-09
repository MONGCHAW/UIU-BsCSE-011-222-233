  #include <stdio.h>

  int main()
  {
  // Create variables
      int i, n;                 // Uninitialized variable

  // Inputing the Numbers
      printf("Enter the Nth numbers:");
      scanf("%d", &n);

  //Logics
      for(i=0;n>0;i++)    
      {    
        a[i]=n%2;    
        n=n/2;    
      }
        printf("\nBinary of Given Number is=");    
      for(i=i-1;i>=0;i--)    
      {    
        printf("%d",a[i]);    
      }    
    // for (i = 1; i <= n; i = i+2)
    // {
    //   printf("%d ", i);
    // }
      return 0;
  }
