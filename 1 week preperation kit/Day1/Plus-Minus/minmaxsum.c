void miniMaxSum(int arr_count, int* arr) 
{
    int sum=0,minsum,maxsum;
    int min=arr[0],max=arr[0];
    for(int i=0;i<arr_count;i++)
    {
        sum+=arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    minsum=sum-max;
    maxsum=sum-min;
    printf("%d %d",minsum,maxsum);
}
