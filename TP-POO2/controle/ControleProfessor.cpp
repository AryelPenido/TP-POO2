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

    vector<Professor> listap = Daop->getLista();
    for(int i = 0; i < listap.size();i++){
        cout<<"##################################################################################\n";
        cout<<"nome Professor: "<<listap[i].getnomeProf()<<" Area: "<<listap[i].getarea() <<"\n";
        cout<<"Endereço: "<<listap[i].getenderecoProf()<<"\n";
        cout<<"Salario/hora: "<<listap[i].getsalariohora()<<"\n";
    }
}

Professor ControleProfessor::getProfessor(string nome) {
    cout<<"Professor escolhido";
    vector<Professor> listap = Daop->getLista();
    for(int i = 0; i < listap.size();i++){
        if(listap[i].getnomeProf()==nome){
            return listap[i];
        }
    }
    cout<<"Professor não existe";

}