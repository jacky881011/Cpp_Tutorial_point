#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Array1();
void T2DArray();
void PointerArray();


int main(){
	Array1();
	cout << "\n\n\n";
	T2DArray();
	PointerArray();
}

void Array1(){
	int n[10];
	
	for(int i = 0 ; i < 10 ; i++){
		n[i] = 100 + i ;
	}
	
	cout << "Element" << setw(13) << "Value" << endl;
	
	for(int j = 0; j < 10; j++){
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}
} 

void T2DArray(){
	int a[5][2] = {0,0,1,2,2,4,3,6,4,8};
	for(int i = 0 ; i < 5 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			cout << "a[" << i << "][" << j << "]: ";
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}

void PointerArray(){
	double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	double *p;
	p = balance;
	
	cout << "Array each array usinng pointer" << endl;
	for(int i = 0 ; i < 5; i++){
		cout << "*(p + " << i << ") : "; 
		cout << *(p+i) << endl;
	}
	
	cout << "Array values using balance as address" << endl;
	for(int i = 0 ; i < 5 ;i++){
		cout << "*(balance + " << i << ") : ";
		cout << *(balance + i) << endl; 
	}
}
