#include <stdio.h>

int main()
{
// Create variables
    int x, n, input, i;                 // Uninitialized variable

// Inputing the Numbers
      scanf("%d", &x);
      scanf("%d", &n);
      system("cls");
      scanf("%d", &input);
//Logics
while (input != x){
    if (n-1 >= 1){
            printf("Wrong, %d Choice(s) Left!\n",--n);
            scanf("%d", &input);
            continue;
    }
    else{
        printf("Wrong, %d Choice(s) Left!\n",--n);
        printf("Player 1 Wins!");
        break;
    }
    }
    if (input == x){
        printf("Right,Player 2 Wins!");
    }
    return 0;
}


