//
// Created by aryels on 24/10/2019.
//

#ifndef TPC___CONTROLEPROFESSOR_H
#define TPC___CONTROLEPROFESSOR_H

#include <string>
#include <Professor.h>

using namespace std;

class ControleProfessor {


public:
    ControleProfessor();
    void insereControle(string np, string endp, string ap, double salariop);
    void ListarProfessor();
    Professor getProfessor(string nome);


};


#endif //TPC___CONTROLEPROFESSOR_H
