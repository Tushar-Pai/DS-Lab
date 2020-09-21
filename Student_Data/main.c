#include <stdio.h>
struct student
    {
        int id;
        int age;
        int marks;
    };
 

 
int main()
{    int n;
    
   struct student a[10];
   printf("Enter the number of students\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
     {
     printf("Enter student id\n");
      scanf("%d",&a[i].id);
     printf("Enter  student age\n");
      scanf("%d",&a[i].age);
     printf("Enter  student marks\n");
      scanf("%d",&a[i].marks);
     }
     for(int i=0;i<n;i++)
     {
         if(a[i].age>20&&a[i].marks>=65)
         {
            printf("%d student can take addmission\n",a[i].id); 
         }
         else
              printf("%d student cannot take addmission\n",a[i].id); 
     }
    return 0;
}
 