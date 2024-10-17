/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
     using namespace std;
     int main() {
        
        double V, U, T1, T2;
 
        cout << "Введіть швидкість човна у стоячій воді (V км/год): ";
        cin >> V;
         cout << "Введіть швидкість течії річки (U км/год, U < V): ";
        cin >> U;
         if (U >= V) {
            cout << "Помилка: швидкість течії повинна бути меншою за швидкість човна в стоячій воді" << endl;
            return 1;
        }
         cout << "Введіть час руху по озеру (T1 год): ";
        cin >> T1;
         cout << "Введіть час руху по річці проти течії (T2 год): ";
        cin >> T2;
         double S_lake = V * T1; 
        double S_river = (V - U) * T2; 
        double S_total = S_lake + S_river; 
 
        cout << "Загальний шлях, пройдений човном: " << S_total << " км" << endl;
         return 0;
    }
