#include<stdio.h>

int main(){
    char str[10];
    char revstr[10];
    char *stptr=str;
    char *rvptr=revstr;
    int i=-1;
	
    printf("Enter a string : ");
    scanf("%s",str);
    
    while(*stptr){
    	stptr++;
    	i++;
    }
    while(i>=0){
    	stptr--;
    	*rvptr = *stptr;
    	rvptr++;
    	--i;
    }
    *rvptr='\0';
    printf("Reverse of the string is : %s",revstr);
    return 0;
}