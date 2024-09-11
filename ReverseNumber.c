#include<stdio.h>
int reverse(int m){
    int rev=0;
    while(m>0){
        rev=(rev*10)+(m%10);
        m=m/10;
    }
    return rev;
}
int main(){
    int a;
    scanf("%d",&a);
    int rev=reverse(a);
    printf("%d",rev);
}
