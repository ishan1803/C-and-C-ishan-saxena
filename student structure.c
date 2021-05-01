#include <stdio.h>
#include <string.h>
#include <conio.h>

struct student
{
    int roll;
    char name[20];
    char batch[4];
};
 int main()
 {
     int i;
     struct student s[2];
     printf("Enter details of students");
     printf("\n");
     for(i=1;i<=5;i++)
     {
         printf("Enter the name of student %d ",i);
         gets(s[i].name);
         printf("Enter the roll number of student %d ",i);
         scanf("%d",&s[i].roll);
         printf("Enter the batch of student %d ",i);
         fflush(stdin);
         gets(s[i].batch);
         printf("\n");

     }
    printf("\n");
     printf("The details entered are ");
     printf("\n");

	for(i=1;i<=5;i++)
	{
		printf("The name of student %d is ",i);
		puts(s[i].name);
		printf("\n");
		printf("The roll number of %d student is %d",i,s[i].roll);
		printf("\n");
		printf("The batch of student %d is %s ",i,s[i].batch);
		printf("\n");
	}
	return 0;
 }


