#include <stdio.h>

void printUserName(char *name) {
	printf("%s\n", name);
}

<<<<<<< HEAD
int add(int x, int y) {
	return x + y;
}

int mul(int x,int y) {
	return x*y;
=======
void subtract(int x,int y) {
	return x-y;
>>>>>>> new_branch
}

int main () {

	printf("Hello world\n");
	printf("Hello!\t\n");
	
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d", add(a,b));
	
	return 0;
}//done
