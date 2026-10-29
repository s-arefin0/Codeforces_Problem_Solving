#include<stdio.h>
 
int main(){
    int m, n;
    scanf("%d%d", &m, &n);     // Read both numbers at once
 
    int pieces = (m * n) / 2;
 
    printf("%d\n", pieces);
 
    return 0;
}