#include<iostream>
#include<iomanip>
#include <string>
#include <bitset>
#include <sstream>

using namespace std;
void Hex_Splitter(string a, string *b, string *c)
{
	
	string temp;
	for (int i=0; i<4; i++)
	{
		stringstream ss;
		ss<<a[i];
		ss>>temp;
		(*b).append(temp);
		temp.clear();
	}
	for (int i=4; i<8; i++)
	{
		stringstream ss;
		ss<<a[i];
		ss>>temp;
		(*c).append(temp);
		temp.clear();
	}
};

int Hex_to_Dec(string a)
{
	stringstream aa;
	aa<<hex<<a;
	int n=0;
	aa>>n;
	return n;
};

string Hex_to_Bin(string a)
{
	
	stringstream aa;
	aa<<hex<<a;
	unsigned n;
	aa>>n;
	bitset<16> b(n);
	return b.to_string();
};
int main()
{
	string d;
	string temp;
	string Big,Boy;
	string c="00080008";
	string b="18";
	cout<<endl;
	string Bin=Hex_to_Bin(b);
	Bin.push_back('A');
	
	//Hex_Splitter(c,&Big,&Boy);
	//Big=Hex_to_Bin(Big);
	//Boy=Hex_to_Bin(Boy);
	//cout<<Big<<endl;
	//out<<Boy<<endl;

	unsigned int x = 12;
	unsigned int y = C8;

	if ( x > y )
		cout << "Works";

	system("pause");
	return 0;
}
	
