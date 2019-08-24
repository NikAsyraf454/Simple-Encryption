#include<iostream>
//#include<string>
using namespace std;

int main()
{
	char i, j = 'C';
	float inti, intj, k, l, a=127;
	cout << "enter a char: ";
	cin >> i;
	cout << (int)i << endl;	
	k = ((int)i + (int)j);
	cout << k << " and charK is " << (char)k << endl;
	l = k - (int)j;
	cout << l << "answer is " << (char)l;
	return 0;
}