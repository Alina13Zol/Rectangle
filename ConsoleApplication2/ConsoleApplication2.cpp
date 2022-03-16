// Rectangle.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Rectangle
{
public:
	double a;
	double b; 
	double rec_perimetr()
	{
	    return (a+b)*2;
    }
	double rec_area()
	{
	    return a*b;
	}

};

class ColorRectangle : public Rectangle
{
private:
	string color;
public:
	void setColor(string s) { color = s; };
	string getColor() { return color; };


};

int main()
{
	Rectangle obj;
	cin>>obj.a;
	cin>>obj.b;
	cout<<"Perimetr is: "<<obj.rec_perimetr()<< "\n";
	cout << "Area is: " << obj.rec_area();

	ColorRectangle obg1;
	string c;

	cin >> c;
	obg1.setColor(c);
	obg1.a = 2;
	obg1.b = 3;
	cout << "Perimetr is: " << obg1.rec_perimetr() << "\n";
	cout << "Area is: " << obg1.rec_area();
	cout << "Color is " << obg1.getColor();

	
	return 0;

}

