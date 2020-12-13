#include<stdio.h>
void Fact(int,int*);

int main(){
	int fact;
	int a;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	Fact(a,&fact);
	printf("The Factorial of %d is : %d",a,fact);
	return 0;
}

void Fact(int n,int *f){
    int i;
    *f=1;
    for(i=1;i<=n;i++)
    *f=*f*i;
}