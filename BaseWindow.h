#pragma once
#include <iostream>

using namespace std;

class BaseWindow {
protected:
	int top;
	int left;
	int width;
	int height;
public:
	void setTop(int _top) { top = _top; };
	int getTop() { return top; };

	void setLeft(int _left) { left = _left; };
	int getLeft() { return left; };

	void setWidth(int _width) { width = _width; };
	int getWidth() { return width; };

	void setHeight(int _height) { height = _height; };
	int getHeight() { return height; };

	BaseWindow();
	BaseWindow(int, int, int, int);
	BaseWindow& Base() { return *this; }; // returns Base class object
	operator string() const;
	friend ostream& operator << (ostream&, const BaseWindow&);
	friend istream& operator >> (istream&, BaseWindow&);
	~BaseWindow();
};

class CaptionWindow : public BaseWindow {
protected:
	string caption;
public:
	void setCaption(string _caption) { caption = _caption; };
	string getCaption() { return caption; };
	CaptionWindow();
	CaptionWindow(int, int, int, int, string);
	operator string() const;
	friend ostream& operator << (ostream&, const CaptionWindow&);
	friend istream& operator >> (istream&, CaptionWindow&);
	~CaptionWindow();
};

class ButtonWindow : public BaseWindow {
protected:
	int button_type;
public:
	void setType(int _button_type) { button_type = _button_type; };
	int getType() { return button_type; };
	ButtonWindow();
	ButtonWindow(int, int, int, int, int);
	operator string() const;
	friend ostream& operator << (ostream&, const ButtonWindow&);
	friend istream& operator >> (istream&, ButtonWindow&);
	~ButtonWindow();
};

