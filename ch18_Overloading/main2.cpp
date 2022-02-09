#include <iostream>
#include <cstring>
using namespace std;


class Distance{
	protected:
		int feet;
		int inches;
		
	public:
		Distance(){
			feet = 0;
			inches = 0;
		}
		
		Distance(int f, int in){
			feet = f;
			inches = in;
		}
		
		void displayDistance(){
			cout << "F: " << feet << "\nInches: " << inches << endl;
		}
		
		// Overloaded minus (-) operator
		
		Distance operator-(){
			feet = -feet;
			inches = -inches;
			return Distance(feet, inches);
		} 
};


void Function3Active(){
	Distance D1(11, 10), D2(-5, 11);
	
	-D1;
	D1.displayDistance();
	
	-D2;
	D2.displayDistance();
	
}




