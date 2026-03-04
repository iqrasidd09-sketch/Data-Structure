#include<stdio.h>
int main()
{
	int a[10], i, ele;
	printf("Enter the elements");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	    printf("Enter element which you want to search");
	    scanf("%d", &ele);
		for(i=0; i<10; i++)
		{
			if(a[i]==ele)
			{
				printf("element present at location %d",i);
			}
		}
		return 0;
}

