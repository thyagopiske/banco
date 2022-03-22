#include "Banco.h"
#include <algorithm>
#include <memory>

Banco::Banco() {}

void Banco::inserir(std::shared_ptr<ContaBancaria>& conta)
{
    contas.push_back(conta);
}

void Banco::remover(std::shared_ptr<ContaBancaria>& conta)
{
    for(int i=0; i<contas.size(); i++)
    {
        if(contas[i]->getNumeroConta() == conta->getNumeroConta())
        {
            contas.erase(contas.begin()+i);
            return;
        }
    }
}

std::shared_ptr<ContaBancaria> Banco::procurarConta(int numero_conta)
{
    std::shared_ptr<ContaBancaria> conta_bancaria = nullptr;
    for(int i=0; i<contas.size(); i++)
    {
        if(contas[i]->getNumeroConta() == numero_conta)
        {
            conta_bancaria = contas[i];
            return conta_bancaria;
        }
    }

    return nullptr;
}

void Banco::mostrarDados(){
    for(int i=0; i<contas.size(); i++)
    {
        contas[i]->mostrarDados();
    }
}
