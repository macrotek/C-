/* Program :Program to write formatted output to a file, using <<
   Name :Babar Ganesh Ravso
   Class: SE(CSE)
   Roll no:201
*/
#include <fstream.h>
#include <iostream.h>
#include <string.h>
void main()
{
	char ch = 'x';
	int j = 77;
	double d = 6.02;
		string str1 = "Hello"; //strings without
		string str2 = "World"; // embedded spaces
		ofstream outfile("fdata.txt"); //create ofstream object
		outfile << ch<<endl; //insert (write) data
		<< j << " "; //needs space between numbers
		<< d << str1
		<< "  "; //needs spaces between strings
		<< str2;
		out <<"File written\n";
getch();
}