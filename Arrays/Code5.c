#include<stdio.h>
int main(){
    int a[5];
    a[0]=5;
    a[2]=-10;
    a[3/2]=2;
    a[3]=a[0];
    printf("%d %d %d %d ",a[0],a[1],a[2],a[3]);
    return 0;
}