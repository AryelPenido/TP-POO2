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
    cout<<"\nTurma criada\n";
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
            Turma turma = *new Turma(listaturmas[i]);
            cout << "Turma escolhida foi: " << turma.getCodigo() << "\n";
            //Daot->lancaNotasDao(turma);
            while (true) {


                vector<Aluno *> alunosdaTurma = turma.getAlunos();
                cout << "\nEntre com a matricula do aluno: ";
                cin >> mat;
                cout << "matricula: " << mat << "\n";
                cout << "tamanho da lista" << alunosdaTurma.size();
                while (true) {
                    for (int j = 0; j < alunosdaTurma.size(); j++) {

                        if (alunosdaTurma.at(j)->getMatricula() == mat) {
                            posicao = j;
                            cout << "\nAluno encontrado, entre com a nota:\n";
                            cin >> nota;
                            cin.ignore();
                            auxnota.push_back(nota);
                            break;
                        }

                    }
                    cout << "\n0. mais uma nota para esse aluno 01.voltar\n";
                    cin >> opd;
                    if (opd != 0) {
                        break;
                    }
                }
                turma.getAlunos().at(posicao)->setNotaAluno(auxnota);
                auxnota.clear();
                cout<<"\n0. lançar notas para outro aluno 01.voltar\n";
                cin>>opf;
                if(opf!= 0){
                    break;
                }
            }

        }

        else if(i == listaturmas.size()-1){
            cout<<"Turma não existe\n";
        }

    }

}

void ControleTurma::Boletim() {
    int turma;
    cout<<"\ncodigo da turma que deseja exibir boletins: ";
    cin >> turma;


    vector <Turma> listaturmas = Daot->getListaTurma();
    //achando a turma escolhida
    for(int i = 0; i<listaturmas.size(); i++){
        if(listaturmas[i].getCodigo() == turma) {
            Turma turma = *new Turma(listaturmas[i]);
            // cout << "Turma escolhida foi: " << turma.getCodigo() << "\n";

            for(int i = 0; i < turma.getAlunos().size(); i++){
                float media = 0;
                int qtdNotas = turma.getAlunos().at(i)->getNota().size();
                for(int j = 0; j< qtdNotas; j++){
                    media =media + turma.getAlunos().at(i)->getNota().at(j);
                }
                media = media/qtdNotas;
                cout<<"Nome: "<<turma.getAlunos().at(i)->getNome()<<" Matricula: " << turma.getAlunos().at(i)->getMatricula()<<"\n";
                cout<<"Media: "<<media;
                if(media >= 60){
                    cout<<" APROVADO\n";
                }
                else{
                    cout<<" REPROVADO\n";
                }
            }


        }
    }


}

void ControleTurma::alterarAluno (){
    int turma,mat,opt;
    string nome, end, nomeP, nomeM;
    cout<<"\nCodigo da turma que deseja fazer alteracao: ";
    cin >> turma;

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
                    cout<<"\nAluno encontrado! O que deseja alterar?\n";
                    cout<<"\n1 para Nome do Aluno;\n2 para endereco;\n3 para nome do pai;\n4 para nome do pai.\n";
                    cin>>opt;
                    switch (opt){
                        case 1:
                            cout<<"\nNome do aluno: ";
                            cin>>nome;
                            alunosdaTurma.at(i) -> setNome(nome);
                            break;
                        case 2:
                            cout<<"\nEndereco: ";
                            cin>>end;
                            alunosdaTurma.at(i) ->setendereco(end);
                            break;
                        case 3:
                            cout<<"\nNome do Pai: ";
                            cin>>nomeP;
                            alunosdaTurma.at(i) ->setnomePai(nomeP);
                            break;
                        case 4:
                            cout<<"\nNome da Mae: ";
                            cin>>nomeM;
                            alunosdaTurma.at(i) ->setnomeMae(nomeM);
                            break;
                        default:
                            cout<<"\nERROR: Opcao invalida!";
                            break;

                    }

                }
            }

        }

        else if(i == listaturmas.size()-1){
            cout<<"Turma não existe\n";
        }

    }
}
  //  cout<<"Turma não existe";







