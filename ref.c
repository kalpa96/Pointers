#include<stdio.h>

long add(long*,long*);
 
int main(){
   long n1,n2,sum; 
 
   printf("Enter the first number : ");
   scanf("%ld",&n1);
   printf("Enter the second  number : ");
   scanf("%ld",&n2);   
   sum = add(&n1,&n2);
   printf("The sum of %ld and %ld  is = %ld\n",n1,n2,sum);
   return 0;
}

long add(long *a,long *b){
   long sum;
   sum=*a+*b;
   return sum;
}