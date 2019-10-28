//
// Created by aryels on 24/10/2019.
//

#include "DAOTurma.h"
#include "DAOAluno.h"
#include <iostream>
#include <vector>

using namespace std;
DAOAluno *DAOA = new DAOAluno();

DAOTurma::DAOTurma() {

}

void DAOTurma::insereTurmaDAO(Professor professor1, vector<Aluno*> listaAlunos, int codigo, string ano) {
    Turma  *t = new Turma(professor1,listaAlunos,codigo,ano);
    //listaTurmas.push_back();
    listaTurmas.push_back(*t);
}

vector<Turma> DAOTurma::getListaTurma() {
    return listaTurmas;
}

/*void DAOTurma::lancaNotasDao(Turma *tt) {
    //cout<<"\nDaoTurma\n";
    float nota;
    int mat,opd,opf;
    Aluno *auxaluno;
    vector<float> aux;
   // int fim = 1;
    vector <Aluno> alunosdaTurma = tt->getAlunos();
   while(1){
       cout<<"\nEntre com a matricula do aluno: ";
       cin>>mat;
       while(1){
           for(int i = 0; i < alunosdaTurma.size(); i++){
               if(alunosdaTurma[i].getMatricula() == mat){
                   cout<<"Aluno encontrado\n";
                   cout<<"entre com nota do aluno "<<alunosdaTurma[i].getMatricula()<<"\n";
                   //*auxaluno = alunosdaTurma[i];
                   cin>>nota;
                   //aux.push_back(nota);
                    alunosdaTurma.at(i).setNotaAluno(nota);
                   //DAOA->setNotasDAO(alunosdaTurma[i].getMatricula(),nota);
               }
           }
           cout<< "\n1. lançar mais notas para esse aluno? 2.sair: ";
           cin>>opd;
           if(opd !=1 )
           {
               break;
           }
        }
       //auxaluno->setNotaAluno(aux);


       cout<<"\n1. lançar nota para outro aluno 2.voltar: ";
       cin>>opf;
       if(opf!=1){
           break;
       }


    }*/
