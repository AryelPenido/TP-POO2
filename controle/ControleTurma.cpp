//
// Created by aryels on 24/10/2019.
//

#include "ControleTurma.h"
#include <iostream>
#include <vector>
using namespace std;


DAOTurma *Daot = new DAOTurma();
ControleTurma::ControleTurma(){

}

void ControleTurma::insere(Professor professor1, vector<Aluno*> listaAlunos, int codigo, string ano) {
    //falta persistencia, codigo não pode ser o mesmo, fazer função pra verificar;
    Daot->insereTurmaDAO(professor1,listaAlunos,codigo,ano);
}


void ControleTurma::Lancarnotas() {
    int turma,mat,posicao,nota,opd,opf;
    vector<float> auxnota;
    cout<<"\ncodigo da turma que deseja lançar notas: ";
    cin >> turma;
   // float nota;

    vector <Turma> listaturmas = Daot->getListaTurma();
    //achando a turma escolhida
    for(int i = 0; i<listaturmas.size(); i++){
        if(listaturmas[i].getCodigo() == turma) {
            Turma  turma = *new Turma(listaturmas[i]);
            cout<<"Turma escolhida foi: "<<turma.getCodigo()<<"\n";
            //Daot->lancaNotasDao(turma);

                vector <Aluno*> alunosdaTurma = turma.getAlunos();
                cout<<"\nEntre com a matricula do aluno: ";
                cin>>mat;
                for(int j =0;j<alunosdaTurma.size()-1;j++){

                    if(alunosdaTurma.at(i)->getMatricula() == mat){
                        posicao = j;
                        cout<<"\nAluno encontrado, entre com a nota:\n";
                        while(1){
                        cin>>nota;
                        cin.ignore();
                        auxnota.push_back(nota);
                        cout<<"\n1. mais uma nota para esse aluno 2.voltar\n";
                        cin>>opd;
                        if(opd ==2){
                            break;
                        }
                    }

                }
            }
                turma.getAlunos().at(i)->setNotaAluno(auxnota);
                auxnota.clear();
        }

        else if(i == listaturmas.size()-1){
            cout<<"Turma não existe\n";
        }

}

    }
  //  cout<<"Turma não existe";







