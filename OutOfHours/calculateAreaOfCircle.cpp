#include <iostream>
#include <cmath>

using namespace std;
int main() {
    
    // Prompt user for input
    cout << "Enter a your radius: ";
    // Declare a variable type double
    double radius;
    // initialise the value of the variable with its value
    const double pi = 3.14;
    // Initialise the input of the user into our variable radius
    cin >> radius;
    // declare the variable area and calculate with the relevant equation
    double area = pi * pow(radius, 2);
    // Print area to console
    cout << area;
   
}
