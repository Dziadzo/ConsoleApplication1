// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(0, "ru");
    int a = 0;
	while (true)
	{
		a = _getch();
		if (a==224)
		{
			a = _getch();
			switch (a)
			{
			case 72: {cout << " вверх " << endl; } break;
			case 80: {cout << " вниз " << endl; } break;
			case 75: {cout << " влево " << endl; } break;
			case 77: {cout << " вправо " << endl; } break;
			default:
				break;
			}
		}
		else if (a==32)
		{
			cout << " пробел " << endl;
		}
	}
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
