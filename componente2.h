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

    //funcion para crear un vector de componentes
    componente crearComponente(int tipo);

    //funicion para sortear los objetos por atributo
    static bool sortByAttribute(const componente& a, const componente& b, int attribute);
    
    std::string toString(int tipo){
        ostringstream str;
        if(tipo == 2){
            str<< "Name: "<< nameProcesador << "|| Price: " << price << "|| Year: " << year << "|| Frequency: " << frequency << "|| Temperature: " << temp;
        }else{
            str<<"|| Price: " << price << "|| Year: " << year;
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
    std::vector<std::string> names = {"i5" , "i7" , "i9", "i10"};

    // minimos y maximo para generar valores aleatorios
     int min_val_y = 2018;
     int max_val_y = 2023;
     int min_val_p = 100;
     int max_val_p = 400;
      float min_val_t = 27.0;
     float max_val_t = 42.0;
     float min_val_f = 1.2;
     float max_val_f = 3.7;
};

componente componente::crearComponente(int tipo) {
    componente comp;

    // declarar los atributos comunes
    comp.year = comp.min_val_y + rand() % (comp.max_val_y - comp.min_val_y + 1);
    comp.price = comp.min_val_p + rand() % (comp.max_val_p - comp.min_val_p + 1);

    if (tipo == 1) {
        return comp;
    } else if (tipo == 2) {
        // declarar los atributos de procesador
        comp.temp = comp.min_val_t + (static_cast<float>(rand()) / RAND_MAX) * (comp.max_val_t - comp.min_val_t);
        comp.frequency = comp.min_val_f + (static_cast<float>(rand()) / RAND_MAX) * (comp.max_val_f - comp.min_val_f);
        int randomIndex = rand() % names.size();
        comp.nameProcesador = names[randomIndex];
    }
    //se agregaran diferentes componentes

    return comp;
}

bool componente::sortByAttribute(const componente& a, const componente& b, int attribute){
 
    if (attribute == 1) {
        return a.year < b.year;
    } else if (attribute == 2) {
        return a.price < b.price;
    } else if (attribute == 3) {
        return a.temp < b.temp;
    }else if(attribute == 4){
         return a.frequency < b.frequency;
    }
    return false; 
}

#endif
