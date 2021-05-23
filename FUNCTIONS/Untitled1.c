void array_ofpointer_sort( char *arr[],int size)
{
    char *temp;
    int i,j;
    for(j = 0; j < size-1; j++)
    {
        for(i = j+1; i < size; i++)
        {
            if((arr[j],arr[i]) > 0)
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    char* arr[]= {"shaimaa","samy","automation","engineer"};

    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("string is\n");
    for (i = 0; i < size; i++)
        printf("%s\n", arr[i]);
    array_ofpointer_sort(arr,size);
         printf("\nsorted string\n");
    for (i = 0; i < size; i++)
        printf("%s\n", arr[i]);
    return 0;
}
