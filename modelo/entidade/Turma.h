//
// Created by aryels on 24/10/2019.
//

#ifndef TPC___TURMA_H
#define TPC___TURMA_H


#include "Professor.h"
#include "Aluno.hpp"
#include <vector>
//#include "ControleAluno.hpp"

using namespace std;

class Turma {
private:

    vector<Professor> professor;
    //Professor professor;
    std::vector <Aluno> alunos;
    int codigo;
    string ano;

public:
    Turma(Professor professor1,vector<Aluno> listaAlunos,int codigo,string ano);
    Turma(const Turma &tt);
    Professor getProfessor();
    vector <Aluno> getAlunos();
    int getCodigo();
    string getAno();
    void setProfessor(Professor professor2);
    void setAlunos(vector<Aluno> Alunos);
    void setCodigo(int cdg);
    void setAno(string a);
    Turma getTurmat();

};


#endif //TPC___TURMA_H
