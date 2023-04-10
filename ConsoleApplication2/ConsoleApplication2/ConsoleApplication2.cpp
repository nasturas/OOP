#include "pch.h"
#include <iostream>

using namespace System; //pentru Visual
using namespace std;

struct Persoana
{
    unsigned vs;
    char nume[20];
    char prenume[20];
};

// Clasa este pers si este o structura care defineste datele si comportamentul obiectelor
class Pers
{
private:
    unsigned vs;
    char nume[20];
    char prenume[20];
public:
    //vom folosi 2 metode cu aceleasi nume cu cel al clasei, anume Pers
    // o metoda cu parametrii si una fara
    Pers(unsigned vs1, char* num1, char* prenum1)
    {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    //returneaza valoarea atributului vs al obiectului curent
    unsigned arata_vs() 
    {
        return this->vs;
    }
    char* arata_nume() { return this->nume; }

};

int main()
{
    unsigned int a1 = 0;
    a1 = 17;
    Persoana p1;
    p1.vs = 20;
    strcpy_s(p1.nume, 4, "Ion");
    strcpy_s(p1.prenume, 7, "George");
    Console::WriteLine("Hello C++.NET");
    cout << p1.nume << "\t" << p1.prenume << "\t" << p1.vs << endl;
    cout << "Hello C++.NET(cout)" << endl;
    Console::WriteLine("Utlilizand clasa Pers");
    Pers p2(20, "Ionescu", "George");
    Pers* p3 = new Pers(21, "Ionesci", "Adina");
    cout << p2.arata_nume() << "\t" << p2.arata_vs() << endl;
    cout << p3->arata_nume() << "\t" << p3->arata_vs() << endl;

    Console::ReadKey();

    return 0;
}


