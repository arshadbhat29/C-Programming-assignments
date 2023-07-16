#include<stdio.h>
//Cubes of natural numbers upto n
int main ()
{
	int a,n,cube;
	
	printf("How many natural numbers: ");
	scanf("%d",&n);
	
for (a=1;a<=n;a+=1)
{ cube=a*a*a;
printf("%d ",cube);
}
}