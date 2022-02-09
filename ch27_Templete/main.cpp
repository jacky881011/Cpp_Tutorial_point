#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>
using namespace std;


// function templatTest1
template <typename T>
inline T const& Max(T const& a, T const& b){
	return a < b ? b:a;
}

void TemplateTest1(){
	int i, j;
	i = 39;j =20;
	cout << "Max(i , j): " << Max(i, j) << endl;
	
	double f1 = 13.5;
	double f2 = 20.7;
	cout << "Max(i, j): " << Max(f1, f2) << endl;
	
	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1, s2): " << Max(s1, s2) << endl;
}




// TemplateTest2
template<class T>
class Stack{
	private:
		vector<T> elems;
	public:
		void push(T const&);
		void pop();
		T top() const;
		
		bool empty() const{
			return elems.empty();
		}
		
};

template<class T>
void Stack<T>::push(T const& elem){
	elems.push_back(elem);
}

template<class T>
void Stack<T>::pop(){
	if(elems.empty()){
		throw out_of_range("Stact<>::pop(): empty stack");
	}
	
	
	// remove last element
	elems.pop_back();
}

template<class T>
T Stack<T>::top() const{
	if(elems.empty()){
		throw out_of_range("Stact<>::top(): empty stack");
	}
	
	// return copy of last element
	return elems.back();
}

void TemplateTest2(){
	try{
		Stack<int> intStack;
		Stack<string> stringStack;
		
		intStack.push(7);
		cout << intStack.top() << endl;
		
		stringStack.push("Hello");
		cout << stringStack.top() << endl;
		
		stringStack.pop();
		stringStack.pop();
	}catch(exception const& ex){
		cerr << "Exception: " << ex.what() << endl;
		
	}
}



int main(){
	TemplateTest();
}
