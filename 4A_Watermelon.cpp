#include<iostream>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int modValue = n%2;
    if(n>= 0 && n<=100 && n!= 2 && modValue==0){
            printf("YES");
    }
    else{
        printf("NO");
    }
}