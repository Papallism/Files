#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char sentence[50], c;
	fstream inFile, outFile;
	inFile.open("input.txt", ios::in);
	outFile.open("output.txt", ios::out);
	for(int i = 0; i < 3; i++)
	{
		inFile.getline(sentence, 50);
		outFile << sentence << "#";
	}
	inFile.close();
	outFile.close();
	outFile.open("output.txt", ios::in);
	while(!outFile.eof())
	{
		c = outFile.get();
		if(c != '#')
			cout << c;
		else
			cout << endl;
	}
	outFile.close();
}
