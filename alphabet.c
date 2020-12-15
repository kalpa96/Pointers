#include<stdio.h>

int main(){
    char alph[27],al[27];
    int x,y;
    char *ptr,*pt;

    ptr = alph;     
    for(x=0;x<26;x++){
        *ptr=x+'A';
        ptr++;
    }
    
    ptr=alph;
	printf("The Alphabets are : \n");
    for(x=0;x<26;x++){
        printf(" %c ",*ptr);
        ptr++;
    }
    
	printf("\n\n");
    pt=al;
    for(y=0;y<26;y++){
        *pt=y+'a';
        pt++;
    }

	pt=al;
	printf("The Alphabets are : \n");
    for(y=0;y<26;y++){
       printf(" %c ",*pt);
        pt++;
    }
    return(0);
}