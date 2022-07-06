#include<cmath>
#include<iostream>
#include<string>

using namespace std;

int main() {
    char name[] = "Prasanna";
    int favnum = 36;
    float height = 5.5;
    double weight = 70.1234562345;
    float temp = -2.3;
    string days_of_week[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", 
        "Friday", "Saturday", "Sunday"
    };

    double height_in_meters = height * 0.3048;
    long double bmi = weight / pow(height_in_meters, 2);

    cout << "Hi, it is " << temp << "deg C outside! ";
    cout << "And today is " << days_of_week[1] << "." << endl;
	cout << "My name is " << name << "." << endl;
	cout << "My favourite number is " << favnum << "." << endl;
	cout << "My height is " << height << "ft ";
	cout << "which is " << height_in_meters << " in meters." << endl;
    cout << "My weight is " << weight << " kg." << endl;
    cout << "So, my BMI is " << bmi << " kg/m2." << endl;
    
    return 0;
}
