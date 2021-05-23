
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "functions.h"
extern std_t arr[100];
extern int flag ;
void student_print(std_t s)
{
    printf("name:%s   age:%d   grade:%c   ID:%d\n",s.name,s.age,s.grade,s.ID);

}


void student_printByRef(const std_t* ps)
{
   pu64 p1,p2,p3;
    printf("name:%9s   age:%d   grade:%c\n",(*ps).name,ps->age,(*ps).grade);

}

void Add_Student(void)
{

    printf("Enter student name :");
    string_scan(arr[flag].name);
    printf("Enter student age :");
    scanf("%d",&arr[flag].age);
    fflush(stdin);
    printf("Enter student grade :");
    scanf("%c",&arr[flag].grade);
    printf("Enter student ID :");
    scanf("%d",&arr[flag].ID);
    flag++;
}
int search_student_name (char* name)
{
    int i,index=0;
    for(i=0;i<flag;i++)
    {
         index= string_compare(arr[i].name,name);
         if(index)
            {

                return i;
            }

    }

   return -1;
}

void edit_student(char* name)
{ int g;

    g=search_student_name(name);
   if(g!=-1)
   {

      printf("Update student name :");
    string_scan(arr[g].name);
    printf("Update student age :");
    scanf("%d",&arr[g].age);
    fflush(stdin);
    printf("Update student grade :");
    scanf("%c",&arr[g].grade);
    printf("Update student ID :");
    scanf("%d",&arr[g].ID);
   }
   else
    {
        printf("Student does not exist");
    }
}
void print_school (void)
{
    int i;
    for(i=0;i<flag;i++)
    {
        student_print(arr[i]);
        printf("___________________________________________ \n");
    }
}
void Delete_student (char* name)
{
   int Del_index,i ;
    Del_index=search_student_name(name);
      if(Del_index!=-1)
      {
          for(i=Del_index;i<flag;i++)
          {
              arr[i]=arr[i+1];
          }
          flag--;
      }
          else
            printf(" Ay 7aga");
}

void student_scanByRef(std_t*ps)
{

    string_scan(ps->name);
    scanf("%d",&ps->age);
    fflush(stdin);
    scanf("%c",&ps->grade);

}#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "functions.h"
extern std_t arr[100];
extern int flag ;
void student_print(std_t s)
{
    printf("name:%s   age:%d   grade:%c   ID:%d\n",s.name,s.age,s.grade,s.ID);

}


void student_printByRef(const std_t* ps)
{
   pu64 p1,p2,p3;
    printf("name:%9s   age:%d   grade:%c\n",(*ps).name,ps->age,(*ps).grade);

}

void Add_Student(void)
{

    printf("Enter student name :");
    string_scan(arr[flag].name);
    printf("Enter student age :");
    scanf("%d",&arr[flag].age);
    fflush(stdin);
    printf("Enter student grade :");
    scanf("%c",&arr[flag].grade);
    printf("Enter student ID :");
    scanf("%d",&arr[flag].ID);
    flag++;
}
int search_student_name (char* name)
{
    int i,index=0;
    for(i=0;i<flag;i++)
    {
         index= string_compare(arr[i].name,name);
         if(index)
            {

                return i;
            }

    }

   return -1;
}

void edit_student(char* name)
{ int g;

    g=search_student_name(name);
   if(g!=-1)
   {

      printf("Update student name :");
    string_scan(arr[g].name);
    printf("Update student age :");
    scanf("%d",&arr[g].age);
    fflush(stdin);
    printf("Update student grade :");
    scanf("%c",&arr[g].grade);
    printf("Update student ID :");
    scanf("%d",&arr[g].ID);
   }
   else
    {
        printf("Student does not exist");
    }
}
void print_school (void)
{
    int i;
    for(i=0;i<flag;i++)
    {
        student_print(arr[i]);
        printf("___________________________________________ \n");
    }
}
void Delete_student (char* name)
{
   int Del_index,i ;
    Del_index=search_student_name(name);
      if(Del_index!=-1)
      {
          for(i=Del_index;i<flag;i++)
          {
              arr[i]=arr[i+1];
          }
          flag--;
      }
          else
            printf(" Ay 7aga");
}

void student_scanByRef(std_t*ps)
{

    string_scan(ps->name);
    scanf("%d",&ps->age);
    fflush(stdin);
    scanf("%c",&ps->grade);

}
void sort(std_t* arr)
{
    int f=0;
    for(int i=0;i<flag;i++)
    {
        for(j=0;j<flag-1-i;j++)
        {

       f=string_compare_1(arr[i].name,arr[i+1].name);

           if(f==F_BIGR){
          std_t temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]= temp;
           }
           else
           {

           }

       }

}}

/*void student_printByRef(const std_t* ps)
{
   pu64 p1,p2,p3;
    printf("name:%9s   age:%d   grade:%c\n",(*ps).name,ps->age,(*ps).grade);

}

std_t student_scan(void)
{
    std_t s;
    string_scan(s.name,20);
    scanf("%d",&s.age);
    fflush(stdin);
    scanf("%c",&s.grade);
    return s;


}
void student_scanByRef(std_t*ps)
{

    string_scan(ps->name,20);
    scanf("%d",&ps->age);
    fflush(stdin);
    scanf("%c",&ps->grade);

}



void struct_print(struct student*arr,int size)
{
  for(int i=0;i<size;i++)
  {
     printf("name:%9s   age:%d   grade:%c\n",arr[i].name,arr[i].age,arr[i].grade);
  }
}
void print_s(struct student*arr,int size)
{
     for(int i=0;i<size;i++)

    student_print(arr[i]);
}

*/
















