#ifndef CORREO_H
#define CORREO_H
#include "MensajeCorreo.h"


class Correo
{
public:
    Correo();
    Correo(char *,char *,char *,char *, char *,char *);
    virtual ~Correo();

    void setCorreoElectronico(char *);
    void setNombre(char*);

    char * getCorreoElectronico();
    char * getNombre();

    MensajeCorreo enviarMensaje(char*,char *,char *, char *);

    void mostrarMensajesEnviados();
    void mostrarTodo();

    MensajeCorreo * obtenerAsunto();

protected:

private:
    char * correoElectronico;
    char * nombre;
    MensajeCorreo * mensajesEnviados [];

    MensajeCorreo * asunto;

    static int conteo;

};

#endif // CORREO_H
