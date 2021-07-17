#include <iostream>
using namespace std;

int main()
{

    std ::string name;
    std ::string bldgrp;
    std ::string gender;
    std ::string eye;
    std ::string sym1;
    std ::string sym2;
    std ::string sym3;
    int age, weight, height, bmi;
    cout << " Welcome to My Personal Doctor, Please Enter the Details Below : " << endl;
    cout << " Please Enter your Name : ";
    cin >> name;
    cout << " Hello, " << name << " Please enter your personal details below : " << endl;
    cout << " Please Enter your age : ";
    cin >> age;
    cout << " Please Enter your Blood Group : ";
    cin >> bldgrp;
    cout << " Please Enter your Gender : ";
    cin >> gender;
    cout << " Please Enter your Weight ( in pounds ) : ";
    cin >> weight;
    cout << " Please Enter your Height ( in cm ) : ";
    cin >> height;
    cout << " Please Enter your BMI : ";
    cin >> bmi;
    // cout << " Please Enter your Eyesight ( L/R ) : ";
    // cin >> eye;
    cout << " Please Enter symptom 1 :\n ";
    std::cin >> sym1;
    cout << " Please Enter symptom 2 :\n ";
    cin >> sym2;
    cout << " Please Enter symptom 3 :\n ";
    cin >> sym3;

    cout << "------------------------------" << endl;

    cout << " Your Personal Details are as follows : " << endl;

    cout << " Name : " << name << endl;
    cout << " Age : " << age << endl;
    cout << " Blood Group : " << bldgrp << endl;
    cout << " Gender : " << gender << endl;
    cout << " Weight : " << weight << "lbs" << endl;
    cout << " Height : " << height << "cms" << endl;
    cout << " BMI : " << bmi << endl;
    // cout << " Eyesight : " << eye << endl;
    cout << " Symptoms : " << sym1 << ", " << sym2 << ", " << sym3 << endl;

    return 0;
}
