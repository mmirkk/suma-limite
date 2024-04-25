#include <iostream>

using namespace std;

int main(){

    int num, resultado = 0;

    cout << "Ingrese un numero para realizar la operacion: ";
    cin >> num;

    for(int i = 1; i<=num; i++){
        resultado += i;
    }
    cout << "La suma de cada numero de "<< num << " es: " << resultado << endl;

return 0;
}
