#include<stdio.h>
// #include<iostream>
int main()
{
	char ch;

	scanf("%c", &ch);
	// cin >> ch;

	if (ch >= 'a' && ch <= 'z')
		printf("Small Letter\n");
	// cout << "Small Letter" << endl;

	else if (ch >= 'A' && ch <= 'Z')
		printf("Capital Letter\n");
	// cout << "Capital Letter" << endl;

	return 0;
}