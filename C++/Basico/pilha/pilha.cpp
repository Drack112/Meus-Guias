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

    cout << "Carta do topo: " << cartas.top() << "\n\n";

    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << "\n\n";

    return 0;
}