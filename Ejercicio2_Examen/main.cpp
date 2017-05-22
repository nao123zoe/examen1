#include <iostream>
#include <stdlib.h>

using namespace std;

int cuentaCadena( const char * );

int main()
 {
     char cadena[100];

     cout << "Escribe una cadena: ";
     cin.getline(cadena,100);
     cout <<"La cadena tiene "<< cuentaCadena(cadena) <<" caracteres."<< endl;
     cout<<endl;
     cout<<"Nota: Los espacios cuentan."<<endl;
     return 0;
 }

 int cuentaCadena( const char *c )
 {
     int cont;

     for (cont = 0; *c != '\0'; c++ )
        cont++;

     return cont;
}
