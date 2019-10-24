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

void Aluno::setNota(float n) {
    nota.push_back(n);
}