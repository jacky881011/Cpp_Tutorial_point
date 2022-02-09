#include <iostream>

using namespace std;

class Adder{
	private:
		int sum, i;
	
	public:
		// Constructor
		Adder(int i = 0){
			sum = i;
		} 
		
		void addNum(int number){
			sum += number;
		}
		
		int getSum(){
			return sum;
		}
};



int main(){
	Adder a;
	a.addNum(10);
	a.addNum(20);
	a.addNum(30);
	
	cout << "Sum of adder: " << a.getSum() << endl;
	
	
}
