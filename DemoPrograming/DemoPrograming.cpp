//============================================================================
// Name        : tess.cpp
// Author      : Huy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int sum1(int);
int sum2(int);
int fibonacci(int);
void swap1(int, int);
void swap2(int&, int&);
int main() {
	cout << "sum 1:" << sum1(5) << endl;
	cout << "sum 2:" << sum2(5);
	/*int x=7;
	int y=8;
	swap2(x,y);
	cout<<x<<'\n';
	cout<<y;*/
	return 0;

}
void swap1(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void swap2(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;

}
int fibonacci(int n) {
	if (n == 1 || n == 2) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}
int sum1(int n) {
	if (n == 1) return 1;
	else return sum1(n - 1) + n;
}
int sum2(int n) {
	return n * (n + 1) / 2;
}
