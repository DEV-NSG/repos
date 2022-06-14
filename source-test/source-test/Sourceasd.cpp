#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	// Create a text file
	ofstream MyWriteFile("filename3.txt");

	// Write to the file
	MyWriteFile << "M�dulo 7 - PSI";

	// Close the file
	MyWriteFile.close();

	// Create a text string, which is used to output the text file
	string myText;

	// Read from the text file
	ifstream MyReadFile("filename3.txt");

	// Use a while loop together with the getline() function to read the file line by line

	while (getline(MyReadFile, myText)) {

		// Output the text from the file

		cout << myText;

	}

	// Close the file

	MyReadFile.close();

}
