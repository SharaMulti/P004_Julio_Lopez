/*
 Amerike university
 Author: Julio López
 Practica #: 4
 Fecha: 28/02/25
 Description: This program shall display a prompt for the user to write 2 numbers, and then itll compare them
*/

#include <iostream>
using namespace std;
int main() {

    int N1;
    int N2;

    cout << "Type a number";
    cin >> N1;

    cout << "Type a second number";
    cin >> N2;

    if (N1 > N2)
    {
        cout << "Biggest number is " << N1;

    }
    else if (N1 < N2)
    {
        cout << "Biggest number is " << N2;
    }
    else if (N1 == N2)
    {
        cout << "But not the same number bro";
    }
}