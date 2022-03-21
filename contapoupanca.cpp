#include "contabancaria.h"
#include "contapoupanca.h"
#include "imprimivel.h"
#include <math.h>
#include <iostream>

ContaPoupanca::ContaPoupanca(int numero_conta, double saldo):ContaBancaria(numero_conta, saldo){};

bool ContaPoupanca::sacar(double valor){
    if(valor > 0){
        if(valor <= this->saldo + limite){
            this->saldo -= valor;
            return true;
        }else{
            return false;
        }
    }
}

void ContaPoupanca::mostrarDados(){
    std::cout << std::endl;
    std::cout << "Tipo: Conta Poupanca" << std::endl;
    std::cout << "Numero: " << numero_conta << std::endl;
    std::cout << "Saldo: R$" << saldo << std::endl;
}
