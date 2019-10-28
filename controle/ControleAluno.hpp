//
// Created by aryels on 23/10/2019.
//

#ifndef TPC___CONTROLEPRODUTO_HPP
#define TPC___CONTROLEPRODUTO_HPP

#endif //TPC___CONTROLEPRODUTO_HPP


#include <iostream>
#include "../modelo/persistencia/DAOAluno.h"

class ControleAluno{




public:
    ControleAluno();
    void inserecontrole(string n,string nomePai,string nomeMae,string dataNasc,string endereco);
    void ListaAlunos();
    vector<Aluno*>getListaAlunos();
    void setNotasControleAluno();
    void PercorreNotas(int mat);

};
