// Accept initial velocity, acceleration and time. 
// Print the final velocity and the distance travelled.

#include<stdio.h>
int main(){
    // Variable declaration and user inputs
    int u, a, t;
    printf("Enter Initial Velocity: ");
    scanf("%d",&u);

    printf("Enter Acceleration: ");
    scanf("%d",&a);

    printf("Enter Time: ");
    scanf("%d",&t);

    // calculate Final velocity and Distance
    int v = u+a*t;
    int s = u+2*a*t;

    // print output
    printf("Final Velocity is: %d\n",v);
    printf("Distance is: %d",s);
    return 0;
}