

#include <stdio.h>

void reverse_string(char *str){

	if(*str){
	
		reverse_string(str + 1);
		printf("%c",*str);
	}
}


int main(){


	char a[] = "Geeks for Geeks";

	// printf("%c",*a);
	reverse_string(a);
	return 0;

}
