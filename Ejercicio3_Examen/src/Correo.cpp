#include "Correo.h"
#include "MensajeCorreo.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#define MAX 10

using namespace std;

MensajeCorreo * mensajesEnviados[MAX];
int Correo::conteo = 0;


Correo::Correo()
{
    cout<<"Constuctor 1, Correo "<<conteo<<endl;
    this->nombre = new char [20];
    strcpy(this->nombre,"Naomy Rios");
    this->correoElectronico = new char [30];
    strcpy(this->correoElectronico,"nao.rio@unitec.edu");
   // this->enviarMensaje("zoey.rios@unitec.edu","rosa.h@cwc.com","Prueba","Hola");
   //conteo++;

}
Correo::Correo(char * correoElectronico,char * nombre,char * para,char * cc, char * asunto,char * mensaje)
{
    cout<<"Constuctor 2, Correo "<<conteo<<endl;
    this ->nombre = new char [strlen(nombre)+1];
    strcpy(this->nombre,nombre);
    this ->correoElectronico = new char [strlen(correoElectronico)+1];
    strcpy(this->correoElectronico,correoElectronico);

    //this->enviarMensaje(para,cc,asunto,mensaje);
   // conteo++;

}

Correo::~Correo()
{
    delete [] this->correoElectronico;
    delete [] this->nombre;
    delete [] this->mensajesEnviados;

    conteo--;
}
void Correo::setCorreoElectronico(char * correoElectronico)
{
    delete [] this->correoElectronico;
    if (correoElectronico != '\0')
    {
        this->correoElectronico = new char [strlen(correoElectronico)+1];
        strcpy(this->correoElectronico,correoElectronico);
    }

}
void Correo::setNombre(char * nombre)
{
    delete [] this->nombre;
    if (nombre != '\0')
    {
        this->nombre = new char [strlen(nombre)+1];
        strcpy(this->nombre,nombre);
    }

}
void Correo::mostrarTodo()
{
    mostrarMensajesEnviados();
    for(int i=0; i<conteo; i++)
    {

        this->mensajesEnviados[i]->mostrarMensaje();
    }


}

char * Correo::getCorreoElectronico()
{
    return this->correoElectronico;
}
char * Correo::getNombre()
{
    return this->nombre;
}

MensajeCorreo Correo::enviarMensaje(char* para,char * cc,char * asunto, char * mensaje)
{
    cout<<conteo<<endl;
    // MensajeCorreo * correos = new MensajeCorreo(para,cc,asunto,mensaje);

        mensajesEnviados[conteo]= new MensajeCorreo(para,cc,asunto,mensaje);
    //mensajesEnviados[conteo]->mostrarMensaje();

    //delete correos;
      conteo++;

}
MensajeCorreo * Correo::obtenerAsunto()
{
    return this->asunto;
}

void Correo::mostrarMensajesEnviados()
{
    cout<<conteo<<endl;
    cout<<"Resumen"<<endl;

    cout<<"El remitente es: "<<this->nombre<<endl;

    cout<<"El asunto es: "<<this->asunto->getAsunto()<<endl;


}
