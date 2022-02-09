#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// declare the function
void func(void);
int count = 10;		// global static variable

void func(void){
	static int i = 5;		// local static variable
	i++;
	cout << "i is " << i ;
	cout << " and count is " << count << endl;		// endl : means change to next line
}


// extern use the support.cpp file
int count2;
extern void write_extern();		// let the function to strorage to extern class


int main() {
	write_extern();
	return 0;
}
