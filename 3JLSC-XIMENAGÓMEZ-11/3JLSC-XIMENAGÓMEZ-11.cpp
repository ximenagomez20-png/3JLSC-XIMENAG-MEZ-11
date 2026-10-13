// 3JLSC-XIMENAGÓMEZ-11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int sumaRecursiva(int n)
{
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}

int sumaIterativa(int n)
{
    int suma = 0;

    while (n > 9)
    {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}


int main()
{
    int cant;
    cout << "Ingrese la cantidad de numeros a ingresar: ";
    cin >> cant;

    for (int i = 0; i < cant; i++) {
        int numero;
        cout << "\nIngresa el numero: ";
        cin >> numero;

        cout << "El resultado de la suma recursiva es: " << sumaRecursiva(numero) << endl;
        cout << "El resultado de la suma iterativa es: " << sumaIterativa(numero) << endl;
    }
    return 0;
}

