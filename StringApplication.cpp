#include <iostream>
#include <windows.h>

#include "StringLibrary.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str1, str2;

	cin >> str1;

	cin >> str2;

	cout << concatAndReverseSecondString(str1, str2) << endl;

	system("pause");
	return 0;
}
