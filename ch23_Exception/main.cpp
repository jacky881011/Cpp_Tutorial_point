#include <iostream>
using namespace std;

double division(int a, int b){
	if(b == 0){
		throw "Division by zero Error!";
	}
	
	return (a/b);
}

void ExceptionTest1()
{
	int x,y;
	x = 50; y=0;
	double z = 0;
	
	try{
		z = division(x, y);
		cout << z << endl;
		
	}catch(const char* msg){
		cerr << msg << endl;
	}
	
}


class Exception{
	public:
		struct MyException : public exception{
			const char* what() const throw(){
				return "This is test the error";
			}
		};
		void ExceptionTest2()
		{
			try{
				throw MyException();
			}catch(MyException& e){
				cout << "MyException caught: " << endl;
				cout << e.what() << endl;
			}catch(exception e){
				// Other errors
			}
			
		}
};
	

//Driver mode
int main()
{
	Exception ex;
	ex.ExceptionTest2();
	cout << "we can use again!" << endl; 
 } 
	
