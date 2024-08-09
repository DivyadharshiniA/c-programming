#include<stdio.h>
void reverse(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotate(int arr[],int n,int k)
{
    k=k%n;
    if(k==0)
    {
        return;
    }
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int i,n,k;
    printf("Enter number of elemets ");
    scanf("%d",&n);
    printf("Enter the key element ");
    scanf("%d",&k);
    int arr[n];
    printf("Enter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("original array ");
    print(arr,n);
    rotate(arr,n,k);
    printf("Rotated array ");
    print(arr,n);
}