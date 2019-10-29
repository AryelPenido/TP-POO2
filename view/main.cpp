#include<iostream>
#include "../modelo/entidade/Turma.hpp"
#include "../controle/ControleAluno.hpp"
#include "../controle/ControleProfessor.hpp"
#include "../controle/ControleTurma.hpp"

int main(int argc, char const *argv[])
{
    string nomeprof;
    int codt;
    ControleAluno *cc = new ControleAluno();
    cc->inserecontrole("Aryel","Jaoa","Michelle","13/12/1999","Rua rio grande 601, novo riacho,contagem,minas gerais,brasil");
    cc->inserecontrole("Maria","Jaoa2","Michelle2","21/12/2003","Rua rio grande 601, novo riacho,contagem,minas gerais,brasil2");
    cc->inserecontrole("joaozinho","Jaoa3","Michelle3","21/12/2011","Rua rio grande 601, novo riacho,contagem,minas gerais,brasil2");
    //cc->ListaAlunos();
    //cc->ListaAlunos();
    vector <Aluno*> vv = cc->getListaAlunos();


    ControleProfessor *pp = new ControleProfessor();
    pp->insereControle("AAAAA","Florestal","Exatas",200);
    pp->insereControle("BBBBB","Contagem","humanas",90);
    ControleTurma *ct = new ControleTurma();
    cout<<"nova turma, entre com o nome do professor";
    cin >> nomeprof;
    cout<<"entre com o codigo da turma: ";
    cin>> codt;
    Professor prof = pp->getProfessor(nomeprof);
    ct->insere(prof,vv,codt,"2019");
    ct->Lancarnotas();
   // cc->ListaAlunos();
   // pp->ListarProfessor();
   // ct->Lancarnotas();
    //cc->ListaAlunos();
    ct->Boletim();




    return 0;
}
