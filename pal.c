#include<stdio.h>
#include<string.h>
 
int main(){
    char a[100];  
    int i,n,c=0;
 
    printf("Enter a string : ");
    gets(a);
    n=strlen(a);
 
    for(i=0;i<n/2;i++){
    	if(a[i]==a[n-i-1])
    	c++;
	}
	
 	if(c==i){
 		printf("It is a is palindrome");
	}

    else{
    	printf("It is not a palindrome");
	}
		   
    return 0;
}