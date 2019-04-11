#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char c;
	int count = 0;
	fstream inputFile;
	inputFile.open("text.txt", ios::in);
	c = inputFile.get();
	while(c != EOF)
	{
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			count++;
		c = inputFile.get();
	}
	cout << "\nThe file contains " << count << " alphabetic characters.\n";
	inputFile.close();
	return 0;
}
