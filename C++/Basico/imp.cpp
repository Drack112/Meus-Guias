#include <iostream>

using namespace std;

void imp(string txt="drack");

int main(){

    imp();

    return 0;
}

void imp(string txt){
    cout << "\n" << txt << "\n";
}