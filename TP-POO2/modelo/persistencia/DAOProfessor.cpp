//
// Created by aryels on 24/10/2019.
//

#include "DAOProfessor.h"
#include <vector>
#include <iostream>

DAOProfessor::DAOProfessor() {

}

void DAOProfessor::insere(string np, string endp, string ap, double salariop) {
    Professor *p = new Professor(np,endp,ap,salariop);
    pp.push_back(*p);
}

vector<Professor> DAOProfessor::getLista() {
    return pp;
}

