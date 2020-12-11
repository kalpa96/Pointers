#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n,*data;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    data=(int*)calloc(n,sizeof(int)); //memory allocated
    if(data==NULL){
        printf("Memory is not allocated.");  
        exit(0);
    }
    printf("\n");

    for(i=0;i<n;i++){
    	printf("Enter element %d : ",i+1);
        scanf("%d",data+i);
    }

    for(i=1;i<n;i++){
        if(*data<*(data+i))
                *data=*(data+i);
    }
    printf("\nLargest element = %d",*data);
    return 0;
}