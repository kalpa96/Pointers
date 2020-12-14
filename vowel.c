#include<stdio.h>

int main(){
    char str[100];
    char *ptr;
    int  v,c;
    
    printf("Enter a string : ");
    fgets(str,sizeof str,stdin);
     
    ptr=str;
    v=c=0;
    
    while(*ptr!='\0'){
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            v++;
        else
            c++;
        	ptr++; 
    }
     
    printf("Number of vowels : %d\n",v);
	printf("Number of consonants : %d",c-1);        
    return 0;
}