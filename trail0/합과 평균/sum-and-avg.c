#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d", &a, &b);
    float d = (float)(a+b)/2;
    printf("%d %.1f", a+b, d);
    return 0;
}