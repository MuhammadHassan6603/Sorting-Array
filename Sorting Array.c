#include <stdio.h>  
int i,j,temp=0;  
void sort(int arr[],int length)
{
	printf("Elements of original array: \n");    
    for (i = 0; i < length; i++)
	{     
        printf("%d ", arr[i]);     
    }          
    for (i = 0; i < length; i++)
	{     
        for (j = i+1 ; j < length; j++)
		{     
           if(arr[i] > arr[j])
		   {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
    printf("\n");        
    printf("Elements of array sorted in ascending order: \n");    
    for (i = 0; i < length; i++)
	{     
        printf("%d ", arr[i]);    
    }    	
}
int main()    
{   
    int arr[] = {3,5,1,8,4,6,2,9,0,10,7};         
    int length = sizeof(arr)/sizeof(arr[0]);     
    sort(arr,length);     
}    
