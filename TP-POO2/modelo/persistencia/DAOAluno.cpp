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
    aa.push_back(a);

}

vector<Aluno*> DAOAluno::getLista() {
    return aa;
}


int DAOAluno::getsizeLista() {
    return aa.size();
}

/*void DAOAluno::setNotasDAO(int matricula, float nota) {
    cout<<"DAOALUNO\n";
    for(int  i = -1; i<aa.size();i++){
        cout<<"Dentro do for";
        if(aa[i].getMatricula() == matricula){
            aa[i].setNotaAluno(nota);
        }
    }
}*/


vector <float> DAOAluno::getNotas(int matricula) {
    cout<<"Aqui\n";
    vector <float> notasdao;
    for(int i = 0; i < aa.size() ; i++){
        if(aa[i]->getMatricula() == matricula){
            cout<<"achou aluno\n";
            notasdao = aa[i]->getNota();
           // cout<<"notasDAO: "<<notasdao[i];
        }
    }
    return notasdao;
}
