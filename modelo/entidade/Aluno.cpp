#include<iostream>
#include<string>
#include<stdlib.h>
#include"Aluno.hpp"


using namespace std;

Aluno::Aluno(string n,string nPai,string nMae,string dNasc,string end,int m){
     nome = n;
     nomePai = nPai;
     nomeMae = nMae;
     dataNasc = dNasc;
     endereco = end;
     matricula = m;
}

string Aluno::getNome(){
    return nome;
}
int Aluno::getMatricula(){
    return matricula;
}
string Aluno::getnomePai(){
    return nomePai;
}
string Aluno::getnomeMae(){
    return nomeMae;
}
string Aluno::getEndereco() {
    return  endereco;
}
vector<float> Aluno::getNota() {
    return nota;
}

int Aluno::getNotasize(){
    return nota.size();
}
string Aluno::setNome(string n){
    nome = n;
}
string Aluno::setnomePai(string np){
    nomePai = np;
}
string Aluno::setnomeMae(string nm){
    nomeMae = nm;
}
string Aluno::setendereco(string ed){
    endereco = ed;
}
void Aluno::setNotaAluno(vector <float> n) {
    cout<<"SETNOTAALUNO\n";
    cout<<"Matricula na qual estou lançando nota: "<<matricula<<"\n";
    //nota.push_back(n);
    nota = n;
    cout<<nota.size();
   /* cout<<"notas lançadas: ";
    for (int i =0; i < nota.size();i++){
        cout<<nota[i]<<" ";
    }*/


}