#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Variable declaration
extern int a, b;
extern int c;
extern float f;

int func(int a, int b){
	return a+b;
}

int main() {
	// variable definition
	int a, b;
	int c;
	float f;
	
	// actual initialization
	a = 10;
	b = 20;
	c = a + b;
	printf("c: %d\n", c);
	
	f = 70.0 / 3.0;
	printf("f: %.2f\n", f);
	
	printf("Show int func(): %d", func(a, b));
	return 0;
}


