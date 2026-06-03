#include<stdio.h>
int main(){
    int a[10], b[10], i;

    for(int i=0;i<=9;i++){
        a[i]= 'A'+i;
        b[i]= 'a'+i;
        printf("%d ",b[i]-a[i]);
    }
    return 0;
}