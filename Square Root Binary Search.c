//To find the Square root of an inputted integer upto a certain precision using Binary Search
#include <stdio.h>
#include <math.h>
//Global Variables
double sq;
int sq1,sq2;
int n,k;
//Function to determine the fraction part of the square root of the number using Binary Search
void integer()
{
	int a[n];
	int i;
	for(i=1;i<=n;i++)
		a[i-1]=i;
	int b=0;
	int e=n-1;
	while(b<=e)
	{
		int m=(b+e)/2;
		if(pow(a[m],2)<n)
		{
			sq=a[m];
			b=m+1;
		}
		else if(pow(a[m],2)>n)
			e=m-1;
		else
		{
			sq=a[m];
			sq1=(int)sq;
			return;
		}
	}
	sq1=(int)sq;
}
//Function to determine the fraction part of the square root of the number using Binary Search
void decimal()
{
	int t=1;
	double a[10];
	while(t<=k)
	{
		double r=1/pow(10,t);
		double i;
		int nn=0;
		for(i=0;i<r*9;i+=r)
			a[nn++]=i;
		int b=0;
		int e=nn-1;
		double f=0;
		while(b<=e)
		{
			int m=(b+e)/2;
			if(pow(sq+a[m],2)<n)
			{
				f=a[m];
				b=m+1;
			}
			else if(pow(sq+a[m],2)>n)
				e=m-1;
			else
			{
				sq+=a[m];
				sq2*=10+(a[m]*pow(10,t));
				break;
			}
		}
		sq+=f;
		sq2*=10;
		sq2+=(f*pow(10,t));
		t++;
	}
}
//Driver main() Function
int main()
{
	printf("Enter the Number (n)\n");
	scanf("%d",&n);
	printf("Enter the Precision (k)\n");
	scanf("%d",&k);
	integer();
	decimal();
	printf("Square Root of %d is %d.%d",n,sq1,sq2);
	return 1;
}
