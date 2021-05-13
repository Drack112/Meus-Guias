#include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelMax){
        nome=stnome;
        cor=stcor;
        pot=stpot;
        velMax=stvelMax;
    }
    
    void mostra(){
        cout << nome << "\n";
        cout << cor << "\n";
        cout << pot << "\n";
        cout << velMax << "\n";
    }
};

int main()
{
    Carro car1, car2;
    
    car1.insere("Tornado", "Vermelho",450,650);
    car2.insere("Thunder", "Preto",350,450);

    car1.mostra();
    car2.mostra();

    return 0;
}
