#include<stdio.h>
#include<stdlib.h>

void main(){
	int n1,n2,*ptr1=&n1,*ptr2=&n2;

    printf("Enter the first number : ");
    scanf("%d",ptr1);
    printf("Enter the second  number : ");
    scanf("%d",ptr2);
     
    if(*ptr1>*ptr2){
        printf("%d is the maximum number",*ptr1);
    }
    else
        printf("%d is the maximum number",*ptr2);
}