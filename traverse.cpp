#include <stdio.h>
int main() 
{
    int a[10];
    int n,i;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++) 
	{
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe elements in the array:\n");
    for(i=0;i<n;i++) 
	{
        printf("Element at index %d = %d\n",i,a[i]);
    }
    return 0;
}

