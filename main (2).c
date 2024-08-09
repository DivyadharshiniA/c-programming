#include<stdio.h>
int merge(int arr1[],int m,int arr2[],int n)
{
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0 && j>=0)
    {
        if(arr1[i]>=arr2[j])
        {
            arr1[k]=arr1[i];
            i--;
        }
        else
        {
            arr1[k]=arr2[j];
            j--;
        }
        k--;
    }
    while(j>=0)
    {
        arr1[k]=arr2[j];
        j--;
        k--;
    }
}
int print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int i,n,m;
    printf("enter the number of elements in arr1  ");
    scanf("%d",&m);
    printf("enter the number of elements in arr2  ");
    scanf("%d",&n);
    int arr1[m+n];
    int arr2[n];
    printf("enter the elements of arr1  ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=m;i<m+n;i++)
    {
        arr1[i]=0;
    }
    printf("enter the elements of arr2  ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    printf("Original array 1  ");
    print(arr1,m+n);
    
    printf("Original array 2  ");
    print(arr2,n);
    
    merge(arr1,m,arr2,n);
    printf("merged array ");
    print(arr1,m+n);
    
}