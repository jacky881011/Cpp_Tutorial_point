#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void TestPointer1_1();
void TestPointer1_2();
void TestPointer1();
void TestPointer2();
void TestPointer3();
void TestPointer4();
void TestPointer5();
void TestPointer6();
void TestPointer7();
void getSeconds(unsigned long *par);


int main(){
	TestPointer1_1(); 
	TestPointer1_2();
	
	// Pointer method
	TestPointer1();
	TestPointer2();
	TestPointer3();
	TestPointer4();
	TestPointer5();
	TestPointer6();
	TestPointer7();
	
}

void TestPointer1_1(){
	int var1;
	char var2[10];
	
	cout << "Address of var1 variable: " << &var1 << endl;
	
	cout << "Address of var2 variable: " << &var2 << endl;
	
}


void TestPointer1_2(){
	cout << "\n\n=====Test2=====" << endl;
	int var = 20; 	// actual variable declaration
	int *ip;		// pointer variable
	
	ip =  &var; 		// store address of var in pointer variable
	
	cout << "Value of var variable:" << var << endl;
	
	// show the address stored in ip
	cout << "Address stored in ip variable: " << ip << endl;
	
	// access the value at the address available in pointer
	cout << "Value of *ip variable: " << *ip << endl;
}

// Null Pointers
void TestPointer1(){
	cout << "\n\n===NUll Pointer Practice===" << endl;
	int *ptr = NULL;
	cout << "The value of ptr: " << ptr << endl;
	
	// check the pointer wheather to be null or not null
	if(!ptr){
		cout << "Ptr is a null pointer" << endl;
	}else{
		cout << "ptr is not a null number" << endl;
	}
}

// Arithmetic Pointers
void TestPointer2(){
	
	cout << "\n\n===Arithmetic Pointers===" << endl;
	cout << "\n Incrementing a Pointer" << endl;
	const int MAX = 3;
	int var[MAX] = {10, 20, 30};
	int *ptr;
	
	// let us have array address in pointer
	ptr = var;
	
	for(int i = 0; i < MAX ; i++){
		cout << "Address of var[" << i << "]= " << ptr << endl;
		
		cout << "Value of var[" << i << "]= " << *ptr << endl;
		
		// point to the next location
		ptr++;
	}
		
	cout << "\n\n Incrementing a Pointer" << endl;
	int var2[MAX] = {10, 20, 30};
	int *ptr2;
	
	ptr2 = &var2[MAX-1];
	for(int i = MAX; i > 0 ; i--){
		cout << "Address of var[" << i << "]= " << ptr2 << endl;
		
		cout << "Value of var[" << i << "]= " << *ptr2 << endl;
		
		// point to the next location
		ptr2--;
	}
	
	cout << "\n\nPointer Comparision" << endl;
	int var3[MAX] = {10, 100, 200};
	int *ptr3;
	
	ptr3 = var3;
	int i = 0;
	
	while(ptr3 <= &var3[MAX - 1]){
		cout << "Address of var3[" << i << "]= " << ptr3 << endl;
		cout << "Value of var3[" << i <<"]= "<< *ptr3 << endl;
		
		ptr3++;
		i++; 
	}
	
}

// Array vs Pointers
void TestPointer3(){
	cout << "\n\n Arrays to Pointers" << endl;
	const int MAX = 3;
	int var[MAX] = {10, 20, 30};
	int *ptr;
	
	ptr = var;
	
	for(int i = 0 ; i < MAX ; i++){
		cout << "Address of var[" << i << "]" << ptr << endl;
		cout << "Value of var[" << i << "]" << *ptr << endl;
		ptr++;
	}
	
	int array_size = 0;
	int kArr[] = {10,20};
	*(kArr + 10) = 100;
	array_size = sizeof(kArr) / sizeof(kArr[0]);
	cout << "kArr array size is: " << array_size  << endl;
	cout << "kArr[10]= " << kArr[10] << endl;
	 
	
}

// Array of Pointers
void TestPointer4(){
	cout << "\n\nArray of Pointers" << endl;
	// test1
	cout << "\n Test1" << endl;
	const int k = 3;
	int arr[k] = {10, 100, 200};
	
	for(int i = 0; i< k ; i++){
		cout << "Value of arr[" << i << "]: " << arr[i] << endl; 
	}
	
	// test2
	cout << "\n Test2" << endl;
	int var2[k] = {10, 100, 200};
	int *ptr[k];
	
	for(int i = 0 ; i < k ; i++){
		ptr[i] = &var2[i];			// assign the address of integer
	}
	
	for(int i = 0 ; i < k ; i++){
		cout << "ptr[" << i << "]: " << *ptr[i] << endl;
	}
	
	// test3
	cout << "\n Test3" << endl;
	const char *name[3] = {"Zara Ali", "Hina Ali", "Numha Alio"};
	
	for(int i = 0; i< 3 ; i++){
		cout << "Address of item is= " << (name + i) << endl;
		cout << "Value of item is: " << *(name + i) << endl;
		cout << "\n" << endl;
	}
	
	
} 

// Pointer to Pointer
void TestPointer5(){
	cout << "\n\nPointer to Pointer" << endl;
	
	int var;
	int *ptr;
	int **pptr;
	
	var = 300;
	
	ptr = &var;
	
	pptr = &ptr;
	
	cout << "Value of var: " << var << endl;
	cout << "Value available at *ptr: " << *ptr << endl;
	cout << "Value available at **pptr: " << **pptr << endl; 
}


// Passing Pointers to Functions
void getSeconds(unsigned long *par){
	// get the current number of seconds
	*par = time(NULL);
}
double getAverage(int *arr, int size){
	int i, sum = 0;
	for(i = 0 ; i < size ; i++){
		sum += arr[i];
	}
	
	double avg = (double)sum / size;
	
	return avg;
	
}

void TestPointer6(){
	cout << "\n\n Test 6 " << endl;
	cout << "\n Test 1" << endl;
	unsigned long sec;
	getSeconds(&sec);
	
	cout << "Number of seconds: " << sec << endl;
	
	
	// Test2
	cout << "\n Test 2" << endl;
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;
	
	avg = getAverage(balance, sizeof(balance)/sizeof(balance[0]));
	
	cout << "Average is : " << avg << endl;
	
}


// Return Pointer from Function

// function to generate and return random numbers
int *getRandom(){
	static int r[10];
	// set the seed
	srand((unsigned)time(NULL));
	
	for(int i= 0; i< 10 ; i++){
		r[i] = rand()%10 +1;
		cout << "Rand: " << r[i] << endl;
	}
	
	return r;
}
void TestPointer7(){
	cout << "\n\nTest 7 " << endl;
	
	int *p;
	p = getRandom();
	
	for(int i = 0 ; i < 10; i++){
		cout << "Address of p is: " << (p + i) << endl;
	}
	
}

