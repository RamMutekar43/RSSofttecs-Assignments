#include<stdio.h>
int main(){
    int r, optn;
    float ans;

    printf("Enter radius of circle: ");
    scanf("%d",&r);

    printf("Select Option index:\n ");
    printf("1. Area of circle\n ");
    printf("2. Circumference of circle\n ");
    printf("3. Volume of sphere\n ");
    scanf("%d",&optn);

    switch(optn){
        case 1 :
        ans = 3.14*r*r;
        printf("Area of circle is: %f",ans);
        break;

        case 2 :
        ans = 2*3.14*r;
        printf("Circumference of circle is: %f",ans);
        break;

        case 3 :
        ans = 3.14*r*r*r*4/3;
        printf("Volume of sphere is: %f",ans);
        break;

        default :
        printf("Enter valid Option.");
        return 0;

    }

    return 0;
}  