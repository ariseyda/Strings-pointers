#include<stdio.h>

//Strings and pointers
//Strlen function

int main(){
	
	char name[]="SeydaArý";

	
	int lenght=	my_strlen(name);
	
	printf("Length of string:%d",lenght);
	
	
	return 0;
}

int my_strlen(char *p){
	
	int i;
	int lenght=0;
	
	for(i=0;p[i]!='\0';i++){
		lenght++;
	}
	
	return lenght;
}

