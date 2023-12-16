#include <iostream>

using namespace std;
//Exemplo de input e output
int main() {
    int x;
    cin >> x;
    for(int y = 0; y<x; y++)
        cout << "Esse loop rodou " << y+1 << " vezes" << endl;
    int y = 0;
    int aux = x;
    while(x > 0)
        cout << "Esse loop diminuiu x em 1, " << ++y << " vezes" << endl << "O valor atual é " << --x << endl;

    do {
        if(aux%2 == 0)
            cout << "aux eh par" << endl;
        else 
            cout << "aux eh impar" << endl;
        aux--;
    } while(aux>0);
    return 0;
}