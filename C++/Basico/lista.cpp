#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> aula;
    int tam;
    list<int>::iterator it;

    aula.push_front(9);
    aula.push_front(5);
    aula.push_front(3);
    aula.push_front(7);
    aula.push_front(8);
    aula.push_front(4);
    aula.push_front(6);
    aula.push_front(4);
    aula.push_front(1);

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    aula.sort();
    aula.reverse();

    tam=aula.size();
    for(int i=0; i<tam; i++){
        cout << aula.front() << "\n\n";
        aula.pop_front();
    }

    return 0;

}