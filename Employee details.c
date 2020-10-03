#include<stdio.h>
#include<string.h>
struct Details
{
   char name[20];
    char employeeID[20];
     char experience[20];
     int salary;
}emp[100];
int main()
{
int i=0,n=0;
printf("Enter the number of employees: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("\nEnter details of employee %d :",i+1);
    printf("\nEnter your name: ");
    scanf("%s",&emp[i].name);
    printf("\nEnter your ID: ");
    scanf("%s",&emp[i].employeeID);
    printf("\nEnter your experience: ");
    scanf("%s",&emp[i].experience);
    printf("\nEnter your salary: ");
    scanf("%d",&emp[i].salary);
}
for(i=0;i<n;i++)
{
printf("\nName : %c\nEmployee ID : %c\nExperience : %c\nSalary : %d",emp[i].name,emp[i].employeeID,emp[i].experience,emp[i].salary);
}
return 0;
}
