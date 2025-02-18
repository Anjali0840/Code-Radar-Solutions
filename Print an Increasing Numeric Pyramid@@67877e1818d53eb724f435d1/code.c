#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
       for (j=1;j<=N-1;j++){
        printf(" ");
        for(j=1;j<=i;j++){
            printf("%d\n",j);
        }
       }
    }
    return 0;
}