// MojPrviVSProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	fstream datoteka;
	int izbor=-1;
	int tracker = 0;
	string line;
	int counter=0;
	datoteka.open("imenik.txt", ios::in);
	while (getline(datoteka, line))
		counter++;
	datoteka.close();
	string *imeprezime = new string[1000];
	datoteka.open("imenik.txt", ios::in);
	for (int i = 0; i < counter; i++)
	{
		getline(datoteka, imeprezime[i]);
	}
	datoteka.close();
	while (izbor != 0)
	{
		cin >> izbor;
		cin.ignore();
		if (izbor == 1)
		{
			getline(cin, imeprezime[counter]);
			counter++;
		}
	}
	sort(imeprezime, imeprezime + counter);
	datoteka.open("imenik.txt", ios::out | ios::trunc);
	for (int i = 0; i < counter; i++)
	{
		datoteka << imeprezime[i] << endl;
	}
	datoteka.close();
	datoteka.open("imenik.txt", ios::in);
	for (int i = 0; i < counter; i++)
	{
		getline(datoteka, imeprezime[i]);
	}
	datoteka.close();
	for (int i = 0; i < counter; i++)
	{
		cout << imeprezime[i] << endl;
	}

	return 0;
}

