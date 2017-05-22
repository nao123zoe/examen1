#include "MensajeCorreo.h"
#include <iostream>
#include <cstring>

using namespace std;


MensajeCorreo::MensajeCorreo()
{
    this->para = new char [30];
    strcpy(this->para,"zoey.rios@unitec.edu");
    this->cc = new char [30];
    strcpy(this->cc,"nrios@unitec.edu");
    this->asunto = new char [30];
    strcpy(this->asunto,"Examen");
    this->mensaje = new char [100];
    strcpy(this->mensaje,"El examen vence el lunes.");
}

MensajeCorreo::MensajeCorreo(char * para,char * cc,char * asunto,char * mensaje)
{
    this->para = new char [strlen(para)+1];
    strcpy(this->para,para);
    this->cc = new char [strlen(cc)+1];
    strcpy(this->cc,cc);
    this->asunto = new char [strlen(asunto)+1];
    strcpy(this->asunto,asunto);
    this->mensaje = new char [strlen(mensaje)+1];
    strcpy(this->mensaje,mensaje);

}
MensajeCorreo::~MensajeCorreo()
{
    delete [] para;
    delete [] cc;
    delete [] asunto;
    delete [] mensaje;
}
void MensajeCorreo::setPara(char * para)
{
    delete [] this->para;
    if (para != '\0')
    {
        this->para = new char [strlen(para)+1];
        strcpy(this->para,para);
    }

}
void MensajeCorreo::setCC(char * cc)
{
    delete [] this->cc;
    this->cc = new char [strlen(cc)+1];
    strcpy(this->cc,cc);


}
void MensajeCorreo::setAsunto(char * asunto)
{
    delete [] this->asunto;
    if (asunto != '\0')
    {
        this->asunto = new char [strlen(asunto)+1];
        strcpy(this->asunto,asunto);
    }

}
void MensajeCorreo::setMensaje(char * mensaje)
{
    delete [] this->mensaje;
    this->mensaje = new char [strlen(mensaje)+1];
    strcpy(this->mensaje,mensaje);
}

char * MensajeCorreo::getPara()
{
    return this->para;

}
char * MensajeCorreo::getCC()
{
    return this->cc;

}
char * MensajeCorreo::getAsunto()
{
    return this->asunto;

}
char * MensajeCorreo::getMensaje()
{
    return this->mensaje;

}

void MensajeCorreo::mostrarMensaje()
{
    cout<<"Para: "<<this->para<<endl;
    cout<<"CC: "<<this->cc<<endl;
    cout<<"Asunto: "<<this->asunto<<endl;
    cout<<"Mensaje: "<<this->mensaje<<endl;

}
