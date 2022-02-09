#include <iostream>
#include <cstring>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void StructurePrac1();
void StructurePrac2();
void StructurePrac3();
void PointerPrac();
void printBook(struct Books book);
void printBookPinter(struct Books *book);


// diver mode
int main(){
	PointerPrac(); 
}

// Practice 1
struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};


void StructurePrac1(){
	struct Books Book1;		// declare Book1 of type Book
	struct Books Book2;		// declare Book2 of type Book
	
	// book1 specification
	strcpy(Book1.title, "Learn C++ Programming");
	strcpy(Book1.author, "Chand Miyan");
	strcpy(Book1.subject, "C++ programing");
	Book1.book_id = 6495407;
	
	// book2 specification
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Yakit Singha");
	strcpy(Book2.subject, "Telecom");
	Book2.book_id = 6495700;
	
	// print book1 info
	cout << "Book1: " << endl;
	cout << "	title: " << Book1.title << endl;
	cout << "	author: " << Book1.author << endl;
	cout << "	subject: " << Book1.subject << endl;
	cout << "	book_ID: " << Book1.book_id << endl;
	
	// print book2 infp
	cout << "Book2: " << endl;
	cout << "	title: " << Book2.title << endl;
	cout << "	author: " << Book2.author << endl;
	cout << "	subject: " << Book2.subject << endl;
	cout << "	book_ID: " << Book2.book_id << endl;

}

void StructurePrac2(){
	struct Books book1;
	struct Books book2;
	struct Books *sp;
	
	sp = &book1;	
	
	
	
	
	// book1 specification
	strcpy(book1.title, "Learn C++ Programming");
	strcpy(book1.author, "Chand Miyan");
	strcpy(book1.subject, "C++ programing");
	book1.book_id = 6495407;
	
	// book2 specification
	strcpy(book2.title, "Telecom Billing");
	strcpy(book2.author, "Yakit Singha");
	strcpy(book2.subject, "Telecom");
	book2.book_id = 6495700;
	
	cout << "The address of book1: " << sp << endl;
	cout << "The book1 tile is: " << sp -> title << endl; 
	
	cout << "Book1: " << endl;
	printBook(book1);
	
	cout << "Book2: " << endl;
	printBook(book2);
	
	
}

void printBook(struct Books book){
	// print book2 info
	cout << "	title: " << book.title << endl;
	cout << "	author: " << book.author << endl;
	cout << "	subject: " << book.subject << endl;
	cout << "	book_ID: " << book.book_id << endl;
}

// Practice 3 
void StructurePrac3(){
	struct Books book1;
	struct Books book2;
	
	// book1 specification
	strcpy(book1.title, "Learn C++ Programming");
	strcpy(book1.author, "Chand Miyan");
	strcpy(book1.subject, "C++ programing");
	book1.book_id = 6495407;
	
	// book2 specification
	strcpy(book2.title, "Telecom Billing");
	strcpy(book2.author, "Yakit Singha");
	strcpy(book2.subject, "Telecom");
	book2.book_id = 6495700;
	
	
	cout << "Book1: " << endl;
	printBookPinter(&book1);
	
	
	cout << "Book2: " << endl;
	printBookPinter(&book2);
	
	
	
}

void printBookPinter(struct Books *book){
	cout << "	title: " << book -> title << endl;
	cout << "	author: " << book -> author << endl;
	cout << "	subject: " << book -> subject << endl;
	cout << "	book_ID: " << book -> book_id << endl;
	
	
}

void PointerPrac(){
	int k = 100;
	int *kp;
	
	kp = &k;
	cout << "The address of k is: " << kp << endl;
	cout << "The value of k is: " << *kp << endl;
}






