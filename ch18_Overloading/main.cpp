#include <iostream>
#include <cstring>
using namespace std;

class PrintData{
	public:
		void print(int i){
			cout << "Print int: " << i << endl;
		}
		
		void print(double f){
			cout << "Print float: " << f << endl;
		}
		
		void print(string c){
			cout << "Printing string: " << c << endl;
		}
};

// Function 2
class Box2{
	protected:
		double length;
		double breadth;
		double height;
		
	public:
		double getVolume(){
			return length * breadth * height; 
		}
		
		void setAll(double l, double b, double h){
			length = l;
			breadth = b;
			height = h;
		}
		
		// overload the function
		Box2 operator+(const Box2& b){
			Box2 box;
			box.length = this -> length + b.length;
			box.height = this -> height + b.height;
			box.breadth = this -> breadth + b.breadth;
			return box;
		}
};

// function 2 void
void Function2Active(){
	Box2 box1;
	Box2 box2;
	Box2 box3;
	double volume = 0.0;
	
	//set the box1 and box2
	box1.setAll(6.0, 7.0, 5.0);
	box2.setAll(12.0, 13.0, 10.0);
	
	// show the result 
	cout << "Volume of Box1: " << box1.getVolume() << endl;
	cout << "Volume of Box2: " << box2.getVolume() << endl;
	
	// Add two object as follows
	box3 = box1 + box2;
	cout << "Volume of Box3: " << box3.getVolume() << endl;
	
	
}

//Function3
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



// driving mode 
int main(){
	
	Function2Active();
	Function3Active();
}
