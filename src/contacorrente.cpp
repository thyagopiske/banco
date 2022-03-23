#include "contabancaria.h"
#include "contacorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente(int numero_conta, double taxaDeOperacao): ContaBancaria(numero_conta), taxaDeOperacao(taxaDeOperacao){};

void ContaCorrente::setTaxaDeOperacao(double nova_taxa){ taxaDeOperacao = nova_taxa; }

double ContaCorrente::getTaxaDeOperacao(){ return taxaDeOperacao; }

void ContaCorrente::sacar(double valor){
    if(valor > 0 && this->saldo >= (valor + taxaDeOperacao)){
        this->saldo -= valor + taxaDeOperacao;
    }else{
        std::cout << "Valor invalido de saque\n";
    }
}

void ContaCorrente::depositar(double valor){
    if(valor > 0 && (saldo + valor) >= (taxaDeOperacao)){
        this->saldo += valor;
        this->saldo -= taxaDeOperacao;
    }else{
        std::cout << "Valor invalido de deposito\n";
    }
}

void ContaCorrente::mostrarDados(){
    std::cout << std::endl;
    std::cout << "Tipo: Conta Corrente" << std::endl;
    std::cout << "Numero: " << numero_conta << std::endl;
    std::cout << "Saldo: R$" << saldo << std::endl;
    std::cout << "Taxa de Operacao: R$" << taxaDeOperacao << std::endl;
}
