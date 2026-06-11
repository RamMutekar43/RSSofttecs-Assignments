#include<stdio.h>

struct student{
    int rn;
    char name[50];
    float marks[5];
    float total;
    float per;
    char grade;
} s1;

int main(){
    printf("Enter Roll Number: ");
    scanf("%d",&s1.rn);

    printf("Enter Name: ");
    scanf("%s",s1.name);

    printf("Enter Marks of 5 subjects: ");
    for(int i=0;i<5;i++){
        scanf("%f",&s1.marks[i]);
    }
    s1.total=0;
    for(int i=0;i<5;i++){
        s1.total += s1.marks[i];
    }

    s1.per = (s1.total/5);

    if(s1.per<60){
        s1.grade = 'F';
    }else  if(s1.per<=69 && s1.per>=60){
        s1.grade = 'D';
    }else  if(s1.per<=79 && s1.per>=70){
        s1.grade = 'C';
    }else  if(s1.per<=89 && s1.per>=80){
        s1.grade = 'B';
    }else{
        s1.grade = 'A';
    }
    
    printf("Roll Number : %d\n",s1.rn);
    printf("Name : %s\n",s1.name);
    printf("Total Marks : %d\n",s1.total);
    printf("Percentage : %f\n",s1.per);
    printf("Garde : %c\n",s1.grade);

    return 0;
}