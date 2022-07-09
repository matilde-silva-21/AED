#include "parque.h"
#include <vector>

using namespace std;

ParqueEstacionamento::ParqueEstacionamento(unsigned lot, unsigned nMaxCli) {

    ParqueEstacionamento::numMaximoClientes = nMaxCli;
    lotacao = lot;
    vagas=lot;
}

unsigned ParqueEstacionamento::getNumLugares() const {
    return lotacao;
}

unsigned ParqueEstacionamento::getNumMaximoClientes() const {
    return numMaximoClientes;
}

int ParqueEstacionamento::posicaoCliente(const string &nome) const {
    for (int i = 0; i < clientes.size(); i++) {
        if (clientes[i].nome == nome) { return i; }
    }
    return -1;
}

bool ParqueEstacionamento::adicionaCliente(const string &nome) {
    if (numMaximoClientes <= clientes.size()) { return false; }
    else {
        InfoCartao client;
        client.nome = nome;
        client.presente = false;
        clientes.push_back(client);
        return true;
    }
}

bool ParqueEstacionamento::entrar(const string &nome) {
    if (vagas!=0) {
        for (int i = 0; i < clientes.size(); i++) {
            if (clientes[i].nome == nome) {
                if (!clientes[i].presente) {
                    clientes[i].presente = true;
                    vagas--;
                    return true;
                }
                else{return false;}
            }
        }
    }
    return false;
}

bool ParqueEstacionamento::retiraCliente(const string & nome){
    for (int i = 0; i < clientes.size(); i++){
        if (clientes[i].nome == nome){
            if (clientes[i].presente){return false;}
            else{
                clientes.erase(clientes.begin() + i);
                return true;
            }
        }
    }
    return false;
}

bool ParqueEstacionamento::sair(const string &nome) {
    for (int i = 0; i < clientes.size(); i++) {
        if (clientes[i].nome == nome) {
            if(clientes[i].presente){
                clientes[i].presente = false;
                vagas++;
                return true;
            }
        }

    }
    return false;
}

unsigned ParqueEstacionamento::getNumLugaresOcupados() const{
    return lotacao-vagas;
}
unsigned ParqueEstacionamento::getNumClientesAtuais() const{
    return clientes.size();
}


