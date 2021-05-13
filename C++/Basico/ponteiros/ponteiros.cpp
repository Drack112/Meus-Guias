#include <iostream>

using namespace std;

int main(){
    string veiculo="Carro";
    string *pv;

    pv=&veiculo;

    cout << "\n" << veiculo << "\n" << *pv;

    return 0;
}