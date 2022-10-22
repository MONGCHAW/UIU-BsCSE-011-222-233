#include <stdio.h>

int main() {
    int x, y, i=1, ans = 1;
    
    scanf ("%d", &x);
    
    scanf ("%d", &y);
    
    for(; i<=y; i++)
    {
        ans = ans*x;
    }
    
    printf("%d", ans);
    return 0;
}