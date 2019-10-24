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

void ControleTurma::insere(Professor professor1, vector<Aluno> listaAlunos, int codigo, string ano) {
    //falta persistencia, codigo não pode ser o mesmo, fazer função pra verificar;
    Daot->insereTurmaDAO(professor1,listaAlunos,codigo,ano);
}


void ControleTurma::Lancarnotas(int codigo) {
        float nota;
        Turma *turma;
        vector <Turma> listaturmas = Daot->getListaTurma();
        //achando a turma escolhida
        for(int i = 0; i<listaturmas.size(); i++){
            if(listaturmas[i].getCodigo() == codigo) {
                turma = new Turma(listaturmas[i]);
                break;
            }
        }
        vector <Aluno> alunosdaTurma = turma->getAlunos();
        //lançando notas nessa turma para todos os alunos;
                for(int i = 0; i<alunosdaTurma.size();i++){
                    cout<<"entre com a nota do aluno "<<alunosdaTurma[i].getMatricula();
                    cin>>nota;
                    alunosdaTurma[i].setNota(nota);
                }

}



