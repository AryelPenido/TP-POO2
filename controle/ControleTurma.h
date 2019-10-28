//
// Created by aryels on 24/10/2019.
//

#ifndef TPC___CONTROLETURMA_H
#define TPC___CONTROLETURMA_H

#include <iostream>
#include <vector>
#include "../modelo/persistencia/DAOTurma.h"

class ControleTurma {
//DAOTurma *Daot = new DAOTurma();

public:
    ControleTurma();
    void insere(Professor professor1,vector<Aluno*> listaAlunos,int codigo,string ano);
    void Lancarnotas();
};


#endif //TPC___CONTROLETURMA_H
