#include<stdio.h>
int main(){
    int a;
    scanf("%d"&a);
    printf("%d",a);
    int b;
    scanf("%d",&a);
    printf("%d",b);
    int c=(a+b);
    printf("Sum: %d",c);
    return 0;
}