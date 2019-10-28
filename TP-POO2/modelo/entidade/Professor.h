//
// Created by aryels on 24/10/2019.
//

#ifndef TPC___PROFESSOR_H
#define TPC___PROFESSOR_H

#include <iostream>
#include <string>

using namespace std;

class Professor {
private:
    string nomeprof;
    string enderecoprof;
    string areap;
    double salariohorap;

public:
    Professor(string nomeprof,string enderecoprof,string area, double salariohora);

    //Professor(Professor const &p);

    string getnomeProf();
    string getenderecoProf();
    string getarea();
    double getsalariohora();
    void setnomeProf(string n);
    void setenderecoProf(string e);
    void setareaProf(string a);
    void setsalarioProf(double s);
};


#endif //TPC___PROFESSOR_H
