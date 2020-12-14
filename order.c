#include<stdio.h>

void main(){
	int n,i,arr[10];
	int *ptr;

	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	ptr=&arr[0];  
	printf("Enter %d number of elements in the array : \n",n);
	
	for(i=0;i<n;i++){
		printf(" element - %d : ",i+1);
		scanf("%d",ptr);
		ptr++;
	} 	
	
	ptr=&arr[n-1];
	printf("The elements of array in reverse order are :\n");

	for(i=n;i>0;i--){
		printf(" %d ",*ptr);
      	ptr--;
   }
}