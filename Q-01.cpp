#include <iostream>
using namespace std;
int main()
{
	int a, b, temp;
	cout << "Enter two No:" << endl;
	cin >> a >> b;
	cout << "Before Swapping :" << endl;
	cout << a << "	" << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "After Swapping :" << endl;
	cout << a << "	" << b;
	return 0;
}
