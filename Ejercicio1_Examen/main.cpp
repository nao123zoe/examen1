#include <iostream>
#include <cctype>
#include <cstring>
#include <stdlib.h>


using namespace std;

int main()
{
    char cadena1 [100];
    char cadena2 [100];

    char cadena_1 [100];
    char cadena_2 [100];
    cout << "Ingrese la primer cadena" << endl;
    cin.getline(cadena1,100);

    cout << "Ingrese la segunda cadena" << endl;
    cin.getline(cadena2,100);

    strcpy(cadena_1, cadena1);
    strcpy(cadena_2, cadena2);

    for (int i = 0; cadena_1 [i] ; i++) {
         cadena_1 [i] = toupper (cadena_1 [i]);
    }
    for (int i = 0; cadena_2 [i] ; i++) {
         cadena_2 [i] = toupper (cadena_2 [i]);
    }

    if (strcmp(cadena_1,cadena_2)==0)
        cout<<"Las cadenas son iguales"<<endl;
    else
        cout<<"Las cadenas son distintas"<<endl;


    return 0;
}
