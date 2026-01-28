#include<stdio.h>

struct student{
  int roll;
  char name[20];
  float marks;
};

int main(){
struct student s;
struct student*ptr;

ptr = &s;

printf("Enter roll number:");
scanf("%d", &ptr->roll);

printf("Enter name of a student:");
scanf("%s",ptr->name);

printf("Enter the marks:");
scanf("%f",ptr->marks);

printf("\nstudent Details;\n");
printf("Roll Number:%d\n",ptr->roll);
printf("Name:%s\n",ptr->name);
}
return 0;
