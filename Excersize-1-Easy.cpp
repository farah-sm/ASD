#include <iostream>
using namespace std;
        
        // Use Of Function C++
        int maxOfFour (int a, int b, int c, int d)
        {
            int temp, temp2;
            if ( a > b)
            {
                temp= a; 
            }
            else 
            {
                temp = b;
            }  
            if (c > d)
            {
                temp2 = c;
            }
            else 
            {
                temp2 = d;
            }
            if (temp > temp2)
            {
                cout << "The biggest number is: " << temp;
            }
            else
            {
                cout << "The biggest number is: " << temp2;
            }
        }

int main() {

    int num1, num2, num3, num4;
    cout << "Enter 4 numbers seperated by a space: ";
    cin >> num1 >> num2 >> num3 >> num4;
    
    maxOfFour(num1, num2, num3, num4);
 
}
