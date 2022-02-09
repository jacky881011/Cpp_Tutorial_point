#include <iostream>
using namespace std;

// first namespace
namespace first_space
{
	void func(){
		cout << "Inside the 1 space" << endl;
	}
}

// second namespace
namespace second_space
{
	void func(){
		cout << "Inside the 2 space" << endl;
	}
}

// Nested Namespace
namespace outside{
	void func(){
		cout << "Outside the namespace!" << endl;
	}
	namespace inside{
		void func(){
			cout << "Inside the namespace!" << endl;
		}
	}
}



int main(){
	outside::inside::func();
	
}
