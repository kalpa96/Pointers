#include<stdio.h>

void main(){
	int arr[20];
	int i,n,sum;
	int *ptr;
	
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
   
	printf("Enter %d number of elements in the array : \n",n);
	for(i=0;i<n;i++){
		printf("	element - %d : ",i+1);
	  	scanf("%d",&arr[i]);
	} 	
	ptr=arr;
	sum=0; 

	for(i=0;i<n;i++){
      	sum=sum+*ptr;
      	ptr++;
   }
 
	printf("The sum of %d elements in the array is : %d",n,sum);
}