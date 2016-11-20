#include <stdio.h>
#include <string.h>

char *mystrrev(char *string){
	char *revString = strrev(string);	
	return revString;
}
int main(){
	char a[100];
	// fgets(a, 100, stdin);
	gets(a);
	printf("%s", mystrrev(a));
	return 0;
}
	
