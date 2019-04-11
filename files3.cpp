#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
	char firstName[20], lastName[20], telephone[20];
	fstream input;
	input.open("phones.txt", ios::in);
	cout << "Name:" << setw(27) << "Telephone number:" << endl;
	while(!input.eof())
	{
		input >> firstName >> lastName;
		input.getline(telephone, 20);
		cout << firstName << " " << lastName << setw(25 - (strlen(lastName) + strlen(firstName))) << right << telephone << endl;
	}
	input.close();
	return 0;
}
