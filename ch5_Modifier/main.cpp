#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// This program shows the difference between 
// signed and unsigned integers

void test1(){
	short int i;
	short unsigned int j;
	volatile int c;
	c = 100;
	
	j =50000;
	
	i = j;
	printf("%d  %d %d", i, j, c);
}


int main(int argc, char** argv) {
	printf("Hello world!");
	test1();
	return 0;
}
