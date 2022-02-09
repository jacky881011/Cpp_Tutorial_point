#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// if statement 
void if_statement(){
	cout << "if_statement example" << endl;
	
	int a = 10;
	
	if(a < 20)
		cout << "a is less than 20" << endl;
	
	cout << "value of a is : " << a << endl;
}

// if else statement 
void if_else_statement(){
	cout << "\nif_else_statement" << endl;
	int a = 100;
	if(a < 20){
		cout << "a is less than 20" << endl;
	}else{
		cout << "a is larger than 20" << endl;
	}
}

// if else if else statement
void if_else_statement2(){
	cout << "\nif else_if else statement" << endl;
	int a = 30;
	
	if(a == 10){
		cout << "value of a is 10" << endl;
	}else if(a == 20){
		cout << "value of a is 20" << endl; 
	}else if(a == 30){
		cout << "value of a is 30" << endl; 
	}else{
		cout << "Exact value of a is : " << a << endl;
	}
	
	cout << "value of a is : " << a << endl;
}

// switch case statement
void switch_case_statement(){
	cout << "\n switch_case statement " << endl;
	char grade = 'B';
	
	switch(grade){
		case 'A':
			cout << "Great!" << endl;
			break;
		case 'B':
			cout << "Good" << endl;
			break;
		case 'C':
			cout << "Not bad" << endl;
			break;
		case 'D':
			cout << "Pass.." << endl;
			break;
		
		default:
			cout << "We cant find your grade!" << endl;  
	}
}

// nested if...else statement
void nested_if_else_statement(){
	cout << "\n nested if else statement" << endl;
	int a = 100, b = 300;
	
	if(a == 100){
		if(b == 200){
			cout << "value of a is 100, b is 200." << endl;
		}else{
			cout << "a is correct but b is not!" << endl;
		}
	}else{
		cout << "we dont get the number a  also b" << endl;
	}
} 

// nested switch...case statement
void nested_switch_case_statement(){
	cout << "\n nested switch case statement" << endl;
	int a = 100, b = 200;
	switch(a){
		case 100:
			cout << "===This is outside of switch===" << endl;
			cout << "a is: " << a << endl;
			switch(b){
				case 200:
					cout << "\n===This is inside of switch===" << endl;
					cout << "b is: " << b << endl;
					break;
			}
			break;
		default:
			cout << "We cant find the actually a means!" << endl;
	}
}




int main(){
	if_statement();
	if_else_statement();
	if_else_statement2();
	switch_case_statement();
	nested_if_else_statement();
	nested_switch_case_statement();
}
