
#include <iostream>      //підключення стандартної бібліотеки
using namespace std;    //використання пространства імен

int main()              //заголовок основної функції
{                       //початок виконуваної частини
int a;
   cout << "Enter value a : ";    //введення даних
   cin >> a;
   int res = a - 5;              //обчислення результату
   cout << "a-5: "<< res;        //виведення результату
    return 0;                    //повернення успішного завершення програми
}