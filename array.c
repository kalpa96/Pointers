#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX];
    int i,n;   
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
   
    printf("Enter %d number of elements in the array :\n",n);
    for(i=0;i<n;i++){
	  	printf("	element - %d : ",i);
	  	scanf("%d",arr+i);
	}
	
    printf("The elements you entered are : \n");
    for(i=0;i<n;i++){
		printf("	element - %d : %d \n",i,*(arr+i));
	}
	return 0;
}