
#include <iostream>
using namespace std;

int main() {
    int array[] = {11, 99, 3, 297, 29};
    

    int len = sizeof(array)/sizeof(array[0]);
    cout << "Unsorted Array\n";
    for (int a = 0; a < len; a++)
    {
        
        cout <<array[a]<< " ";
    }
    
    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < len; i++)
        {
            if (array[i] > array[i +1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array [i+1] = temp;
                
            }
            else
            {
                
            }
        }
    
    }
    
    cout << "\nSorted Array\n";
    
    for (int a = 0; a < len; a++)
    {
        
        cout <<" "<< array[a]<< " ";
    }
    
    return 0;
}
