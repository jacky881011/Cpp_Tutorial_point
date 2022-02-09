#include <iostream>
using namespace std;

void dynamicMemoryTest1(){
	double* pvalue = new double;
	*pvalue = 29494.99;
	cout << "Value of pvalue: " << *pvalue << endl;
	cout << "Address of pvalue: " << &pvalue << endl;
	
	delete pvalue;
} 


// object of dynamic memory set
class Box{
	public: 
		Box(){
			cout << "Constructor called! " << endl;
		}s
		
		~Box(){
			cout << "Destructor called"  << endl;
		}
}; 
void dynamicMemoryObjTest(){
	Box* myBoxArray = new Box[4];
	Box* newBox = new Box();
	delete []myBoxArray; // delete array 
	delete newBox;
} 


int main(){
	dynamicMemoryTest1();
	dynamicMemoryObjTest();
}
