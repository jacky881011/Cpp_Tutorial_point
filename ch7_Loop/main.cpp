#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void whileLoop(){
	cout << "This is while loop" << endl;
	int a = 10;
	while( a < 20 ){
		a++;
		cout << "a: " << a << endl;
	}
	cout << "The end....." << endl; 
	 
}

void for_loop(){
	cout << "\nThis is for_loop" << endl;
	
	for(int i = 10 ; i < 20 ; i++){
		cout << "i: " << i << endl;
	}
}

void do_whileloop(){
	cout << "\nThis is do_while_loop" << endl;
	int a = 10;
	do{
		cout << "Value of a: " << a <<endl;
		a++;
	}while(a < 20);
	
}

void nested_loop(){
	cout << "\nThis is a nested_loop" << endl;
	int i, j;
	
	for(i= 2 ; i < 100; i++){
		for(j = 2; j <= (i/j); j++){
			if(i%j == 0) break; 						// 如果整除就跳出 
		}	
		
		if(j > (i / j)) cout << i << " is prime" << endl;
	}
}

void break_statement(){
	cout << "\nBreak statement" << endl;
	int a = 5;
	do{
		a++;
		if(a > 10){
			break;
		}
		cout << "a: " << a << endl;
	}while(a <= 20);
	cout << "This is the end of the loop till 10" << endl;
}

void continue_statement(){
	cout << "\nContinue statement" << endl;
	int a = 10;
	
	do{
		if(a == 15){
			a++;
			continue;
		} 
		cout << "Value of a: " << a << endl;
		a++;
	}while(a <= 20);
	
}	

void goto_statement(){
	cout << "\nGoto statement" << endl;
		int a = 10;
		LOOP: do{
			if(a==15){
				a++;
				goto LOOP;
		}
			cout << "value of a: " << a << endl;
			a++;
		
		}while(a < 20);
}



int main(){
	//whileLoop();
	//for_loop();
	//do_whileloop();
	break_statement();
	continue_statement();
	goto_statement();
	
}
