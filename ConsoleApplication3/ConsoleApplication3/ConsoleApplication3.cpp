#include "pch.h"
#include <iostream>
#include <list>
/*
Problema:
1.Sa se citeasca de la tastatura numarul de persoane, urmand sa se intruduca numele si varsta fiecarei persoane.
2. Sa se afiseze numele si  varstele persoanelor.
*/


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
    char tmp_nume[20], tmp_prenume[20];
    unsigned int tmp_varsta;
    int numar_pers = 0;
    std::list<Pers> lista_pers;
    //citim de la tastatura numarul de pers
    cout << "Introduceti un numar de persoane: "<< endl;
    cin >> numar_pers;
    cout << "Introduceti cu spatiu nume prenume varsta" << endl;
    for (int i = 1; i <= numar_pers; i++)
    {
        cin >> tmp_nume >> tmp_prenume >> tmp_varsta;
        lista_pers.push_back(Pers(tmp_varsta, tmp_nume, tmp_prenume));
    }

    for (auto& persoana : lista_pers)
    {
        cout << persoana.arata_nume() << "\t" << persoana.arata_vs() << endl;
    }
        
    Console::ReadKey();

    return 0;
}



