#include<iostream>
#include <Turma.h>
#include "../controle/ControleAluno.hpp"
#include "../controle/ControleProfessor.h"
#include "../controle/ControleTurma.h"

int main(int argc, char const *argv[])
{
    ControleAluno *cc = new ControleAluno();
    ControleProfessor *pp = new ControleProfessor();
    ControleTurma *ct = new ControleTurma();
    vector<Aluno> vv;
    int codigoTurma;

    MENU:
    cout<<"SGA - Sistema de Gestao Academica\n";
    cout<<"Escolha uma das opcoes abaixo:\n";
    cout<<"1 - Cadastrar Aluno\n2 - Cadastrar Professor\n3 - Cadastrar Turma\n4 - Lancar Notas\n";
    cout<<"5 - Gerar Boletim\n6 - Listar/Alterar Alunos\n7 - Listar/Alterar Professores\nOPCAO: ";
    int opcao;
    cin >>opcao;
    
    if (opcao == 1) {
        cc->inserecontrole("Aryel", "Jaoa", "Michelle", "13/12/1999",
                           "Rua rio grande 601, novo riacho,contagem,minas gerais,brasil");
        cc->inserecontrole("Maria", "Jaoa2", "Michelle2", "21/12/2003",
                           "Rua rio grande 601, novo riacho,contagem,minas gerais,brasil2");
        cc->ListaAlunos();
        vv = cc->getListaAlunos(2);
        goto MENU;
    }

    if (opcao == 2) {
        pp->insereControle("AAAAA", "Florestal", "Exatas", 200);
        pp->insereControle("BBBBB", "Contagem", "humanas", 90);
        pp->ListarProfessor();
        //Professor p = pp->getProfessor("AAAAA");
        /*Turma *t = new Turma(pp->getProfessor("AAAAA"),vv,12,"2019");
        vector<Aluno> vt = t->getAlunos();
        cout<<"\nlista de alunos\n";
        for(int i = 0; i<vt.size();i++){
            cout<<"Nome alunos: "<<vt[i].getNome()<<"\n";
        }*/
        goto MENU;
    }

    if (opcao == 3) {

        cout<<"\nDigite o codigo da turma:\n";
        cin>>codigoTurma;
        ct->insere(pp->getProfessor("AAAAA"), vv, codigoTurma, "2019");
        //ct->Lancarnotas(codigoTurma);
        cc->ListaAlunos();
        goto MENU;
    }

    if (opcao == 4) {
        cout<<"\nDigite o codigo da turma:\n";
        cin>>codigoTurma;
        ct->Lancarnotas(codigoTurma);
    }

    if (opcao == 5) {
        cout<<"\nDigite o codigo da turma:\n";
        cin>>codigoTurma;
    }

    if (opcao == 6) {

    }

    if (opcao == 7) {

    }

 //Professor *p1 = new Professor("AAAAA","Florestal","Exatas",200);

    return 0;
}
