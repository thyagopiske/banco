#include "contabancaria.h"
#include "contacorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente(int numero_conta, double saldo):ContaBancaria(numero_conta, saldo){};

bool ContaCorrente::sacar(double valor){
    //TEMP
    //std::cout << "Sacou de CC\n";
    if(valor > 0 && this->saldo >= (valor + taxaDeOperacao)){
        this->saldo -= valor + taxaDeOperacao;
        return true;
    }else{
        return false;
    }
}

bool ContaCorrente::depositar(double valor){
    if(valor > 0 && (saldo + valor) >= (taxaDeOperacao)){
        this->saldo += valor;
        this->saldo -= taxaDeOperacao;
        return true;
    }else{
        return false;
    }
}

void ContaCorrente::mostrarDados(){
    std::cout << std::endl;
    std::cout << "Tipo: Conta Corrente" << std::endl;
    std::cout << "Numero: " << numero_conta << std::endl;
    std::cout << "Saldo: R$" << saldo << std::endl;
}
