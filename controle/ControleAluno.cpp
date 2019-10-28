//
// Created by aryels on 23/10/2019.
//

#include "ControleAluno.hpp"
//#include "../modelo/persistencia/DAOAluno.h"
#include <iostream>
#include <vector>
#include <vector>
using namespace std;
DAOAluno *Dao = new DAOAluno();

ControleAluno::ControleAluno() {

}



void ControleAluno::inserecontrole(string n, string nomePai, string nomeMae, string dataNasc, string endereco) {
   int matricula =  Dao->getsizeLista();
   matricula ++;
   Dao->insere(n,nomePai,nomeMae,dataNasc,endereco,matricula);

}

//essa função deve ser alterada para listar por turmas.
void ControleAluno::ListaAlunos(){
    cout<<"##################################################################################\n";
    cout<<"\nLista de Alunos\n";
    vector<Aluno*> lista = Dao->getLista();

    for(int i = 0; i< Dao->getsizeLista(); i++) {
       // cout<<"##################################################################################\n";
        cout << "nome : " << lista[i]->getNome() << " matricula: " << lista[i]->getMatricula() << "\n";
        cout<< "nome do Pai: "<<lista[i]->getnomePai()<<" nome da Mãe: "<< lista[i]->getnomeMae()<<"\n";
        cout<<"Endereço: "<<lista[i]->getEndereco()<<"\n";
        cout<<"notas: ";
        vector<float> notass;
        int tam_notas;
      //  tam_notas = lista[i].getNotasize();
      tam_notas = lista.at(i)->getNota().size() ;
       // cout<<"Antes do for";
       // cout<<tam_notas;
        for(int j = 0; j <tam_notas; j++){
         //   cout<<i;
          //  cout<<"dentro do for\n";
            notass.push_back(lista[i]->getNota().at(j));

            cout<<notass.at(j);
        }
        cout<<"\n##################################################################################\n";
      //  PercorreNotas(lista[i].getMatricula());
    }

}


vector<Aluno*> ControleAluno::getListaAlunos()  {
    vector<Aluno*> listatoda = Dao->getLista();
    vector<Aluno*>listaretorno;
    for(int i =0; i<listatoda.size();i++){
        listaretorno.push_back(listatoda[i]);
    }
    return listaretorno;

}
