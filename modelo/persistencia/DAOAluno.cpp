//
// Created by aryels on 23/10/2019.
//

#include "DAOAluno.h"
#include <iostream>
#include <vector>

using namespace std;

DAOAluno::DAOAluno() {

}

void DAOAluno::insere(string n,string nomePai,string nomeMae,string dataNasc,string endereco,int matricula){
    Aluno *a = new Aluno(n,nomePai,nomeMae,dataNasc,endereco,matricula);
    aa.push_back(*a);

}

vector<Aluno> DAOAluno::getLista() {
    return aa;
}

int DAOAluno::getsizeLista() {
    return  aa.size();
}

