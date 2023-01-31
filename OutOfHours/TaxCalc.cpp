#include <iostream>
using namespace std;
int main() {
    
    
    double sales = 95000;
    double stateTax = 4;
    double countyTax = 2; 
    
    double stSales = (stateTax / 10) * sales;
    double ctSales = (countyTax / 10) * sales;
 
    double ttTax = ((stateTax / 10) + (countyTax / 10)) * sales;
    
    cout << "Total sales = $" << sales << endl
         << "Sales after State Tax Deduction = $" << stSales << endl
         << "Sales after County Tax Deduction = $" << ctSales << endl
         << "Sales after Total Tax Deduction = $" << ttTax;
}
