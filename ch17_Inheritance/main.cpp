#include <iostream>
using namespace std;

// Fuction 1

// Base Class
class Shape{
	protected:
		int width;
		int length;
	
	
	public:
		void setWidth(int w){
			width = w;
		}
		
		void setLength(int l){
			length = l;
		}
	
};


// Sub Class
class Rectangle : public Shape{
	public:
		int getArea(){
			return (width*length);
		}
	
};

// Function 2
class Shape2{
	protected:
		int length;
		int weight;
	
	public:
		void setLength(int l){
			length = l;
		}
		
		void setWeight(int w){
			weight = w;
		}
	
};

class PainCost2{
	public:
		int getCost(int area){
			return area* 70;
		}
};

//Derived class
class Rectangle2: public Shape2, public PainCost2{
	public:
		int getArea(){
			return (length * weight);
		}
}; 




// Driver mode
int main(){
	Rectangle2 rect2;
	
	rect2.setWeight(7);
	rect2.setLength(10);
	cout << "The area is : " << rect2.getArea() << "\nCost is : "  <<  rect2.getCost(rect2.getArea());
	
}





