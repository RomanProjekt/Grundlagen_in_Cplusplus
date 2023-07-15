#include <iostream>
using namespace std;

class EingabeUndAusgabe {

    void fun() {
        //Compilieren von Code
        //Quelldateien (.cpp, .h) -> Compiler -> Objectdatei(en) -> Linker <- Bibliothek(en)
        //                                                             -> ausführbare Datei

        //Einfache Ausgabe von Hello World!
        //Seite 38
        std::cout << "Hello World!\n";

        //Seite 41
        //system("Pause");

        //Ausgabe auf dem Bildschirm
        std::cout << "Standardausgabe" << std::endl;
        std::cerr << "Standardfehlerausgabe - 1" << std::endl;
        std::clog << "Standardfehlerausgabe - 2" << std::endl;

        //Zeilenende mit endl und \n 
        std::cout << " Mit Manipulation" << std::endl;
        std::cout << "Als Zeichenliteral " << '\n';
        std::cout << "Als Stringliteral " << "\n";
        //oder
        std::cout << "Als Stringliteral \n";
    }

};