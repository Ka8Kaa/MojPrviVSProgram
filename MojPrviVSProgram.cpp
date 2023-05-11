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
	string line;
	int counter = 0;
	datoteka.open("imenik.txt", ios::in);
	while (getline(datoteka, line))
		counter++;

	string* imeprezime = new string[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin, imeprezime[i]);
	}
	sort(imeprezime, imeprezime + n);
	for (int i = 0; i < n; i++)
	{
		datoteka << imeprezime[i] << endl;
	}
	datoteka.close();
	return 0;
}

