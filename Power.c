#include<stdio.h>
int power(int x,int y){
    int pow=1;
    int i;
    for(i=1;i<=y;i++){
        pow=pow*x;
    }
    return pow;
}
int main(){
    int base;
    scanf("%d",&base);
    int expo;
    scanf("%d",&expo);
    int ans=power(base,expo);
    printf("%d",ans);
}
