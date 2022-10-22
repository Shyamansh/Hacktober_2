// Assignment-7 C++.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*Question1,2 Implement the class hierarchy as shown in the following figure (using C++).

Q2 The database created in the experiment 8 does not include educational information of the
staff. It has been decided to add this information to teacher and officers (not for typists)
which will help the management in decision making with regard to training, promotion, etc.
Add another data class called Education that holds two pieces of education information,
namely, highest qualification in general education and highest professional qualification. The
class should be inherited by the class Teacher and Officer. Modify the program of above
exercise to incorporate these additions. Include overloaded constructors in all above classes.*/


/*#include <iostream>
using namespace std; 


class staff
{
private:
    int code;
    string name; 
public:
    void set_data()
    {
        cout<<"Enter the Code:"; 
        cin>>code;

        cout<<"Enter Name: "; 
        cin>>name;
    }
};


class teacher : public staff
{
private:
    string subject,publication; 
public:
    void teacher_data()
    {
        cout<<"subject:";
        cin>>subject; 
        cout<<"Publication:"; 
        cin>>publication; 
        cout<<"\n";
        }
};


class typist:public staff
{ 
private:
    int speed;
public:
    void typist_data()
    {
        cout<<"speed:";
        cin>>speed; 
    }
};


class officer : public staff
{
private:
    int grade;
public:
    void set_datas()
    {
        cin >> grade;
    }


    void off_data()
    {
        cout << "The grade is " << grade;
    }
};


class regular:private typist
{

};

class casual:public typist
{
private:
    int daily_wages; 
public:
    void cas_data()
    {
        cout<<"Daily Wage:"; 
        cin>>daily_wages; 
        cout<<"\n";
    }
};


class education : public officer, public teacher
{
    //defaultly initilised as public
    string  highest_general_education_qualification;
    string  highest_professional_qualification;
};


int main() 
{
    teacher obj; 
    obj.set_data(); 
    obj.teacher_data();

    typist typ; 
    typ.set_data(); 
    typ.typist_data(); 

    casual cas; 
    cas.cas_data(); 

    officer off; 
    off.set_datas(); 
    off.off_data(); 


    return 0; 
}
  */

/*Question 3:- Implement the class hierarchy shown in the following figure, using C++. Define
appropriate member functions (including constructors and destructors) to convert feet class
object into inches class object and vice versa. Also the objects of the feet and inches
constructors should construct their objects using the constructors of the height and width
constructor which in turn call building constructor*/

#include <iostream>
using namespace std;


class Building 
{
public:
    double height = 1.78; double width = 0.64;
};


class Height :public Building 
{
public:
    double heightb = height;
};


class Width :public Building 
{
public:
    double widthb = width;
};


class Inches :public Height, public Width 
{
public:
    double heighti = heightb * 39370.07;
    double widthi = widthb * 39370.07;
};


class Feet :public Height,public Width 
{
public:
    double heightf = heightb * 3280.84; 
    double widthf = widthb * 3280.84;
};


int main() 
{
    Building b;
    Feet f;
    Inches i;

    cout << "Height of building is : " << b.height << endl; cout << "width of building is : " << b.width << endl; cout << "height of building in feet is : " << f.heightf << endl; cout << "width of building in feet is : " << f.widthf << endl; cout << "height of building in inches is : " << i.heighti << endl; cout << "width of building in inches is : " << i.widthi << endl;
    return 0;
}