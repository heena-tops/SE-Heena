#include<stdio.h>
int *bubble(int a[],int c);

int main()
{
	int *b;
	int i,n;
	printf("\nEnter no of elements : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	b = bubble(a,n);
	printf("\nSorted array : ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(b+i));
	}
	return 0;
}
int *bubble(int a[],int c)
{
	int i,j,temp;
	for(i=0;i<c;i++)
	{
		for(j=0;j<c-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	return a;
}

