
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    sum_of_the_digit(n);
    return 0;
}
void sum_of_the_digit(int n){
    int sum=0;
    while(n>0){
        int y=n%10;
        sum=sum+y;
        n=n/10;
    }
    printf("%d",sum);
}
