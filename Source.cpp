/*Define two classes Distance1 and Distance2 in C++. Distance1 stores
distance in miles and Distance2 in kmeters & meters. Write a program that
reads values of the class objects and adds one object of Distance1 with the
object of Distance2 class. The display should be in the format of miles or
kmeters & meters depending on the type of object (Distance1 or Distance2) being
used to invoke the function. (Hint: Make use of friend function).*/

//Name:- Shyamansh Sharma
//Roll No.:- 201251
//Batch:- CS-34

#include<conio.h>
#include<iostream>
using namespace std;

class Distance1
{
public:
	float miles;
	void input()
	{
		cout << "enter distance in miles :";
		cin >> miles;
	}
	friend void add(string a);
} a1;										//direct decleration at tne end of class


class Distance2
{
public:
	float kilometer,meter;
	void input()
	{
		cout << "enter distance in kilometer :";
		cin >> kilometer;
		
		cout << "enter distance in meter :";
		cin >> meter;

		kilometer = kilometer + (meter * 0.001);
	}
	friend void add(string a);
} a2;										//direct decleration at tne end of class

void add(string a)
{
	if(a == "km")
	{
		float x=0, res=0;
		x = a1.miles * 1.60934;
		res = x + a2.kilometer;
		cout << " total kilometers = " << res;
	}
		

	else if(a=="mi")
	{
		float x = 0, res = 0;
		x = a2.kilometer / 1.60934;
		res = x + a1.miles;
		cout << " total miles = " << res;
	}

}

int main(void)
{
	string a;
	a1.input();
	a2.input();
	cout << "Enter 'km' to get output in kilometer OR enter 'mi' to get answer in miles.";
	cin >> a;
	add(a);
	return 0;

}