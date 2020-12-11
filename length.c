#include<stdio.h>
int Length(char*);
 
void main(){
    char str1[25];
    int l;
   
    printf("Enter a string : ");
    fgets(str1,sizeof str1,stdin);
   
    l=Length(str1);
    printf("The length of string is : %d ",l-1);
}
 
int Length(char*ch){
    int ctr = 0;
    while (*ch != '\0'){
      	ctr++;
      	ch++;
   }
   return ctr;
}