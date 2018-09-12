#include <iostream>
using namespace std;

    int arreglo[]={1,2,3,4,5,6,7,8,9,10};
    int *puntero;
    int sumador, promedio;
int main(){
    puntero = &arreglo[0];
    for(int i=0; i<10; i++){
        cout << "valor " << arreglo[i] << endl;
        sumador=sumador+*puntero++;
    }
    promedio = sumador/10;
    cout << "la suma es:" << sumador <<endl;
    cout << "el promedio es: " << promedio;

    return 0;
}
