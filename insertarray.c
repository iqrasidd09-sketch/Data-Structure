#include<stdio.h>
int main()
{
	int a[10], n, i, pos, value;

	
	printf("Enter elements:\n");
	for(i=0; i<8; i++)
	{
		scanf("%d", &a[i]);
	}
	   printf("Enter position to insert element: ");
	   scanf("%d", &pos);
	   
	   printf("Enter value to insert: ");
	   scanf("%d", &value);
	   
	   for(i=n; i>=pos; i--)
	   {
	   	a[i]= a[i-1];
	   }
	   a[pos - 1]= value;
	   n++;
	   
	   printf("array after insertion:\n");
	   for(i=0; i<10; i++)
	   {
	   	printf("%d ",a[i]);
	   }
	   n--;
	   

	   
		printf("Enter number of elements: ");
	    scanf("%d", &n);
	    return 0;
}
