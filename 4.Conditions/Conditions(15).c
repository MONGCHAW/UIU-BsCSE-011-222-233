#include <stdio.h>
 
int main(void)
{
   int x, y1, y2, y3, n = 3;
 
   scanf("%d", &x);
   system("cls");
   scanf("%d", &y1);
 
   if (x != y1)
   {
       n--;
       printf("Wrong, %d Chance(s) Left!\n", n);
       scanf("%d", &y2);
   }
   if (x != y2 && n == 2)
   {
       n--;
       printf("Wrong, %d Chance(s) Left!\n", n);
       scanf("%d", &y3);
   }
   if (x != y3 && n == 1)
   {
       n--;
       printf("Wrong, %d Chance(s) Left!\n", n);
   }
 
   if (n == 0)
       printf("Player-1 wins!\n");
   else
       printf("Right, Player-2 wins!\n");
 
   return 0;
}