#include <iostream>
#include <cstring>
//#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void doStringMethod();
void stringClassMethod();
void printofArray(int arr[], int size);


int main(){
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
	cout << "Greeting message: " << greeting << endl; 
	
	int num[] = {12,33,12,11,33,43};
	int arraySize = sizeof(num)/ sizeof(num[0]);
	cout << arraySize << endl;
	printofArray(num , arraySize);
	
	
	doStringMethod();
	stringClassMethod();
	return 0;
	
}	

void doStringMethod(){
	char str1[10] = "Hello";
	char str2[10] = "World";
	char str3[10];
	int len;
	
	// copy str1 into str3
	strcpy( str3, str1);
	cout << "strcpy( str3, str1): " << str3 << endl;
	
	// concatenates str1 and st2
	strcat( str1, str2);
	cout << "strcat( st1,str2): " << str1 << endl;
	
	// total length of str1 after concatenation
	int st1 = strlen(str1);
	cout << "\nstrlen(str1): " << st1;
	
}

void stringClassMethod(){
	string str1 = "Hello";
	string str2 = "World";
	string str3 ;
	int len;
	cout << "\n\nTest2" << endl;
	
	// copy str1 into str3;
	str3 = str1;
	
	// concatenates str1 and str2
	str3 = str1 + " " + str2;
	cout << str3 << endl;
	
	// total length of str3 after concatention
	len = str3.size();
	cout << "str3.size(): " << len << endl;
}

void printofArray(int arr[], int size){
	int n = size;
	for(int i = 0 ; i < n ; i++){
		cout << "arr: " <<  arr[i] << endl;
	}
	
}
