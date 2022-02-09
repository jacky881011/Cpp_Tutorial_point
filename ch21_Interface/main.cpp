#include <iostream>
using namespace std;

// Base class
class Shape{
	protected:
		int weight, height;
	public:
		// pure virtual function providing interface framework
		virtual int getArea() = 0;
		
		void setAll(int w, int h){
			cout << "Set the weight..." <<endl;
			weight = w;
			cout << "Set the height..." <<endl;
			height = h;
		}
};

// Derived class
class Rectangle: public Shape{
	public:
		int getArea(){
			return weight * height;
		}
		
		int getCheck(){
			return getArea();
		}
};

class Triangle: public Shape{
	public:
		int getArea(){
			return (weight * height /2);
		}
};



int main(void){
	
	Rectangle rec;
	rec.setAll(5, 7);
	
	Triangle tri;
	tri.setAll(5,7);
	
	


}
