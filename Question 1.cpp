#include<iostream>
using namespace std;

int main() {
    string name;
    int age;
    string college;
    cout<<"Please enter your full name (Enter space in between)- \n";
    getline(cin,name);
    cout<<"Enter your age- \n";
    cin>>age;
    cin.ignore();
    cout<<"Enter your college name- \n";
    getline(cin,college);

    cout<<"Hello "<<name<<", I see you are "<<age<<" years old and currently studuing at"<<college<< "\n";

    return 0;

}
