#include<iostream>
#include "Form1.h";
using namespace std;
using namespace Project_02;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Form1());
	
	//int i = 0;
	//cout << "Enter the number: ";
	//cin >> i;
	//cout << "\n\tYou Have Entered " << i << " This number\n";
	
	return 0;
}



