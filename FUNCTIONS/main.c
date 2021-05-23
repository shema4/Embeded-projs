

#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int flag =9;
void Add_Student(void);
void edit_student(char* name);
void Delete_student (char* name);
int search_student_name (char* name);
void print_school (void);

std_t arr[100]= {{"Mohab",18,'A',0},{"khaled",18,'C',1},{"Ali",17,'D',2},{"Alaa",20,'B',3},
    {"Taher",19,'B',4},{"sara",17,'A',5},{"mona",16,'D',6},{"Esraa",19,'A',7},{"Omar",18,'A',8}
};
int main()
{
    int OP_num,student_index;
    char str_name[20]= {0};
    while(1)
    {
        printf ("Choose your operation : \n \n 1.Add Student \n 2.Edit Student \n 3.Find Student \n 4.Print School \n 5.Delete Student \n");
        scanf("%d",&OP_num);
        switch (OP_num)
        {
        case 1 :
            Add_Student();
            break;
        case 2 :
            printf("Enter student name :");
            string_scan(str_name);
            edit_student(str_name);
            break;
        case 3 :
            printf("Enter student name :");
            string_scan(str_name);
            student_index=search_student_name(str_name);
            if(student_index!=-1)
                student_print(arr[student_index]);
            else
                printf(" Ay 7aga");
            break;
        case 4 :
            print_school();
            break;
        case 5 :
            printf("Enter student name :");
            string_scan(str_name);
            Delete_student(str_name);

            break;

        }


    }
    return 0;
}

















   /* printf("enter name:");
     string_scan(str,10);
    std_t course[15]={{"mohab",22,'d'},{"ahmed",21,'c'},{"shaimaa",54,'d'}};
    int k=search_name(course,3,str);
    if(k==0)
        printf("not found");
    else
        student_print(course[k]);*/
    // print_studentname(course,15);
    // string_print(course[print_studentname(course,15)].name);

   /* int x=7;
    int y=4;
    int mul,sum;
    struct res r;
    r=addd_mul(x,y);
    printf("%d\n%d",r.mul,r.sum);*/

   /* int num;
    while(1)
    {
        printf("Enter number");
        scanf("%d",&num);
        int x=log2(num);
        int y=log2(num-1);

        printf("%d = %d ,nmnn,%d,,,,,%d",num,x,y);
        if((x-y)==1)

            printf("%d base of 2\n",num);
        else
            printf("%d not base of 2\n",num);


    }
*/

    // std_t course[10]= {{"shemaa",22,'a'},{"sghh",55,'d'}};
    //print_s(course,10);
    /*int n=3;
    int x=fabo(n);
    printf("%d",x);*/












