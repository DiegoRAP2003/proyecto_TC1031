#ifndef COMPONENTES_H
#define COMPONENTES_H

#include <vector>
#include <list>
#pragma once

using namespace std;

template <class T>
class componente{
public:
    componente(){};
    componente();

private:

    //minimo y maximo para generar los anios de los componentes de manera aleatoria
    int const min_val_y = 2018;
    int const max_val_y = 2023;

    //minimo y maximo para generar los precios de los componentes de manera aleatoria
    int const min_val_p = 100;
    int const max_val_p = 400;

    int year;
    int price;

    //atributos de grafica
    int graphics;//720,1080,1440
    int hertz;//1000,1800,2500 mhz

    //atributos de ram
    int capacity;//8,16,32
    int ddr;//5,4,3
    

};

template <class T>
componente<T>::componente(){
    year = min_val_y + std::rand() % (max_val_y - min_val_y + 1);
    price = min_val_p + std::rand() % (max_val_p - min_val_p + 1);
}

template<class T>
class procesador: public componente<T>{

    private:
        //minimo y maximo para generar la temperatura media del procesador;
        float const min_val_t = 27;
        float const max_val_t = 42;
        float temp;
        //minimo y maximo para generar la frecuencia media del procesador
        float const min_val_f = 1.2;
        float const max_val_f = 3.7;
        float frequency;
    
    public:

        procesador();

};

template<class T>
procesador<T>::procesador():componente<T>(){

    temp = min_val_t + (static_cast<float>(std::rand()) / RAND_MAX) * (max_val_t - min_val_t);
    frequency = min_val_f + (static_cast<float>(std::rand()) / RAND_MAX) * (max_val_f - min_val_f);

}

#endif