#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int b = 'A';
	int &c = b;
	int *x = &a;
	int *y = &b;
	int **z = &x;
	cout << a << ' ' << char(b) << ' ' << char(c) << ' ' << x << ' ' << y << ' ' << z << endl;
	cout << &a << ' ' << &b << ' ' << &c << ' ' << &x << ' ' << &y << ' ' << &z << endl;
	c = 'F';
	cout << a << ' ' << char(b) << ' ' << char(c) << ' ' << x << ' ' << y << ' ' << z << endl;
	*y = 'W';
	cout << a << ' ' << char(b) << ' ' << char(c) << ' ' << x << ' ' << y << ' ' << z << endl;
	*x = 6;
	cout << a << ' ' << char(b) << ' ' << char(c) << ' ' << x << ' ' << y << ' ' << z << endl;
	**z = 7;
	cout << a << ' ' << char(b) << ' ' << char(c) << ' ' << x << ' ' << y << ' ' << z << endl;
	return 0;
}
