#include <iostream>
using namespace std;

class Shape{
	protected:
		int length, weight;
	public:
		Shape(int l, int w){
			length = l;
			weight = w;
		}
		
		virtual int area(){
			cout << "Parent class area: " << endl;
			return 0;
		}
};

class Rectangle : public Shape{
	public:
		Rectangle(int a = 0, int b = 0): Shape(a, b){}
		
		int area(){
			cout << "Rectangle class area: " << endl;
			return (weight * length );
		} 
};


class Triangle : public Shape{
	public:
		Triangle(int a = 0, int b = 0): Shape(a, b){}
		
		int area(){
			cout << "Triangle class area: " << endl;
			return (weight * length)/2;
		}
};



int main(){
	Triangle tri(10, 7);
	cout << "Triangle area: " << tri.area() << endl;
	 
	
	
}
