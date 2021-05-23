

void swap(int *px,int *py)
{
    int temp=*px;
    *px=*py;
    *py=temp;
}
//...................................
int add_mul(int n1,int n2,int*pr_mul)
{
    *pr_mul=n1*n2;
    (n1)++;
    return n1+n2;
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,

void array_print (int *p_arr, int element_size)
{
    for (int i=0; i<element_size; i++)
    {
        printf("%d\t", p_arr[i]);
    }
    printf("\n");
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
int array_search (int number, int *p_arr, int element_size, int *p_f, int *p_last)
{
    int count = 0;
    char flag = 0;
    for (int i=0; i<element_size; i++)
    {
        if (p_arr[i]== number)
        {


            if (flag == 0)
            {
                *p_f = i;
                flag = 1;
            }

            *p_last=i;
            count++;
        }
    }

    if (flag)
        return count;
    else
        return -1;
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

int array_max (int *p_arr, int element_size)
{
    int max = p_arr[0];

    for (int i=0; i<element_size; i++)
    {
        if (p_arr[i]>max)
            max = p_arr[i];
    }
    return max;
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
int array_min (int *p_arr, int element_size)
{
    int min = p_arr[0];

    for (int i=0; i<element_size; i++)
    {
        if (p_arr[i]<min)
            min = p_arr[i];
    }
    return min;
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

void array_noprime (int *p_arr, int element_size)
{
    for (int i=0; i<element_size; i++)
    {
//        if(is_prime ( p_arr[i]))
            p_arr[i]=0;
    }
}
///,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
int array_scan (int *p_arr, int max_size)
{
    int n;
    printf("Enter the number of elements but not more than %d:",max_size);
    scanf("%d",&n);
    printf("enter elements:");

    if (n>max_size)
        n=max_size;

    for (int i=0; i<n ; i++)
    {
        scanf("%d",&p_arr[i]); // you can say p_arr+i
    }

    return n;
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
void array_initialize (int *p_arr, int element_size, int initialize)
{
    for (int i=0; i<element_size; i++)
    {
        p_arr[i] = initialize;
    }
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
int array_copy (int *p_arr_source, int element_size_source, int *p_arr_copy, int element_size_copy)
{
    int n=element_size_source;

    if (element_size_copy<element_size_source)
        n=element_size_copy;

    for (int i=0; i<n; i++)
    {
        p_arr_copy[i] = p_arr_source[i];
    }

    return n;
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
void array_swap (int *p_arr1, int element_size1, int*p_arr2, int element_size2)
{
    int temp, n = element_size1;

    if(element_size2<element_size1)
        n=element_size2;

    for (int i=0; i<n; i++)
    {
        temp = p_arr1[i];
        p_arr1[i] = p_arr2[i];
        p_arr2[i] = temp;
    }
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
void Array_reverse(int*arr,int size)
{
    int x=size-1;

    for(int i=0; i<size/2; i++)
    {
        int y=arr[i];

        arr[i]=arr[x-i];
        arr[x-i]=y;
        y--;
    }
}

//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
void array_swap_reverse (int*p_arr1, int element_size1, int*p_arr2, int element_size2)
{
    int temp,n = element_size1;

    if(element_size1>element_size2)
        n=element_size2;

    for (int i=0; i<n; i++)
    {
        temp=p_arr1[i];
        p_arr1[i] = p_arr2[n-i-1];
        p_arr2[n-i-1] = temp;
    }
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
void array_circular_Rshift (int*p_arr, int element_size, int shift_number)
{
    int temp_last;

    for(int j=0; j<shift_number; j++)
    {
        temp_last=p_arr[element_size-1];

        for (int i=element_size-1; i>0; i--)
        {
            p_arr[i] = p_arr[i-1];
        }

        p_arr[0]=temp_last;
    }

}

//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

int array_FindMostRepeatedsorted(int *p_arr, int element_size)
{
    int max=0, count=1, num=0;

    for (int i=0; i<element_size-1; i++)
    {
        if(p_arr[i]==p_arr[i+1])
                count++;
        else
            count=1;

        if(count>max)
            {
                max = count;
                num = p_arr[i];
            }
    }
    printf("%d\n",max);
    return num;
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
int array_MostRepeatedmononumbers(int *p_arr, int element_size)
{
    int max;
    int freq_arr[10]={0};

    for (int i=0; i<element_size; i++)
    {
              freq_arr[p_arr[i]]++;
    }

    max=array_max(freq_arr,10);

    return max;
}
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
int array_binarySearch (int *p_arr, int element_size, int element) //O(logn) time O(1) spacee
{
    int num, middleI, firstI, lastI;

    firstI=0;
    lastI = element_size-1;

    while(firstI<=lastI)
    {
        middleI=(firstI+lastI)/2;
        if(p_arr[middleI] == element)
            return middleI;
        else if(p_arr[middleI]<element)
            firstI=middleI+1;
        else
            lastI=middleI-1;
    }

    return -1;          //if you don't put it its undefined behaviour
}

////////////////////////////////////////////////////////////////////////////
void search(int* arr, int first, int last) // ologn
    {
        if (first > last)
            return;

        if (first==last)
            {
            printf("element is %d ", arr[first]);
            return;
        }
        int mid = (first+last) / 2;
        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1])
                search(arr, mid + 2, last);
            else
                search(arr, first, mid);
        }
         else
        {
             if (arr[mid] == arr[mid - 1])
                search(arr, mid + 1, last);
            else
                search(arr, first, mid - 1);
        }
    }
    /////////////////////////////////////////////////////////////////
    int array_maxdif(int*arr,int size)
{
    int maxdif=arr[1]-arr[0];
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]-arr[i]>maxdif)
            {
                maxdif=arr[j]-arr[i];
            }
        }
    }
    return maxdif;
}
////////////////////////////////////////////
int array_removeDuplicates(int *arr, int size)
{
    if (size==0 || size==1) //if array empty aw fyhaa 1 elem
        return size;

    int temp[size];

    int j = 0;
    for (int i=0; i<size-1; i++)
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];

    temp[j++] = arr[size-1];
    for (int i=0; i<j; i++)
        arr[i] = temp[i]; //b3ml copy temp  on orig array

    return j;
}
/////////////////////////////////////////////////////
int array_longestcon(int*array,int size)
{
    int count=0,max=0;
    int i;
    for(i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            count=0;
        }
        if(array[i]==max)
        {
            count++;
        }
    }
    printf("%d\n",max);
    return count;
}
//////////////////////////////////
int MaxRepertingElement(int* arr, int size)
{

    int max=0,res,c=1,num;

    int x=size-1;
    for (int i = 0; i < x; i++)
    {
        if (arr[i]==arr[i+1])

            c++;

        else
            c=1;
        if(c>max)
        {
            max=c;
            num=arr[i];
        }
    }
    printf("%d,,",max);
    return num;

}
//////////////////////////////////////////////
int power_three(int n)
{
    int i,flag=0;
    for(i=3; i<n; i++)
    {
        if(n%3==0)
        {
            n /= 3;
            flag=1;
        }
        else
            flag=0;

    }

    return flag;
}
/////////////////////////////////////////////////////
int array_max_min(int*arr,int size,int*pmin)
 {
     int max=arr[0],i;
     *pmin=arr[0];
     for(i=0;i<size;i++)
     {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<*pmin)
        {
            *pmin=arr[i];
        }

     }

     return max;
 }
 ///////////////////////////////////////////////
 int array_find(int*arr,int size,int element)
{
    int i,last_oc=-1,first_oc=-1,flag=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {

            {
                first_oc=i;

            }
            last_oc=i;
        }
    }

    return last_oc;
}
//////////////////////////////////////////////////////////////

int array_mostFrequent(int *arr, int size)
{
    int maxc = 1, res = arr[0], currc = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
            currc++;
        else
        {
            if (currc > maxc)
            {
                maxc = currc;
                res = arr[i - 1];
            }
            currc = 1;
        }
    }

    if (currc > maxc)
    {
        maxc= currc;
        res = arr[size - 1];
    }

    return res;
}
/////////////////////////////////////////////////////////////////////////
void pointer_swap (int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
///////////////////////////////////////

void array_Merge(int *arr1,int size1,int *arr2,int size2, int *arr3)
{

    int i = 0, j = 0, k = 0;
    while (i<size1 && j <size2)
    {
        arr3[k++] = arr1[i++];
        arr3[k++] = arr2[j++];
    }

    while (i < size1)
        arr3[k++] = arr1[i++];
    while (j < size2)
        arr3[k++] = arr2[j++];
}
///////////////////////////////////////////////////////////////////
int array_betweennum (int n1, int n2,int*arr,int size)
{
    for (int i=0; i<size; i++)
    {
        int num=i+n1+1;

        arr[i]=num;
    }
}
//////////////////////////////////////////////////////////////////////
void ATM_1(int num,int*arr)
{
    int i=0;
    int c[7]= {200,100,50,20,10,5,1};
    while(i<7)
    {
        arr[i]=num/c[i] ;               //bdivide 3l4an a3rf i will take kam paper
        num=num%c[i];                     //rem 3l4an a3rf el ba2ii
        i++;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
int array_missednum(int*arr,int size)
{
    int sum=0,missed;
    for(int i=0; i<size-1; i++)
    {
        int total_sum=size*(size+1)/2;
        sum=sum+arr[i];
        missed=total_sum-sum;
    }
    return missed;
}
//////////////////////////////////////////////////////////////////////////////////////
int array_repeatednum(int*arr,int size)
{
    int rep;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==arr[i+1])
        {
            rep=arr[i];
        }
    }
    return rep;
}
////////////////////////////////////////////////////////////////////////////
void arrayRemoveRepeatedNum(int *arr, int size, int *returnedArr, int *returnedArrSize)
{
    int countArr = 0;
//    arraySorting(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            returnedArr[countArr++] = arr[i];
        }
    }
    *returnedArrSize = countArr;
}
int array_find_Single(int ar[], int size)
    {
        int res = ar[0];
        for (int i = 1; i < size; i++)
            res = res ^ ar[i];

        return res;
    }
    //////////////////////////////////////////////
    int *array_scan_dynamic(int *psize)
{
    int i,n,size;
    printf("enter num of element:");
    scanf("%d",&n);
    int*p=(int*)malloc(sizeof(int));
    printf("enter num\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&p[i]);
     *psize=size;

 }
  return p;
}
//////////////////////////////////////////////////////////////
void REmove_repeated_char(char*str,char*str_c)
{
    int i,max=1,x,j;
    char s[256]= {0};
    for(i=0; str[i]; i++)
    {
        x=str[i];
        s[x]++;
        if(s[x]>max)
        {

        }
        else
        {
            str_c[j]=str[i];
            j++;
        }

    }
    str_c[j]=0;
}
///////////////////////////////////
void array_selection(int *arr,int size)
{
    int i,max=arr[0],index=0,temp,j;
    for(j=0; j<size; j++)
    {
        max=arr[0];
        index=0;
        for(i=0; i<size-j; i++)
        {
            if(arr[i]< max)
            {
                max=arr[i];
                index=i;
            }
        }


        temp=arr[index];
        arr[index]=arr[size-1-j];
        arr[size-1-j]=temp;
    }
}
///////////////////////////////////////////////////
void Bubble_Sort(int *arr,int size)
{
    int i=0,j,temp,c=0,flag=0;
    for(i=0;i<size;i++)
    {
       flag=0;
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
            c++;
        }
        if(flag==0)
            break;
    }
printf("%d\n\n",c);
}
/////////////////////////////////////////////////////////
