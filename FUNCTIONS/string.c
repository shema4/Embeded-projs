
#include <stdio.h>
#include <stdlib.h>

void string_print(char*str)
{
    int i;

    for(i=0;str[i]; i++)//str[i]!='\0'
    {
       printf("%c",str[i]);
        }
        printf("\n");
}
int string_compare(char*str1,char*str2)
{
    int i;
    for(i=0; str1[i]||str2[i]; i++) //str[i]!='\0'
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
    }
return 1;
}
#define F_BIGR 2
#define S_BIGR 0
#define EQUAL 1


int string_compare_1(char*str1,char*str2)
{
    int i;
    for(i=0; str1[i]||str2[i]; i++) //str[i]!='\0'
    {
        if(str1[i]>str2[i])
        {
            return F_BIGR;
        }
        else if(str1[i]<str2[i])
        {
            return S_BIGR;
        }
        else
        {

        }
    }
    return EQUAL ;
}
int str_len(char*str)
{
     int i;
    for(i=0; str[i];i++) //str[i]!='\0'
    {

    }
return i;
}
void str_copy(char*source,char*copy,int size_max)
{
    int i;
     for(i=0;source[i]&&i<size_max;i++) //str[i]!='\0'
    {
        copy[i]=source[i];

    }
    copy[i]=0;
}
void str_case_change(char*str)
{
    int i;
     for(i=0;str[i];i++) //str[i]!='\0'
    {
       if(str[i]>='A'&&str[i]<='Z')
       {
           str[i]=str[i]+('a'-'A');
       }

    }
}

int string_compare_not_case_sens(char*str1,char*str2)
{
    int i;
    for(i=0; str1[i]||str2[i]; i++) //str[i]!='\0'
    {
        if(str1[i]>='A'&&str1[i]<='Z')
        {
            str1[i]=str1[i]+('a'-'A');
        }
        if(str2[i]>='A'&&str2[i]<='Z')
        {
            str2[i]=str2[i]+('a'-'A');
        }

        if(str1[i]!=str2[i])
        {
            return 0;
        }
    }
    return 1;
}



void string_scan(char*str)
{


    int i=0;
    fflush(stdin);
   scanf("%c",&str[i]);
  while(str[i]!='\n')
    {
        i++;
        scanf("%c",&str[i]);
    }
str[i]=0;

}
int stringToInt(char*str)
{
     int i,x=0;


for(i=0;str[i];i++)
   {
        if(str[i]>='0'&&str[i]<='9')
        {
           x=(str[i]-'0')+x*10;
        }


   }
return x;
}

int string_mirror_check(char*str)
{
    int i,x,l;
    char z;
    l=str_len(str);
    x=l-1;
    for(i=0; i<l/2; i++)
    {
        if(str[i]!=str[x])
        {
            printf("not mirror\n");
           return -1;
        }
        x--;
    }
    printf("mirror\n");
    return 1;
}

     void string_reverse(char*str)
{
    int i,x,l;
    char z;
l=str_len(str);
x=l-1;
    for(i=0; i<l/2;i++)
    {
        z=str[i];

        str[i]=str[x];

        str[x]=z;
        x--;

    }
}

void f_repeated_char_remove(char*str,char*str_c)
{
    int i,j=0;
    char s[256]={0};
char r,z;
    for(i=0;str[i];i++)
    {
        r=str[i];

        s[r]++;
        if(s[r]==1)
        {
            str_c[j]=str[i];

            j++;
        }
    }

     str_c[j]=0;
}

int first_repeated_char(char*str)
{
    int i,j=0,max=1;
    char s[256]={0};
char r,z;
    for(i=0;str[i];i++)
    {
        r=str[i];

        s[r]++;
         if(s[r]>max)
        {
            return str[i];
        }

    }

}
void string_circular_shift(char*str)
{
    int i,last_c,n_strt=0,count=0,flag=0,len,reset=0,j;
    len=str_len(str);
    for(j=0; j<len; j++)
    {
        last_c=str[len-1];
        for(i=len-1; i>n_strt; i--)
        {
            str[i]=str[i-1];
        }
        if(str[len-1]==' ')
        {
            reset=count;
            flag=1;
        }
        count++;
        str[n_strt]=last_c;
        if(1==flag)
        {
            n_strt=reset;
            flag=0;
        }
    }
}
	void floatTostring(float num,char*str)
{
     int i=0,j,x,y,z,r=1,v=10,a,rr;
    x=num;
    while(x)
    {
        x=x/10;
        i++;
    }
    rr=i;
    x=num;
while(x)
   {
       y=x%10;

str[i-1]=y+'0';
x=x/10;
i--;
   }
   i=rr;
  str[i]='.';
  z=num;
 num=num-z;
i++;
r=num*v;
for(j=0;j<2;j++)
 {
    str[i]=r+'0';

 v=v*10;
 a=num*v;
  r=((a%10)%10);
    i++;
 }
 str[i]=0;
}
int find_char_in_page(char str [10][50],char element,int*index_2)
{
    int i,j,index_1;
    for(i=0;i<10;i++)
    {
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]==element)
            {
             index_1=i;
             *index_2=j;
             return index_1;
            }
        }
    }

    return -1 ;
}

//////////////////////////////////////
/*
int linear_search(int*array,int size,int element)
{
int i,index=-1,flag=0;
for(i=0;i<size//&&flag==0//;i++)
{
    if(arr[i]==element)
        {
            index=i;
           // flag=1;
        }

}
return index;
}
/////////////////////////////////
#define serial_lens  5
#define not found -1
typenum{
false=0;
true;
}
bool_t;
bool_t serial_compare(char*s1,char*s2)
{
    for(i=0;i<serial_lens;i++)
    {
        if(s1[i]!=s2[i])
            return false;
    }
}
int seria_linear_search(char arr[][serial_lens],int size,char*s)
{
    int i;
    for(i=0;i<size;i++)
    {
      serial_compare((arr[i],s)==true)
      return i;
    }
    return not found;
}
int main()
{
    int size=(sizeof(array ofserial)/sizeof(array of serial[0]));
    printf("%d",size);
    unsigned char s1[]={0x08,0x01,0x20,0x24};
    int index=seria_linear_search(array of serials,size,s1);
    if(index==not found)
        printf("not found");
    else
         printf(" found");
    return 0;
}
//////////////////////////////////////////////////////////////
void serial_print_all(char arr[][serial_lens],int size)
{
    int i;
    for(i=0;i<size;i++){
        array_print(arr[i],serial_lens);
        printf("\n");
    }
}
int main()
{
  serial_print_all(array of serials,size);
}
/////////////////////////////////////////////////////
void serial_print(unsigned char*s)
{int i;
    for(i=0;i<size;i++){
              printf("%x",s[i]);

}
}
int main()
{
   serial_print(arr[i]);
   */
