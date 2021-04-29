//Implementation of a Linear Search using Arrays
#include <stdio.h>
int main()
{
	int n,s,t1,t2;//Variablesd for size of array and search element
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements (MUST BE SORTED)\n");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);//Inputting the Array
	printf("Enter the value to be searched\n");
		scanf("%d",&s);//Value to be Searched
	int b=0;
	int e=n-1;
	int m;
	int f=0;
	while(b<=e)
	{
		m=(b+e)/2;
		if(a[m]==s)
		{
			int t=m;
			while(a[t]==s)
				t--;
			t1=t+1;
			t=m;
			while(a[t]==s)
				t++;
			t2=t-1;
			f++;
			break;
		}
		else if(a[m]<s)	
			b=m+1;
		else
			e=m-1;
	}
	if(f==0)
		printf("Element not Found\n");
	else
	{
		int i;
		printf("The value %d is present at the position(s):\n\t",s);
		for(i=t1;i<=t2;i++)
			printf("%d\t",(i+1));
	}
	printf("\n=>The Array-:\n");//Printing the array for reference
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	return 1;
}

