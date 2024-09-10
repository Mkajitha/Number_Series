#include<stdio.h>
void sum_till_single_digit(int m){
    while(m>9){
        m=sum_of_the_digit(m);
    }
    printf("%d",m);
}
int sum_of_the_digit(int a){
    int sum=0;
    while(a>0){
        int s=a%10;
        sum=sum+s;
        a=a/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    sum_till_single_digit(n);
    return 0;
}
