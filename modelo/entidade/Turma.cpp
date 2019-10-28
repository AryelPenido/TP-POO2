//
// Created by aryels on 24/10/2019.
//

#include "Turma.h"
#include <iostream>

using namespace std;

Turma::Turma(Professor prof,vector <Aluno*> listaAlunos,int cdg,string a) {
    professor.push_back(prof);
    alunos = listaAlunos;
    codigo = cdg;
    ano = a;


}

Turma::Turma(Turma const &tt) {
    professor = tt.professor;
    alunos = tt.alunos;
    codigo = tt.codigo;
    ano = tt.ano;
}


Professor Turma::getProfessor() {
    Professor p = professor[0];
    return  p;
}
vector <Aluno*> Turma::getAlunos() {
    return  alunos;
}

string Turma::getAno() {
    return  ano;
}

int Turma::getCodigo() {
    return codigo;
}
void Turma::setAlunos(vector<Aluno*> Alunos) {
    alunos = Alunos;
}



/*Turma  Turma::getTurmat() {
    return *this;
}*/