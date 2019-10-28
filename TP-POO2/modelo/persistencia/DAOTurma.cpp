//
// Created by aryels on 24/10/2019.
//

#include "DAOTurma.h"
#include <iostream>
#include <vector>

using namespace std;

DAOTurma::DAOTurma() {

}

void DAOTurma::insereTurmaDAO(Professor professor1, vector<Aluno> listaAlunos, int codigo, string ano) {
    Turma  *t = new Turma(professor1,listaAlunos,codigo,ano);
    //listaTurmas.push_back();
    listaTurmas.push_back(*t);
}

vector<Turma> DAOTurma::getListaTurma() {
    return listaTurmas;
}