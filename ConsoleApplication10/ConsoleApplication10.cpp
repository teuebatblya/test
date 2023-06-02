#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int number, i = 1, result = 1;
    cout << "Введите число";
    cin >> number;
    while (i <= number) {
        result *= i;
        i++;
    }
        cout << result;
    
}