// Grundlagen_in_Cplsplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <cstdlib>
#include <locale>
#include <string>
#include "Kreis.cpp"
using namespace std;

int summe(int a, int b);

int main()
{
    std::cout << "Hello World!\n";

    //Datentypen in C++
    int a = 2;
    int b = 3;

    //Funktion in C++
    std::cout << summe(a, b);

    string s = "Bock auf eine Gwint? \n";
    s += " Auf jeden Fall \n";

    s.insert(23, "Das ist der eingefügte String!\n");

    cout << s;
    cout << "Die Länge des String ist: " << s.length() << std::endl;


    std::cout << "Die Berechnung der Fläche: \n";
    Kreis kreis1;
    kreis1.radius = 50;
    kreis1.flaeche();
}

int summe(int a, int b) {
    return a + b;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
