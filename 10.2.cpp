#include <iostream>



int main ()
{
    using namespace std;

    const int cookie(230);
    int age, height, weight;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height then weight: ";
    cin >> height >> weight;
    cout << "Enter your gender M of F: ";
    cin >> gender;

    double BMR;

    switch (gender)
    {
        case 'f':
        case 'F':
            BMR = 655 + (4.3 * weight)+(4.7 * height) - (4.7 * age);
            break;
        case 'm':
        case 'M':
            BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
            break;
        default:
            cout << "Invalid input";
            break;
    }

    cout << "You can eat " << BMR / cookie << " Cookies";

}