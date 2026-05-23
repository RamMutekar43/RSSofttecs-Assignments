#include<stdio.h>
int main(){
    int u, a, t;
    printf("Enter Initial Velocity: ");
    scanf("%d",&u);

    printf("Enter Acceleration: ");
    scanf("%d",&a);

    printf("Enter Time: ");
    scanf("%d",&t);

    int v = u+a*t;
    int s = u+2*a*t;

    printf("Final Velocity is: %d\n",v);
    printf("Distance is: %d",s);
    return 0;
}