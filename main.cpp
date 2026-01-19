#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

    int age = 0;
    double height; 

    cout << "Welcome to Park eligibility checher" << endl;

    cout << "What is your age? ";
    cin >> age; 

    cout << "What isyou height (in inches)? ";
    cin >> height;

    cout << endl;

    //condition determine if age is 12 or older
    if (age >= 12 && height >= 66)  {
        cout << "You are eligible to participate in the ride!" << endl; 
    }
    else if (age < 12 && height >= 66) {
        cout << "You must be at least 12 years old to participate in ride." << endl;
    }
    else if (age >= 12 && height < 66) {
        cout << "You must be at least 66 inches tall to participate in ride." << endl;
    }
    else {
        cout << "You do not meet the age and/or height requirements to participate in the ride." << endl;
    }
    
    return 0;
}

