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
    string phone_number;                            //only reason to use this big datatype is foe length of phonenumber

public:
    void input ()
    {
        cout << "\n\nEnter the name of the person:- ";
        cin >> name;

        cout<< "Enter the phone number of "<< name <<" :- ";
        cin >> phone_number;

        ofstream data_file("data.txt",ios::app);                                  //creation of the file
        if(!data_file)
        {
            cout<<"File cann't be opened";
        }

        data_file <<name<<"\t"<<phone_number<<"\n";
        data_file.close();

    }

    void display_entered_data()
    {
        cout << "\n\nName of the person:- "<<name;

        cout<< "\nPhone number of "<< name <<" :- "<<phone_number<<endl;
    }

    void read_file()
    {
        ifstream data_file("data.txt");
        string name_o;
        unsigned long long int phone_number_o;

        while(data_file>>name_o>>phone_number_o)
        {
            cout << name_o<< "\t" << phone_number_o<<"\n";
        }

        data_file.close();
    }

    void file_compare()
    {
        string name_c, n;
        string phone_number_c, p;
        
        int run;

        cout<<"What you would like to find"
        <<"\n1) Name from phone number"
        <<"\n2) Phone number from name"
        <<"\nEnter '1' or '2' "<<endl;

        cin>>run;

        //opening the file
        ifstream data_file("data.txt");

        switch (run)
        {
            case 1:
                cout<<"\n\nEnter the phone number: - ";
                cin >> phone_number_c;

                while(data_file>>n>>p)
                {
                    if(phone_number_c == p)
                    {
                        cout<<"\nName of the person is: "<<n;
                    }
                }

                break;

            case 2:
                cout<<"\n\nPlease entet the 1st alphabet of the name capital\nEnter the Name: - ";
                cin >> name_c;
                while(data_file>>n>>p)
                {
                    if(name_c == n)
                    {
                        cout<<"\nPhone number of the person is: "<<p;
                    }
                }

                break;

            default:
                cout<<"Wrong input exiting program";

        }
        

    }

};

int main(void)
{
    directory d[2];
    d[0].input();
    cout<<"\n\nData display from function";
    d[0].display_entered_data();


    d[1].input();
    cout<<"\n\nData display from function";
    d[1].display_entered_data();


    cout<<"\n\n\nData display from file"<<endl;
    d[1].read_file();

    d[1].file_compare();

    return 0;
}
