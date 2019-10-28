//
// Created by aryels on 23/10/2019.
//

#ifndef TPC___DAOALUNO_H
#define TPC___DAOALUNO_H

#include <iostream>
#include <vector>
#include <Aluno.hpp>

using namespace std;
class DAOAluno {

 vector<Aluno> aa;


public:
    DAOAluno();
    void insere(string n,string nomePai,string nomeMae,string dataNasc,string endereco,int matricula);
    vector<Aluno> getLista();
    int getsizeLista();




};


#endif //TPC___DAOALUNO_H
