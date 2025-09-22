#include<stdio.h>
int main()
{
	int a[5]={20,40,50,30,10};
	int i;
	int found=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==i)
		{
			printf("element found ");
			found=1;
			break;
		}
		else
		{
			printf("element not found ");
			break;
		}
	}
}
