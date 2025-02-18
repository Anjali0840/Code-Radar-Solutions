#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case1:
        printf("Monday",a);
        break;
        case2:
        printf("Tuesday",a);
        break;
        case3:
        printf("Wednesday",a);
        break;
        case4:
        printf("Thursday",a);
        break;
        case5:
        printf("Friday",a);
        break;
        case6:
        printf("Saturday",a);
        break;
        case7:
        printf("Sunday",a);
        break;
        case default:
        printf("Invalid",a);
    }
    return 0;
}