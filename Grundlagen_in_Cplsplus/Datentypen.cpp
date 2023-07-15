#include <iostream>
using namespace std;


class Datentypen {

    void ganzzahlen_Erklärung() {

        //Ganzzahlen mit Werten initaliseren
        short sval1(0);
        short sval2;
        int ival1 = { 0144 };
        int ival2(ival1);
        long lval1 = 0xff;
        long lval2 = lval1;
        long long llval{ 0 };
        std::cout << "Einen long long-Wert bitte ";
        std::cin >> llval;

        //Umlaute ausgeben
        std::locale::global(std::locale("German"));
        std::cout << "ÄÖÜäöüß" << std::endl;

        //Einlesen von der Tastatur 
        int eineGanzzahl = 0;
        std::cout << "Eine Ganzzahl eingeben:" << std::endl;

        std::cin >> eineGanzzahl;
        std::cout << "Ihre Eingabe lautet: " << eineGanzzahl << std::endl;

        //positive oder negative Ganzzahlen
        //unsigned int ival1 = { 0 };
        //int ival2 = { 0 };
        //signed int ival3 = { 0 };
    }

    void boolean_Erklärung() {
        //Boolescher Datentyp für die Wahrheit
        int ival1 = 1234;
        int ival2 = 0;
        int ival3 = -1;
        bool bval1 = ival1;
        bool bval2 = ival2;
        bool bval3 = ival1 == ival2;
        bool bval4 = ival1 != ival2;
        bool bval5 = ival3;
    }


    void gleitkommazahlen_Erklärung() {

        //Typen für Gleitkommazahlen
        float fval1(123.456);
        float fval2(fval1);
        float fval3 = .335;
        //double dval1 = 2.22e-15;
        long double ldval1 = 1.9e-3l;
        long double ldval2(0.0);
        std::cout << "Bitte eine Gleitkommazahl: ";
        std::cin >> ldval2;
        std::cout << "Ihre Eingabe lautet " << ldval2 << std::endl;

        //Ausgabe mit und ohne Exponential Schreibweise
        double dval1 = { 3.1415926535 };
        double dval2 = { 6.02334567e17 };

        std::cout << std::scientific;
        std::cout << dval1 << std::endl;
        std::cout << std::fixed;
        std::cout << dval2 << std::endl;

        //----------------------------------------------

    }

};