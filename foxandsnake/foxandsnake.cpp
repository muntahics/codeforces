// foxandsnake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>

using namespace std;

int main() {
	int n;
	int m;
	cin >> n;
	cin >> m;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			for (int i = 0;i < m;i++)
				cout << "#";
		}
		if (i % 2 == 0 && i % 4 != 0) {
			for (int i = 0; i < m - 1;i++)
				cout << ".";
			cout << "#";
		}
		if (i % 2 == 0 && i % 4 == 0) {
			cout << "#";
			for (int i = 0; i < m - 1;i++)
				cout << ".";
			
		}
		cout << endl;
	}
	return 0;
}