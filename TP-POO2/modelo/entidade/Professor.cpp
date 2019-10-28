//
// Created by aryels on 24/10/2019.
//

#include "Professor.h"
#include <iostream>
#include <string>

using namespace std;

Professor::Professor(string nprof, string endprof, string area, double salariohora) {
    nomeprof = nprof;
    enderecoprof = endprof;
    areap = area;
    salariohorap = salariohora;

}


string Professor::getnomeProf() {
    return nomeprof;
}
void Professor::setnomeProf(string n) {
    nomeprof = n;
}
string Professor::getarea() {
    return areap;
}
void Professor::setareaProf(string a) {
    areap = a;
}
string Professor::getenderecoProf() {
    return enderecoprof;
}
void Professor::setenderecoProf(string e) {
    enderecoprof = e;
}
double Professor::getsalariohora() {
    return salariohorap;
}
void Professor::setsalarioProf(double s) {
    salariohorap = s;
}


