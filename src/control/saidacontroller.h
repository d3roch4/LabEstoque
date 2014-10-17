#ifndef SAIDACONTROLLER_H
#define SAIDACONTROLLER_H

#include "controlador.h"
#include "model/saidamodel.h"

class SaidaController : public Controlador
{
    SaidaModel model;
public:
    SaidaController();    
    void setup();
    void getSaida(Request &request, StreamResponse &response);
    void listaSaida(Request &request, StreamResponse &response);
    void salvarSaida(Request &request, StreamResponse &response);
};

#endif // SAIDACONTROLLER_H