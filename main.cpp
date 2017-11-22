/**
@author leonardo biondi
@version 1.0.0
@date 22/11/2017
*/
#include<iostream>
using namespace std;

/**
la funzione incrementa stampa la variabile contatore per un totale di  volte incrementandola
@param int c --> contatore
@return stampa dei valori del contatore
*/
void incrementa(int c)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "variabile contatore: " << c << endl;
		c++;
	}
}

/**
Main che richiama la funzione incrementa()
*/
void main()
{
<<<<<<< HEAD
	int c = 0;
=======
	int c = 1;
>>>>>>> FIX_BUG
	incrementa(c);
	system("pause");
}