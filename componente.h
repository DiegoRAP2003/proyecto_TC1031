#ifndef COMPONENTE_H
#define COMPONENTE_H

#include <cstdlib>
#include <ctime>
#include <vector>
#include <sstream>

using namespace std;

class componente {
public:
    componente() {};

    //constructor componente procesador
    componente(std::string n,int y, int p, float t, float f);

    componente(std::string n,int y, int p, int max_g, int c_s);


    //funicion para sortear los objetos por atributo
    static bool sortByAttributeProcesador(const componente& a, const componente& b, int attribute, bool);
    static bool sortByAttributeGPU(const componente& a, const componente& b, int attribute, bool);
    
    std::string toString(int tipo){
        ostringstream str;
        if(tipo == 2){
            str<< "Name: "<< nameProcesador << " || Price: " << price << " || Year: " << year << " || Frequency: " << frequency << " GHz" << " || Temperature: " << temp;
        }if(tipo == 1){
            str<< "Name:   "<< nameGPU << "   || Price: " << price << " || Year: " << year << " || Max Graphics: " << max_graphics << " || Clock Speed(MHz): " << clock_speed;
        }
        std::string str1 = str.str();
        return str1;
    }
    std::string getName(){return nameProcesador;};
    int getPrice(){return price;};
    int getYear(){return year;};
    float getTemp(){return temp;};
    float getFreq(){return frequency;};

private:
    // atributo comunes de componentes
    int year;
    int price;
    

    // aatributos de procesador
    float temp;
    float frequency;
    std::string nameProcesador;

    //atributos de tarjeta grafica
    int max_graphics; 
    int clock_speed;
    std::string nameGPU;



};

componente::componente(std::string n,int y, int p, float t, float f){
    year = y;
    price = p;
    temp = t;
    frequency = f;
    nameProcesador = n;
}

componente::componente(std::string n,int y, int p, int max_g, int c_s){
    year = y;
    price = p;
    max_graphics = max_g;
    clock_speed = c_s;
    nameGPU = n;
}

//funcion que ordena los obejtos componente dependiendo del tipo de atributo del objeto (o(1))
bool componente::sortByAttributeProcesador(const componente& a, const componente& b, int attribute, bool orden){
 
    if(!orden){
        if (attribute == 1) {
            return a.year < b.year;
        } else if (attribute == 2) {
            return a.price < b.price;
        } else if (attribute == 3) {
            return a.temp < b.temp;
        }else if(attribute == 4){
            return a.frequency < b.frequency;
        }
    }else{
        if (attribute == 1) {
            return a.year > b.year;
        } else if (attribute == 2) {
            return a.price > b.price;
        } else if (attribute == 3) {
            return a.temp > b.temp;
        }else if(attribute == 4){
            return a.frequency > b.frequency;
        }
    }
    return false; 
}

bool componente::sortByAttributeGPU(const componente& a, const componente& b, int attribute, bool orden){
 
    if(!orden){
        if (attribute == 1) {
            return a.year < b.year;
        } else if (attribute == 2) {
            return a.price < b.price;
        } else if (attribute == 3) {
            return a.max_graphics < b.max_graphics;
        }else if(attribute == 4){
            return a.clock_speed < b.clock_speed;
        }
    }else{
        if (attribute == 1) {
            return a.year > b.year;
        } else if (attribute == 2) {
            return a.price > b.price;
        } else if (attribute == 3) {
            return a.max_graphics > b.max_graphics;
        }else if(attribute == 4){
            return a.clock_speed > b.clock_speed;
        }
    }
    return false; 
}

#endif
