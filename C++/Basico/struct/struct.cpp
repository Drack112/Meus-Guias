#include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main()
{
    Carro car1;
    Carro car2;

    car1.nome="Tornado";
    car1.cor="Vermelho";
    car1.pot=250;
    car1.velMax=350;

    car2.nome="Luxo";
    car2.cor="Preto";
    car2.pot=250;
    car2.velMax=360;

    cout << car1.nome << "\n";
    cout << car1.cor << "\n";
    cout << car1.pot << "\n";
    cout << car1.velMax << "\n";

    return 0;
}
