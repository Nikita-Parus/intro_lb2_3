﻿#include <iostream>

using namespace std;

int main()
{
	int size = 7;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}