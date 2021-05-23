
typedef unsigned long long   u64;
typedef unsigned long long*  pu64;




/*typedef struct student
{
    char name[20];
    int age;
    char grade;
    int ID ;


}std_t;*/



void student_print(std_t s);
void student_printByRef(const std_t* ps);

void student_scanByRef(std_t*ps);



/*
/////////////////////////////////////////

int fabo(int n)
{

    if(n<=1)
        return n;
    else
        return fabo(n-1)+fabo(n-2);
}

int array_binarySearchh(int*arr,int first,int last,int element)
{
    int middle=0;

    while( first<=last)
    {
        middle=(first+last-1)/2;
        if(arr[middle]==element)
        {
            return middle;
        }
        else if(arr[middle]>element)
        {
            return array_binarySearchh(arr,first,middle-1,element);
        }
        else
        {
            return array_binarySearchh(arr,middle+1,last,element);
        }

    }

    return -1;

}
int log2(int num)

{
    if(num>=1)
    {
        return 1+log2(num/2);
    }
    return 0;

}
*/

/*void student_print(std_t s);
void student_printByRef(const std_t* ps);
std_t student_scan(void);*/




//student_printall(student struct*arr,int size);
