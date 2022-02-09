#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// function declaration	
void swap1(int x, int y);
void swap2(int *x, int *y);
void swap3(int &x, int &y);
void default_values();
 



int main(){
	int a = 100;
	int b = 200;
	int temp;
	cout << "Before swap , value a = " << a << "\n value b = " << b << endl;
	
	swap3(a , b);
	
	cout << "After swap , value a = " << a << "\n value b = " << b << endl;
	
	cout << "\n\n Default Value Practice!\n" << endl;
	default_values(); 
	return 0;
}

void swap2(int *x, int *y){
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
	return;
}

void swap3(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int sum(int a = 30, int b = 20){
	int num = a + b;
	return num;
}

void default_values(){
	int a = 100;
	int b = 200;
	int result  = sum(a,b);
	
	cout << "Sum of result : " << result << endl;
	cout << "Sum of result (Without b input) : " << sum(a) << endl;
}

