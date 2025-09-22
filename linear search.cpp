#include <stdio.h>
int main() 
{
    int a[5], found = 0, item;
    for(int i=0;i<5;i++)
    {
    	printf("Enter of array at %d index: ",i);
    	scanf("%d",&a[i]);
	}
	printf("Enter value to search: ");
	scanf("%d",&item);
	for(int i=0;i<5;i++)
	{
		if(a[i]==item)
		{
			printf("element is found at %d",i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("element is not found" );
	}
	return 0;
}
