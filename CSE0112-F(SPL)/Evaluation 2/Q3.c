#include <stdio.h>


int findifPrime(int x){
    {
        if (x % 2 == 0)
            {
            return 0;
        }
        else
        {
            return 1;

        }
    }
}


int scanandmaxprime(int n){

    findifPrime(n);
    if ( findifPrime(n) == 1){
        return 1;
    }
    else{
        return 0;
    }

}


void main(){

    int size=9999, n;

    int array[size];
    for (int i = 0; i < size; i++)
     {
        scanf("%d", array[i]);
     }

    scanf("%d",&n);
    scanandmaxprime(n);


    if ( scanandmaxprime(n) == 1){
     {
         printf("%d\n",);
     }

    }
    else{
        printf(" None\n");


    }
}
