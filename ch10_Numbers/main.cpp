#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void RandomNumber();
void RandomNumber_range();



int main(int argc, char** argv) {
	RandomNumber();
	RandomNumber_range();
	return 0;
}


void RandomNumber(){
	int i , j;
	srand( (unsigned)time( NULL ));
	
	for(i = 1; i <= 10 ; i++){
		j = rand();
		cout << "J(" << i << ") : " << j << endl;
	}
}

void RandomNumber_range(){
	srand(time(NULL));
	int max = 10;
	int min = 4;
	for(int i=0 ; i<5; i++){
		int x = rand() % (max - min + 1) + min ;
		cout << "x(4~10): " << x <<endl; 
	}
}
