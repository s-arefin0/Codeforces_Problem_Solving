#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
 
int main(){
    int n;
    scanf("%d", &n);
 
    while(n--){
    char word[100];
    scanf("%s", word);
    int len = strlen(word);
    int count = 0;
 
    if(len<=10){
        printf("%s\n", word);
    }
    else if(len>10){
        char first = word[0];
        char last = word[len-1];
        count = len-2;
        printf("%c%d%c\n", first, count, last);  
    }
    }
   
}