/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath> 

using namespace std;
 
 
int main() {

    double x;
 
  
    cout << "Введіть значення x: ";
    cin >> x;
 
    double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
 
    cout << "Значення функції y = 3x^6 - 6x^2 - 7 при x = " << x << " дорівнює: " << y << endl;
 
    return 0;
}

