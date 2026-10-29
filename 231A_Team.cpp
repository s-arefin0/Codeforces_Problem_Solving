#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    scanf("%d", &n);
    while(n--){
        int sum = 0;
        int array[3];
        for(int i = 0; i<3; i++){
            scanf("%d", &array[i]);
            sum = sum + array[i];
        }
 
        if(sum>=2){
            count++;
        }
        
 
 
    }
    printf("%d", count);
}