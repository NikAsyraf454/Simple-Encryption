#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pass, converted, NormalPass;
	char key = 'A';							//key to change the calculation of ascii conversion
	int i, ToAscii[100] , FromAscii[100];
	cout << "enter pass: ";
	getline(cin, pass);
	for (i = 0; i < pass.size(); i++)		//convert to ascii value
	{
		ToAscii[i] = int(pass.at(i));		//show value of ascii
		cout << ToAscii[i] << endl;
		ToAscii[i]+= int(key);						//to add value so it changes the character
		converted = converted + char(ToAscii[i]);		//convert previously changed char to string to send to file
	}
	cout << endl;
	cout << converted << endl;		//the converted string

	for (i = 0; i < pass.size(); i++)		//convert back to normal password
	{
		FromAscii[i] = int(converted.at(i)) - int(key);		//subtract to get back real value(ascii code)
		NormalPass = NormalPass + char(FromAscii[i]);
	}

	cout << endl;
	cout << "Back to normal pass: " << NormalPass;		//the normal password
	return 0;
}