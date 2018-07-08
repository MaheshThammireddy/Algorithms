/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(int* a,int* b)
{
    
    int temp=*a;
    *a=*b;
    *b=temp;
    
}


int partition(int l , int h , int a[])
{
    
    int i=0,j=l-1;
    int pivot=a[h];
    
    for(i=l;i<h;i++)
    {
        
        if(a[i]<= pivot)
        {
            j++;
            swap(&a[i],&a[j]);
            
            
        }
        
    }
    
    
    swap(&a[j+1],&a[h]);
    
    return j+1;
    
}

void QuickSort (int l , int h, int a[] )
{
    
    int p;
    if(l<h)
    {
        
        p=partition (l,h,a);
        
        QuickSort(l,p-1,a);
        QuickSort(p+1,h,a);
        
        
        
    }
    
}
int main()
{
    
    int a[]={5,7,4,3,9,8,1};
    int size=sizeof(a)/sizeof(a[0]);

    QuickSort(0,size-1,a);
 
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("%d-",a[i]);
    }
  
    return 0;
}
