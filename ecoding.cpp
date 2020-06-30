#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <math.h> 

int main() {  
int x,y,z; 
 	printf("masukan kata-kata:  ");  
 char str[100];  gets(str);  
 	printf("\nhasil binner: ", str);  
 
 for(x=0;str[x]!='\0';x++){   
 z=str[x];   
 for(y=7;y+1>0;y--){    
 if(z>=(1<<y)){     
 z=z-(1<<y);     
 printf("1");    
 }
 
 else printf("0");   
 }
 	printf(" ");  }
	 
} 
