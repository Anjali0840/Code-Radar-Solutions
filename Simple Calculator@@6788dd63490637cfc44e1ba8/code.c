#include<stdio.h>
int main(){
    int a,b,sum;
    char c;
    scanf("%d%d",&a,&b);
    scanf("%c",&c);
    if (c== '+'){
        printf("%d",a + b);
    }else if(c== '-'){
        printf("%d",a-b);
    }else if (c== '*'){
        printf("%d",a*b);
    }else if (b!=0 && c== '/'){
        printf("%d",a/b);
    }else{
        printf("error");
    }
    return 0;
}