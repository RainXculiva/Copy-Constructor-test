// Copy Constructor test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	class circle 
	{
	public:
		circle()
		{
			radius = 1.0;
			area = pi;

		}
		void set(double Radius)
		{
			radius = Radius;
			area = radius * radius * pi;
		}
		double getArea()
		{
			return area;
		}
	private:
		double radius;
		double area;
	protected:
		const double pi = 3.1415926;
	};
	circle circle1;
	circle1.set(10);
	circle circle2(circle1);
	cout << circle2.getArea() << endl;

	system("PAUSE");
	return 0;
}

