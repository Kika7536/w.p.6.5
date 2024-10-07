#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int width = 31, height = 21;

	for (int i = 0; i < height; i++) {
		if (i == 0) {
			for (int i = 0; i < width; i++) {
				if (i == width / 2) {
					cout << "^";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
		else if (i == height / 2) {
			for (int i = 0; i < width; i++) {
				if (i == width / 2) {
					cout << "+";
				}
				else {
					cout << "-";
				}
			}
			cout << endl;
		}
		else {
			for (int i = 0; i < width; i++) {
				if (i == width / 2) {
					cout << "|";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}

}