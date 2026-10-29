#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int X = 0;
    char action[10];
    while(n--){
        scanf("%s", action);
        if(strcmp(action,"X++") == 0 || strcmp(action, "++X") == 0){
            X++;
        }
        else if(strcmp(action,"X--") == 0 || strcmp(action, "--X") == 0){
            X--;
        }
 
    }
    printf("%d", X);
    return 0;
}