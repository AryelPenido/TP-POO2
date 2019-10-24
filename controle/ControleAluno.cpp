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
    cout<<"Lista de Alunos\n";
    vector<Aluno> lista = Dao->getLista();
    for(int i = 0; i< lista.size(); i++) {
        cout<<"##################################################################################\n";
        cout << "nome : " << lista[i].getNome() << " matricula: " << lista[i].getMatricula() << "\n";
        cout<< "nome do Pai: "<<lista[i].getnomePai()<<" nome da Mãe: "<< lista[i].getnomeMae()<<"\n";
        cout<<"Endereço: "<<lista[i].getEndereco()<<"\n";
        cout<<"notas: ";
        /*vector<float> notass = lista[i].getNota().size();
        for(int j = 0; j <notass.size(); j++){
            cout<<notass[i];
        }*/
    }

}

vector<Aluno> ControleAluno::getListaAlunos(int tamanho)  {
   vector<Aluno> listatoda = Dao->getLista();
   vector<Aluno>listaretorno;
   for(int i =0; i<tamanho;i++){
       listaretorno.push_back(listatoda[i]);
   }
   return listaretorno;

}

//falta função de alterar, fazer turmas primeiro
