#include <iostream>
#include<array> 
using namespace std;


int main() {
    
    
    int array[] = {1, 2, 8, 9, 20, 25};
    
    int number = 90;
    int length = sizeof(array)/sizeof(array[0]);
    int start = 0;
    int end = sizeof(array)/sizeof(array[0]) -1 ;
    
    bool flag = false;
    

    
     while (start <= end)
     {
     
     int middle = (end + start) / 2;
            
             if (array[middle] == number)
             {
                cout << "Your number is: " <<array[middle];
                flag = true;
                break;
             }
             else if (array[middle] > number)
             {
                end = middle -1;
             }
             else if (array[middle] < number)
             {
                start = middle +1 ;
             }
     }
     
     if (!flag)
     {
         cout<<"Your number is not within the range of this array.";
     }
    }
