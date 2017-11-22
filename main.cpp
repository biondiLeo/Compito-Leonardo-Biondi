#include<iostream>
using namespace std;

void incrementa(int c)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "variabile contatore: " << c << endl;
		c++;
	}
}

void main()
{
	int c;
	incrementa(c);
	system("pause");
}