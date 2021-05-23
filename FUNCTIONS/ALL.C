
int string_compare(char*str1,char*str2)
{
    int x;
    for(int i=0;str1[i]||str2[i];i++)
    {
        if (str1[i]==str2[i])
           x=1;
        else
            x= 0;
    }
    return x;
}
////////////////////////////////////////////////////////////////////////
    int string_print(char*strin)
    {
        for(int i=0; strin[i]!=0; i++)
        {
            printf("%c",strin[i]);
        }
    }
    ///////////////////////////////////////////////////////////////////////////
    string_Reverse(char*str)
    {
        int i,length=0,x;
        char temp;
        length=strlen(str);
        x=length-1;
        for(i=0;i<(length/2);i++)
        {
            temp=str[i];
            str[i]=str[x];
            str[x]=temp;
            x--;
        }
        return str;
    }
//////////////////////////////////////////////////////////////////////////////
string_lowercase(char*str)
{
    for(int i=0; str[i]; i++)
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]-('A'-'a');
        }

}
///////////////////////////////////////////////////
 int string_compareNOTCASesensitive(char*str1,char*str2)
{

    for(int i=0; str1[i]||str2[i]; i++)
    {
        if(str1[i]>='A'&&str1[i]<='Z')
        {
            str1[i]=str1[i]-('A'-'a');}
            if(str2[i]>='A'&&str2[i]<='Z')
            {
                str2[i]=str2[i]-('A'-'a');
            }
            if(str1[i]!=str2[i])
            {
                return 0;
            }

            return 1;
        }
    }

    /////////////////////////////////////////////////////////////////////
  /* char string_REmoveduplicate(int* str)
{
    int i,c,j;
    int length=strlen(str);
    for(i=0;i<length; i++)
    {
        for(int j=0;j<i; j++)     //bscan b for 2 3l4an acompare lw et3loh present 2bl kda!!
        {

        if(str[i]==str[j])
         break;
    }
    if(j==i)
    str[c++]=str[i];     //lw m4 present b7t el res f modify str

    }
    return str;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////
/*int string_Firstrep(int* str)
{
    int i,c;
    int length=strlen(str);
    for(i=0;i<length; i++)
    {
        for(int j=i+1;j<length; j++)
        {

        if(str[i]==str[j+1])
         c=i;
    }
    }
    return c;
}
*/
short swap_byte(short  num)
{
   num= ((num<<8)&0xff00)|((num>>8)&0x00ff);
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
void string_scan_maxsize(char*str,int max_size)
{
    int i=0;
      fflush(stdin);
     scanf("%c",&str[i]);
    while(str[i]!='\n'&&i<max_size-1)
    {
          i++;
        scanf("%c",&str[i]);

    }
   str[i]=0;

}
//////////////////////////////////////////////////////////////////////////////////////////////////////
int string_to_int(char*str)
{
    int i,r=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        r=r*10+str[i]-'0';
    }
    return r;
}

void string_copy(char*source,char*copy){
    int i;
for( i=0;source[i];i++)
{
 copy[i]=source[i];
}
    copy[i]=0;
}

