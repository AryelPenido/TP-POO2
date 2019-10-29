//
// Created by aryels on 24/10/2019.
//

#include "ControleProfessor.h"
#include "../modelo/persistencia/DAOProfessor.h"
#include <iostream>
#include <vector>

DAOProfessor *Daop =  new DAOProfessor();

ControleProfessor::ControleProfessor() {

}

void ControleProfessor::insereControle(string np, string endp, string ap, double salariop) {
    Daop->insere(np,endp,ap,salariop);

}

void ControleProfessor::ListarProfessor() {

    vector<Professor*> listap = Daop->getLista();
    for(int i = 0; i < listap.size();i++){
        cout<<"##################################################################################\n";
        cout<<"nome Professor: "<<listap[i]->getnomeProf()<<" Area: "<<listap[i]->getarea() <<"\n";
        cout<<"Endereço: "<<listap[i]->getenderecoProf()<<"\n";
        cout<<"Salario/hora: "<<listap[i]->getsalariohora()<<"\n";
    }
}

Professor ControleProfessor::getProfessor(string nome) {
    cout<<"Professor escolhido";
    vector<Professor*> listap = Daop->getLista();
    for(int i = 0; i < listap.size();i++){
        if(listap[i]->getnomeProf()==nome){
            return reinterpret_cast<Professor &&>(listap[i]);
        }
    }
    cout<<"Professor não existe";

}

void ControleProfessor::alteraProf(string nome){
    int opt;
    string nomeP, end, area;
    double sal;
    vector <Professor*> listaprof = Daop->getLista();

    for(int i =0;i<listaprof.size()-1;i++){

        if(listaprof.at(i)->getnomeProf()==nome){
            cout<<"\nAluno encontrado! O que deseja alterar?\n";
            cout<<"\n1 para Nome do Aluno;\n2 para endereco;\n3 para area de atuacao;\n4 para salario/hora.\n";
            cin>>opt;
            switch (opt){
                case 1:
                    cout<<"\nNome do aluno: ";
                    cin>>nomeP;
                    listaprof.at(i) ->setnomeProf(nomeP);
                    break;
                case 2:
                    cout<<"\nEndereco: ";
                    cin>>end;
                    listaprof.at(i) ->setenderecoProf(end);
                    break;
                case 3:
                    cout<<"\nArea: ";
                    cin>>area;
                    listaprof.at(i) ->setareaProf(area);
                    break;
                case 4:
                    cout<<"\nSalario/hora: ";
                    cin>>sal;
                    listaprof.at(i) ->setsalarioProf(sal);
                    break;
                default:
                    cout<<"\nERROR: Opcao invalida!";
                    break;

            }

        }
    }



}