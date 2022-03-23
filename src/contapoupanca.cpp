#include "contabancaria.h"
#include "contapoupanca.h"
#include "imprimivel.h"
#include <iostream>

ContaPoupanca::ContaPoupanca(int numero_conta, double limite):ContaBancaria(numero_conta), limite(limite){};

double ContaPoupanca::getLimite() { return limite; }

void ContaPoupanca::setLimite(double novo_limite){ limite = novo_limite; }

void ContaPoupanca::sacar(double valor){
    if(valor > 0){
        if(valor <= this->saldo + limite){
            this->saldo -= valor;
        }else{
            std::cout << "Valor de saque acima do limite\n";
        }
    }
}

void ContaPoupanca::mostrarDados(){
    std::cout << std::endl;
    std::cout << "Tipo: Conta Poupanca" << std::endl;
    std::cout << "Numero: " << numero_conta << std::endl;
    std::cout << "Saldo: R$" << saldo << std::endl;
    std::cout << "Limite: R$" << limite << std::endl;
}
