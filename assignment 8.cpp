#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;

/*Define a class Directory with members: name and phone number. Use the class object to
store each set of data into a text file “phone.txt”. The names contain only one word and the
names and telephone numbers are separated by white spaces. Write a C++ program to read the
file and output the list in two columns, such as:
John 23456
Ahmed 9876*/

class directory
{
    string name;
    unsigned long long int phone_number;                            //only reason to use this big datatype is foe length of phonenumber

public:
    void input()
    {
        cout << "Enter the name of the person:- ";
        cin >> name;

        cout << "Enter the phone number of " << name << " :- ";
        cin >> phone_number;

        ofstream data_file("data.txt");                                  //creation of the file
        if (!data_file)
        {
            cout << "File cann't be opened";
        }

        data_file.open("data.txt", ios::in);
        data_file << name << "\t" << phone_number;
        data_file.close();


    }

    void display_entered_data()
    {
        cout << "\n\nName of the person:- " << name;

        cout << "Phone number of " << name << " :- " << phone_number << endl;
    }

    void read_file()
    {
        ifstream data_file("data.txt");
        string name_o;
        unsigned long long int phone_number_o;
                                                         
        while (data_file >> name_o >> phone_number_o)
        {
            cout << name_o << "\t" << phone_number_o;
        }
    }


};

int main(void)
{
    directory d;
    d.input();
    d.display_entered_data();
    d.read_file();
    return 0;
}