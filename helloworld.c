#include <stdio.h>

void printUserName(char *name) {
	printf("%s\n", name);
}

int add(int x, int y) {
	return x + y;
}

int main () {

	printf("Hello world\n");
	printf("Hello!\t\n");
	
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d", add(a,b));
	
	return 0;
}//done
