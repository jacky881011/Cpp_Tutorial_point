#include <iostream>
using namespace std;

class Adder{
	
	
	// hidden to inside world
	private:
		int num, sum,i;
	
	public:
		Adder(int i = 0){
			sum = i;
		}
		
		// interface to outside world
		void addNum(int i){
			sum += i;
		}
		
		// interface to outside world
		int getTotal(){
			return sum;
		} 
}; 




int main(){
	Adder ad;
	ad.addNum(10);
	ad.addNum(20);
	ad.addNum(30);
	
	cout << "Get the sum: " << ad.getTotal() << endl;
	
}
