#include <stdio.h>

int primeChecker (int a){
    int count=0;
 for (int i = 1; i <= a; i++)
    if(a % i == 0){
        count ++;
    }
    if(count <= 2)
        return 1;
    else
        return -1;
 }

int checkerFunc1 (int a) {
    int m, sumOfOdd = 0 , sumOfEven = 0, n;

 while(a != 0)
    {
        n = a % 10;
        m = a - n;
    int q = m / 10;
        a = q;

        if(n % 2 == 0 || n == 1 )
                sumOfEven ++;
            else
                sumOfOdd ++;
    }

    if( sumOfOdd < sumOfEven){
        return 1;
    }
    else
        return -1;
}

int DemogorgonNumber (int a){
    if(checkerFunc1(a) == 1 && primeChecker(a) == 1){
        return 1;
    }
    else
        return -1;
}


void main(){
    int startNumber, endNumber;

    scanf("%d %d",&startNumber, &endNumber);

    for(int i = startNumber; i <= endNumber; i++){
        if(DemogorgonNumber(i) == 1){
            printf("%d ", i);
        }
    }
}
