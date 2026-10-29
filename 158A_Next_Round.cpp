#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    int count = 0;
    scanf("%d %d", &n, &k);
    
    int array[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }
 
    int minRankerScore = array[k-1];
 
    if(minRankerScore>0){
        for(int i = 0; i<n; i++){
            if(array[i]>=minRankerScore){
                count++;
            }
        }
    }
 
    if(minRankerScore==0){
        for(int i = 0; i<n; i++){
            if(array[i]>0){
                count++;
            }
        }
    }
    printf("%d", count);
        
    
    
    return 0;
}