#include<iostream>
using namespace std;
#define P 3.14
class Shape {
protected:
	int r;
	int s;
	int m;
public:
	Shape(int& r1,  int& s1, int& m1) :r(r1), s(s1), m(m1) { cout << "this is a constructor for Shape \n"; }
	double  makeres() { return 1; };
	double paragic() { return 1; };

};

class circle :public Shape {
public:
	circle(int& r1, int& s1, int& m1) :Shape(r1, s1, m1){ cout << "this is a constructor for circle \n"; }
	double paragic()
	{
		return(P * (r * r));
	}
	double makeres()
	{
		return(2 * P * r);
	}
};

class rectangle :public Shape {
public:
     rectangle(int& r1, int& s1, int& m1) :Shape(r1, s1, m1) { cout << "this is a constructor for rectangle \n"; }
	 double paragic()
	 {
		 return(2 * (s + m));
	 }
	 double makeres()
	 {
		 return(s * m);
	 }
};



class Triangle :public Shape {
public:

   Triangle(int& r1, int& s1, int& m1) :Shape(r1, s1, m1) { cout << "this is a constructor for  triangle \n"; }
    double paragic()
	 {
		return(s + m + s);
	 }
	 double makeres()
	 {
		 return((1/2)&r*s);
	 }
};

int main()
{
	int x = 1, y = 2, z = 3;
	Shape obj(x,y,z);
	cout << endl;
	circle obj1(x,y,z);
	cout<<obj1.makeres()<< "\n";
	cout << obj1.paragic() << "\n";
	rectangle obj2(x, y, z);

	cout << obj2.makeres() << "\n";
	cout << obj2.paragic() << "\n";

	Triangle obj3(x, y, z);

	cout << obj3.makeres() << "\n";
	cout << obj3.paragic() << "\n";
	obj.makeres();
}









