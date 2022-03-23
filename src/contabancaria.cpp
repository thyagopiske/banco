#include "contabancaria.h"
#include <iostream>
#include <string>
#include <memory>

ContaBancaria::ContaBancaria(int a): numero_conta(a){};

void ContaBancaria::sacar(double valor_saque){
    this->saldo = saldo - valor_saque;
}

void ContaBancaria::depositar(double valor_deposito){
    if(valor_deposito > 0){
        this->saldo += valor_deposito;
    }else{
        std::cout << "Valor invalido de deposito\n";
    }
}

void ContaBancaria::transferir(double valor, std::shared_ptr<ContaBancaria>& conta_destino){
    sacar(valor);
    conta_destino->depositar(valor);
}

int ContaBancaria::getNumeroConta() { return numero_conta; }

void ContaBancaria::mostrarDados() {}
