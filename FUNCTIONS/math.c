// ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
//SUB DIV
void sub_div(int n1,int n2,int *psub,int*pdiv)
{

    if(n1>n2)
        *psub=n1-n2;
    else
    {
        *psub=n2-n1;

    }
    *pdiv=n1/n2;
}




// ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,




//..........................................
int sqrt(int n)
{
    int flag=0;
    for(int i=1; (i*i<=n)&&(flag==0); i++)
    {
        if((i*i)==n)
        {
            flag=1;
            return i;
        }
    }
    if(flag==0)
    {

        printf("no root ");
    }
}




//,,,,,,,,,,,,,
/*int powerr(int n)
{
    int i,r=1,power;
    for(int i=1;i<power;i++)

        r=r*n;
   printf("res : %d\n",r);
}*/

int powerr(int n1,int n2)
{

    int num,power,res=1,i;
    res=1;

    for(i=0; i<n2; i++)
    {
        res=res*num;

    }
    printf("res : %d\n",res);
}


//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


//BINARY PRINT
void printbinary(int n)
{
    int i,flag=0;
    for(i=31; i>=0; i--)
    {
        if((n>>i)&1)
        {
            printf("1");
            flag=1;
        }


        else if (flag==1)
        {
            printf("0");
        }
    }
}
// ..............................

//IS PRIME
int isprime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;
}
//............................................

int  max (int n1,int n2)
{


    int y=0;
    if(n1>y)
        y=n1;
    if(n2>y)
        y=n2;
    return y;
}
//////////////////////////////////////////////////////////////////
static int maxi ,min ,flag;
void TAKE_number(int n)
{
    if (flag==0)
    {
        maxi=n;
        min=n;
        flag=1;
    }
    if(n>maxi)
    {
        maxi=n;
    }
    if(n<maxi)
    {
        min=n;
    }

}
int GET_max(void)
{
    return maxi;

}
int GET_min(void)
{
    return min;
}
////////////////////////////



/*{ int num;
    scanf("%d",&num);
    printf("%d=%d",num,log2(num));
    return 0;

}*/
////////////////////////////////////////
