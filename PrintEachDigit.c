#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    print_each_digit(n);
    return 0;
}
void print_each_digit(int a){
    while(a>0){
        int b=a%10;
        printf("%d\n",b);
        a=a/10;
    }
}
