#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <string> cartas;

    cartas.push("Rei de Copar");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha " << cartas.size() << "\n\n";

    while(!cartas.empty()){
       cout << "Carta do topo: " << cartas.top() << "\n";
        cartas.pop();
    }

    return 0;
}