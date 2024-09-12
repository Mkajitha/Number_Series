#include<stdio.h>

void digit_count(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    digit_count(n);
    return 0;
}
