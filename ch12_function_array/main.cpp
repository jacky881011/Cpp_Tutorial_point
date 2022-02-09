#include <iostream>
#include <ctime>
	
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double num[] = {12.0,22.0,32.0,12.0,33.0};
double aver(double number[]);


// function to generate and return random numbers.
int *getRandom(){
	static int r[10];
	
	// set the seed
	srand((unsigned)time(NULL));
	
	for(int i = 0 ; i< 10 ; i++){
		r[i] = rand()%10 + 1;
		cout << r[i] << endl; 
	}

	
	return r;
}



int main(){
	
	double average = aver(num);
	cout << "Average: " << average;
	
	
	// get the random array r
	int *p;
	p = getRandom();
	
	for(int i = 0 ; i < 10 ; i++){
		cout << "*(p + " << i << ") : ";
		cout << *(p+i) << endl;
	}
	
	// get the array size
	int arr[] = {10, 20, 30, 40, 50 ,60};
	int arrSize = sizeof(arr) / sizeof(arr[0]) ; 
	cout << "The size of the array is: " << arrSize ;
	
	
	return 0;
}

double aver(double number[]){
	double count = 5;
	double sum = 0;
	double average = 0;
	
	for(int i = 0; i< 5; i++){
		sum = sum + number[i];
	}
	
	average = sum / count;
	
	
	return average;
}
