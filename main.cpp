#include <iostream>
using namespace std;
int main() {

    //Ejrcicios en clases
    //1.Imprimir 5 veces las palabra PUCESE
    //for (int i = 0; i < 5; i++)
    for (int i = 0; i < 5; i++)
    {
        cout <<endl<< "PUCESE :" << (i + 1);
        cout<<endl<<"fin";
    }
    //2.Imprimir la tabla de multiplicar del numero 5
    //cout<<”El valor de la variable i ” <<i;
    cout<<endl << "Tabla del 5 ";
    for (int x = 1; x <= 10; x++)
    {
        cout << endl << "5 x " << x << " = " << (5 * x);
    }
    //3. Se pide ingresar por teclado un entero que represente
    // la tabla de multiplicar
    //Se pide imprimir la tabla del 1 al 12
    int tabla, i;
    cout <<endl <<"Ingresar cualquier tabla";
    cin >> tabla;
    for (i = 1; i <= 12; i++)
    {
        cout << endl << tabla << "x" << i << "=" << (tabla * i);
    }

    //4. Calcular la sumatoria de los numeros comprendidos entre 500 y 800
    int suma = 0;
    for (i = 500; i <= 800; i++)
    {
        suma = suma + i;
    }
    cout <<endl<< "La suma de numeros entre el 500 y 800 es: " << suma << endl;

    //5. se pide por teclado 2 enteros que representan
    //el principio y fin de una serie. se pide realizar las sumatoria
    //de los numeros multiplos de 5 que se encuentran en esta serie
    int inicio, fin;
    cout << "Ingresar un entero inicial ";
    cin >> inicio;
    cout << "Ingresar un entero final ";
    cin >> fin;
    suma = 0;
    for (int i = inicio; i <= fin; i++)
    {
        if (i % 5 == 0)
            suma = suma + i;
    }
    cout << endl << "La sumatoria de los multiplos de 5 es: " << suma << endl;

    //6. for anidados(un for dentro de otro for)
    //Imprimir un rectangulo de"*"
    cout << endl << "Impresion de un rectangulo"<<endl;
    for (i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //7. Imprimir las 10 primeras tablas de multiplicar
    //use for anidados
    cout << endl << "Las primeras 10 tablas de mutiplicar: ";
    for (int tabla; tabla <= 10; tabla++)
    {
        cout << endl << "tabla de " << tabla;
        for (i = 1; i <= 10; i++)
        {
            cout << endl << tabla << " x=" << i << "=" << (tabla * i);
        }
        cout << endl;
    }

    return 0;
}
