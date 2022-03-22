#ifndef BANCO_H
#define BANCO_H
#include "contabancaria.h"
#include <vector>
#include "imprimivel.h"
#include <memory>

class Banco : public Imprimivel
{
private:
    std::vector<std::shared_ptr<ContaBancaria>> contas;
public:
    Banco();
    void inserir(std::shared_ptr<ContaBancaria>& conta);
    void remover(std::shared_ptr<ContaBancaria>& conta);
    std::shared_ptr<ContaBancaria> procurarConta(int numero_conta);
    void mostrarDados();
};

#endif // BANCO_H
