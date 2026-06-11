#include<stdio.h>

struct student{
    int rn;
    char name[50];
    char branch[30];
    float attendance;
    float per;
}s[10];

int main(){

    int n,i,ch,search;
    int top=0;

    printf("Enter Number of Students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        printf("\nEnter Roll Number: ");
        scanf("%d",&s[i].rn);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Branch: ");
        scanf("%s",s[i].branch);

        printf("Enter Attendance: ");
        scanf("%f",&s[i].attendance);

        printf("Enter Percentage: ");
        scanf("%f",&s[i].per);

        if(s[i].per>s[top].per){
            top=i;
        }
    }

    printf("\n1.Display Students");
    printf("\n2.Search Student");
    printf("\n3.Find Topper");
    printf("\n4.Attendance Below 75%%");

    printf("\nEnter Choice: ");
    scanf("%d",&ch);

    switch(ch){

        case 1:

            for(i=0;i<n;i++){

                printf("\nRoll No : %d",s[i].rn);
                printf("\nName : %s",s[i].name);
                printf("\nBranch : %s",s[i].branch);
                printf("\nAttendance : %.2f",s[i].attendance);
                printf("\nPercentage : %.2f\n",s[i].per);
            }
            break;

        case 2:

            printf("Enter Roll Number: ");
            scanf("%d",&search);

            for(i=0;i<n;i++){

                if(s[i].rn==search){

                    printf("\nStudent Found");
                    printf("\nName : %s",s[i].name);
                    printf("\nBranch : %s",s[i].branch);
                    printf("\nAttendance : %.2f",s[i].attendance);
                    printf("\nPercentage : %.2f",s[i].per);
                }
            }
            break;

        case 3:

            printf("\nTopper Details");
            printf("\nRoll No : %d",s[top].rn);
            printf("\nName : %s",s[top].name);
            printf("\nPercentage : %.2f",s[top].per);
            break;

        case 4:

            printf("\nStudents Below 75%% Attendance\n");

            for(i=0;i<n;i++){

                if(s[i].attendance<75){

                    printf("%s\n",s[i].name);
                }
            }
            break;
    }

    return 0;
}