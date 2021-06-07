//To find the common prefix of all the srings inputted by the user using Binary Search
#include <stdio.h>
#include <string.h>
//Global variables
int n;
int L,ind;
int xx;
char str[50][50];
char cp[50];
//Function to input all the strings
void input()
{
	
	printf("Enter the strings\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",&str[i]);	
		if(i==0)
		{
			L=strlen(str[i]);
			ind=0;
		}
		else
		{
			if(L>strlen(str[i]))
			{
				L=strlen(str[i]);
				ind=i;
			}
		}
	}
}
//Function to slice string s1 till index m and store in x
void substring(char x[],char s1[], int m)
{
	int c=0;
	while(c<=m)
	{
		x[c]=s1[c];
		c++;
	}
	x[c]='\0'; 
}
//Implementation of Binary Search to find common prefix
void binary(char s[50],char a[50])
{
	char x[50];
	char y[50];
	int b=0;
	int e=L-1;
	while(b<=e)
	{
		
		int m=(b+e)/2;
		substring(x,s,m);
		substring(y,a,m);
		if(strcmp(x,y)==0)
		{
			xx=m;
			b=m+1;
		}
		else
			e=m-1;	
	}	
	substring(s,a,xx);
}
//Driving function for determination of common prefix
void commonpre()
{
	substring(cp,str[ind],L);
	int i;
	for(i=1;i<n;i++)
		binary(cp,str[i]);
}
//Funtions to display the list of strings and common prefix
void display()
{
	int i;
	printf("\nThe List of Words-->\n");
	for(i=0;i<n;i++)
		printf("\t%s",str[i]);
	printf("\nThe Common Prefix for the above Strings is: %s",cp);
}
//Driver main() function
int main()
{
	printf("Enter the number of words\n");
	scanf("%d",&n);
	input();
	commonpre();
	display();
	return 1;
}
