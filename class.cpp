#include<iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;
	cout <<"here: "<< ch << endl;

	 int marks;

	 cout << "Enter the marks here: " << endl;
	 //take input from user
	 cin >> marks;

	 cout << "Printing marks: " << marks << endl;
	

	 int age = 101;
	 int car = 12;
	
	if(age >= 18 || car >=1) {
	 	cout << "License miljaega" << endl;
	 }

	 cout << !age << endl;
	
	 int r = 20;
	 int m = 10;

	 cout << (r == m) << endl;
		
	 int a = 3;
	 int b = 2;

	 cout << a + b << endl;
	 cout << a - b << endl;
	 cout << a*b << endl;
	cout << a/b << endl;
	cout << b % a << endl; 
	//garbage value
	 int num;
	 num = 12;
	 cout << num << endl;

	//int -> 4 byte
	int n = 50;
	cout << n << endl;

	 cout << sizeof(num) << endl;

	// //character -> 1byte
	 char c = 'k';
	 cout << c << endl;
	 cout << sizeof(c) << endl;

	// //float -> 4 byte
	 float point = 1.69;
	 cout << point << endl;
	 cout << sizeof(point) << endl;

	// //long -> 4 byte
    int number=10;
	cout << number << endl;
	cout << sizeof(number) << endl;
	
	 cout << "Love " << endl << "babbar" << '\n';
	 cout << "Love Babbar" << endl ;
	 cout << endl;
	 cout << endl;
	 cout << '\n';
	 cout << "Lovely Babbar" ;

	//find in homework
	return 0;
}