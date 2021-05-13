#include <iostream>

using namespace std;

int main(){
    enum armas{fuzil=100, revolver=8, sniper=19};
    armas armaSel;

    armaSel=sniper;

    cout << armaSel;

    return 0;
}