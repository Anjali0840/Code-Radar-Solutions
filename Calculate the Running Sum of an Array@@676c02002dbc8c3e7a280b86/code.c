#include<stdio.h>
int main(){


   for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             arr[j] += arr[i];
         }
             arr[i] += arr[i-1];
     }
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
}