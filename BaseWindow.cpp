#include "BaseWindow.h"
#include <iostream>
#include <string>

using namespace std;

BaseWindow::BaseWindow() {
	top = 0;
	left = 0;
	width = 0;
	height = 0;
}

BaseWindow::BaseWindow(int _top, int _left, int _width, int _height) {
	top = _top;
	left = _left;
	width = _width;
	height = _height;
}

BaseWindow::operator string() const {
	return "[ Top: " + to_string(top) + ", Left: " + to_string(left) + ", Width: " + to_string(width) + ", Height: " + to_string(height) + " ]";
}

ostream& operator << (ostream& out, const BaseWindow& W) {
	out << "[ Top: " << W.top << ", Left: " << W.left << ", Width: " << W.width << ", Height: " << W.height << " ]";
	return out;
}

istream& operator >> (istream& in, BaseWindow& W) {
	in >> W.top >> W.left >> W.width >> W.height;
	return in;
}

BaseWindow::~BaseWindow() { }

/////////////////////////////////////////////////////

CaptionWindow::CaptionWindow() : BaseWindow() {
	caption = "";
}

CaptionWindow::CaptionWindow(int _top, int _left, int _width, int _height, string _caption) : BaseWindow(_top, _left, _width, _height) {
	caption = _caption;
}

CaptionWindow::operator string() const {
	return "[ Top: " + to_string(top) + ", Left: " + to_string(left) + ", Width: " + to_string(width) + ", Height: " + to_string(height) + ", Caption: " + caption + " ]";
}

ostream& operator << (ostream& out, const CaptionWindow& W) {
	out << "[ Top: " << W.top << ", Left: " << W.left << ", Width: " << W.width << ", Height: " << W.height << ", Caption: " << W.caption << " ]";
	return out;
}

istream& operator >> (istream& in, CaptionWindow& W) {
	in >> W.top >> W.left >> W.width >> W.height >> W.caption;
	if ((W.height < 0) || (W.width < 0)) {
		cout << "Error! Width and Height shouldn't be negative. " << endl;
		exit(1);
	}
	return in;
}

CaptionWindow::~CaptionWindow() { }

 /////////////////////////////////////////////////

ButtonWindow::ButtonWindow() : BaseWindow() {
	button_type = 0;
}

ButtonWindow::ButtonWindow(int _top, int _left, int _width, int _height, int _button_type) : BaseWindow(_top, _left, _width, _height) {
	button_type = _button_type;
}

ButtonWindow::operator string() const {
	return "[ Top: " + to_string(top) + ", Left: " + to_string(left) + ", Width: " + to_string(width) + ", Height: " + to_string(height) + ", Caption: " + to_string(button_type) + " ]";
}

ostream& operator << (ostream& out, const ButtonWindow& W) {
	out << "[ Top: " << W.top << ", Left: " << W.left << ", Width: " << W.width << ", Height: " << W.height << ", Button type: " << W.button_type << " ]";
	return out;
}

istream& operator >> (istream& in, ButtonWindow& W) {
	in >> W.top >> W.left >> W.width >> W.height >> W.button_type;
	if ((W.height < 0) || (W.width < 0)) {
		cout << "Error! Width and Height shouldn't be negative. " << endl;
		exit(1);
	}
	return in;
}

ButtonWindow::~ButtonWindow() { }
