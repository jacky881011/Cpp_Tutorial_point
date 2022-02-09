#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Global variable declaration 
int k = 10;
int l = 100;

void check(){
	int l = 10;
	
	if(l == 10){
		printf("Local variable!");
	}else if(l==100){
		printf("Global variable!");
	}else{
		printf("Neither of them!");
	}
}


int main() {
	// local variable declaration
	
	int a, b, g;
	
	// actual initialization
	a = 10; b = 20;
	g =a+b;
	
	printf("g: %d/n", g);
	printf("k: %d", k);
	check();
	return 0;
}

