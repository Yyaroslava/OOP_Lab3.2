// lab3.2.cpp
#include <iostream>
#include "BaseWindow.h"

using namespace std;

// Polymorph 
void Move(BaseWindow& W, int dx, int dy) {
	W.setLeft(W.getLeft() + dx);
	W.setTop(W.getTop() + dy);
}

int main() {
	BaseWindow w1;
	cout << "w1: " << w1 << endl;
	BaseWindow w2(100,50,300,200);
	cout << "w2: " << w2 << endl;

	cout << "w2.getWidth(): " << w2.getWidth() << endl;
	cout << "w2.setWidth(320)" << endl;
	w2.setWidth(320);
	cout << "w2: " << w2 << endl;

	CaptionWindow cw1;
	cout << "cw1: " << cw1 << endl;

	CaptionWindow cw2(1,2,3,4,"Hello");
	cout << "cw2: " << cw2 << endl;
	cout << "(string)cw2: " << (string)cw2 << endl;

	CaptionWindow cw3;
	cout << "Input caption window 3: " << endl;
	cin >> cw3;
	cout << "cw3: " << cw3 << endl;
	cout << "cw3.Base(): " << cw3.Base() << endl;
	cout << "Move(cw3, 10, 10): " << endl;
	Move(cw3, 10, 10);
	cout << "cw3: " << cw3 << endl;

	return 0;
}
