#include<stdio.h>

int main(){
	int n1,n2,*p,*q,sum;
	
	printf("Enter the first number : ");
	scanf("%d",&n1);
	printf("Enter the second number : ");
	scanf("%d",&n2);
		
	p=&n1;
	q=&n2;
	sum=*p+*q;
	
	printf("The sum of %d and %d is = %d\n",n1,n2,sum);
	
	return 0;
}