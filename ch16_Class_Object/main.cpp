#include <iostream>
using namespace std;

void Prac1();
void Prac2();


// driver mode
int main(){
	Prac2();
}


// Practice1
class Box{
	public:
		double length;
		double breadth;
		double height;
		
		void volumeShow(double a, double b, double c){
			cout << "Volume is: " << (a*b*c) << endl;  
		}
};
void Prac1(){
	Box box1;
	Box box2;
	
	double volume = 0.0;
	
	// box1 specification
	box1.breadth = 5.0;
	box1.height = 6.0;
	box1.length = 7.0;
	
	// box2 setting
	box2.breadth = 13.0;
	box2.length = 12.0;
	box2.height = 10.0;
	
	cout << "Volume box1: " << endl;
	box1.volumeShow(box1.height, box1.breadth, box1.length);
	
	cout << "Volume box2: " << endl;
	box1.volumeShow(box2.height, box2.breadth, box2.length);
	
} 


// function2 practice
class Box2{
	public:
		double length;
		double breadth;
		double height;
		
		// member function declaration
		double getVolume(){
			return (length * breadth * height);
		}
		
		void setLength(double l){
			length = l;
		} 
		
		double getLength(){
			return length;
		}
		
		void setBreadth(double b){
			breadth = b;
		}
		
		double getBreadth(){
			return breadth;
		}
		
		void setHeight(double h){
			height = h;
		} 
		
		double getHeight(){
			return height;
		}
};

void Prac2(){
	Box2 box;
	double volume = 0.0;
	
	box.setBreadth(7.0);
	box.setHeight(5.0);
	box.setLength(6.0);
	
	cout << "Breadth: " << box.getBreadth() << "\nHeight: " << box.getHeight() << "\nLength: " << box.getLength() << endl;
	
	volume = box.getVolume();
	cout << "Box volume is : " << volume << endl;
}
