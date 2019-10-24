#ifndef TPC___ALUNO_H
#define TPC___ALUNO_H

#include<iostream>
#include <vector>

using namespace std;

class Aluno
{
private:
  string nome;
  string nomePai;
  string nomeMae;
  string dataNasc;
  string endereco;
  int matricula;
  vector<float> nota;





public:
    Aluno(string n,string nomePai,string nomeMae,string dataNasc,string endereco,int matricula);
    string getNome();
    string getEndereco();
    int getMatricula();
    string getnomePai();
    string getnomeMae();
    vector<float> getNota();
    string setNome(string n);
    string setnomePai(string np);
    string setnomeMae(string nm);
    string setendereco(string ed);
    void setNota(float nota);

    //~Aluno();
};

#endif //TPC___ALUNO_H
