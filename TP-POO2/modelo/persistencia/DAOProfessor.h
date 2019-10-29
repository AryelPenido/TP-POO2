//
// Created by aryels on 24/10/2019.
//

#ifndef TPC___DAOPROFESSOR_H
#define TPC___DAOPROFESSOR_H

#include <iostream>
#include <vector>
#include <Professor.h>
//#include ""
class DAOProfessor {

    vector<Professor*> pp;

public:
    DAOProfessor();
    void insere(string nomeprof,string enderecoprof,string area, double salariohora);

    vector<Professor*> getLista();
};



#endif //TPC___DAOPROFESSOR_H
