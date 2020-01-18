#ifndef BUEIRO_H
#define BUEIRO_H

#include <Arduino.h>
#include <HX711.h>
#include <Ultrasonic.h>

using namespace std;

class Bueiro
{
    private:

        string identificacao;
        char tipoBueiro;
        float carga, nivel;
        float tara;
        int pinoTrigger, pinoEcho, pinoDT, pinoSCK;

        Ultrasonic sensorUltrassonico(pinoTrigger, pinoEcho);
        HX711 sensoresDeCarga;
    
    public:

        Bueiro(int trig, int echo, int dt, int sck, char tipo);

        void atualizarDados();

        void getCarga();
        void getNivel();
        void getId();

}

#endif