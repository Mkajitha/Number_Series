#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    factorial(a);
    }
void factorial(int k){
    int fact=1;
    int l;
    for(l=k;l>=2;l--){
        fact=fact*l;
    }
    printf("%d",fact);
    }
