void plusMinus(float arr_count, int* arr) 
{
    float pos=0,neg=0,zero=0;
    float pospro,negpro,zeropro;
    for(int i=0;i<arr_count;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if (arr[i]>0)
        {
            pos++;
        }
        else 
        {
            neg++;
        }
    }
        pospro= pos/arr_count;
        negpro= neg/arr_count;
        zeropro= zero/arr_count;
        printf( "%f \n%f \n%f \n ", pospro,negpro,zeropro);
        
    

}