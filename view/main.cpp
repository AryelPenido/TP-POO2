#include<iostream>
#include <Turma.h>
#include "../controle/ControleAluno.hpp"
#include "../controle/ControleProfessor.h"
#include "../controle/ControleTurma.h"

int main(int argc, char const *argv[])
{

    ControleAluno *cc = new ControleAluno();
    cc->inserecontrole("Aryel","Jaoa","Michelle","13/12/1999","Rua rio grande 601, novo riacho,contagem,minas gerais,brasil");
    cc->inserecontrole("Maria","Jaoa2","Michelle2","21/12/2003","Rua rio grande 601, novo riacho,contagem,minas gerais,brasil2");
    cc->ListaAlunos();
    vector <Aluno> vv = cc->getListaAlunos(2);


    ControleProfessor *pp = new ControleProfessor();
    pp->insereControle("AAAAA","Florestal","Exatas",200);
    pp->insereControle("BBBBB","Contagem","humanas",90);
    pp->ListarProfessor();
    //Professor p = pp->getProfessor("AAAAA");
    /*Turma *t = new Turma(pp->getProfessor("AAAAA"),vv,12,"2019");
    vector<Aluno> vt = t->getAlunos();
    cout<<"\nlista de alunos\n";
    for(int i = 0; i<vt.size();i++){
        cout<<"Nome alunos: "<<vt[i].getNome()<<"\n";
    }*/
    ControleTurma *ct = new ControleTurma();
    ct->insere(pp->getProfessor("AAAAA"),vv,12,"2019");
    ct->Lancarnotas(12);
    cc->ListaAlunos();



 //Professor *p1 = new Professor("AAAAA","Florestal","Exatas",200);

    return 0;
}
