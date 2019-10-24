//
// Created by aryels on 24/10/2019.
//

#ifndef TPC___DAOTURMA_H
#define TPC___DAOTURMA_H

#include <iostream>
#include <vector>
#include <Turma.h>

using namespace std;

class DAOTurma {
private:
    vector<Turma> listaTurmas;

public:
    DAOTurma();
    void insereTurmaDAO(Professor professor1,vector<Aluno> listaAlunos,int codigo,string ano);
    vector<Turma> getListaTurma();


};


#endif //TPC___DAOTURMA_H
