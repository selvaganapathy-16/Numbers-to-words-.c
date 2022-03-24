#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char a[20];
	printf("Enter the Number");
	gets(a);
	char* single[]= { "zero", "one", "two ",   "three ", "four","five ", "six", "seven", "eight ", "nine " };
	char* doubledigit[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char* tens[] ={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
	n = strlen(a);
	
	if(n == 1)
	{
		int x= a[0] - 48;
		printf("%s",single[x]);
	}
	else if(n ==2 && a[0] == 49 )
	{
		int x= a[1] - 48;
	
		printf("%s",doubledigit[x]);
	}
	else if(n ==2 && a[1] == 48)
	{
		int x= (a[0] - 48)-2;
	
		printf("%s",tens[x]);
	}
	else if(n==3 &&  a[1] == 48 && a[2] ==48)
	{
		int x= a[0]-48;
		
		
		printf("%s hundred",single[x]);
		
	   
	}
	else if(n==3 && a[1] == 49)
	{
		int x= a[0]-48;
		
		int z= a[2] - 48;
		printf("%s hundred and %s ",single[x],doubledigit[z]);
	}
	else if(n==2 )
	{
		
		int y= (a[0] - 48)-2;
		int z=a[1] - 48;
		printf(" %s %s",tens[y],single[z]);
	}
	
	else if(n==3 )
	{
		int x= a[0]-48;
		int y= (a[1] - 48)-2;
		int z=a[2] - 48;
		printf("%s hundred and %s %s",single[x],tens[y],single[z]);
	}
	else if(n==4 &&  a[1] == 48 && a[2] ==48 && a[3] == 48)
	{
		int x= a[0]-48;
		
		
		printf("%s thousand",single[x]);
		
	   
	}
	else if(n==4 && a[2] == 49)
	{
		int x= a[0]-48;
		int y= a[1]-48;
		
		int z= a[3] - 48;
		printf("%s thousand %s hundred and %s ",single[x],single[y],doubledigit[z]);
	}
	else if(n==4 )
	{
		int x= a[0]-48;
		int xx= a[1]-48;
		int y= (a[2] - 48)-2;
		int z=a[3] - 48;
		printf("%s thousand %s hundred and %s %s",single[x],single[xx],tens[y],single[z]);
	}

	

	
	
}
