#include <iostream>
#include "MensajeCorreo.h"
#include "Correo.h"
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    Correo correos;

    char centinela='s';
    int opcion=0;
    do
    {
        cout<<"         M E N U"<<endl;
        cout<<"1. Enviar correos"<<endl;
        cout<<"2. Mostrar correos"<<endl;
        cin>>opcion;
        switch(opcion)
        {
        case 1:
            char nombre [30];
            cout<<"Remitente: "<<endl;
            cin>>nombre;
            correos.setNombre(nombre);
            char correo [30];
            cout<<"Correo Electronico: "<<endl;
            cin>>correo;
            correos.setCorreoElectronico(correo);
            char para [30];
            cout<<"Para: "<<endl;
            cin>>para;
            char cc [30];
            cout<<"CC: "<<endl;
            cin>>cc;
            char asunto [30];
            cout<<"Asunto: "<<endl;
            cin>>asunto;
            char mensaje [30];
            cout<<"Mensaje: "<<endl;
            cin>>mensaje;
            correos.enviarMensaje(para,cc,asunto,mensaje);
            break;
        case 2:
            correos.mostrarTodo();
            break;
        default:
                cout<<"Ingreso una opcion invalida"<<endl;
            break;

        }
        cout<<"Desea continuar? Ingrese >n< para terminar o cualquier tecla para continuar"<<endl;
        cin>>centinela;

    }
    while(centinela != 'n');


    /*Correo * correo1= new Correo();
    correo1->mostrarMensajesEnviados();

    // Correo * correo2= new Correo();
    //correo2->mostrarMensajesEnviados();

    // Correo * correo3= new Correo("j.estevez@unitec.edu","Jumary Estevez","a.lara@unitec.edu","nrios@gvip","Ejemplo","Adjutno el ejemplo");
    // correo3->mostrarMensajesEnviados();

     delete correo1;
    // delete correo2;
    // delete correo3;*/
    return 0;
}
