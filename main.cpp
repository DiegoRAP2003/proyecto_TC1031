#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "componente.h"
#include <fstream>

list<componente> filter(int f, list<componente> &l, int a);
using namespace std;

int main(){
    int opcion,sortNum;;
    bool orden;
    list<componente> componentes;

    cout<<"Escoga una opcion"<<endl<<"-----------------"<<endl;
    cout<<"1. GPUs"<<endl<<"2. Procesadores"<<endl;
    cin>>opcion;

    if(opcion == 1){
            
        std::ifstream archivo("input_gpu.txt");
        std::ifstream archivo_names("input_gpu_names.txt");

        std::string name;
        int year, price, max_g, clock_s;

        //ciclo para leer los datos de los archivos input de procesadores y nombres y crea los objetos componente
        while(archivo >> year >> price >> max_g >> clock_s && getline(archivo_names,name)){
            componente comp(name,year,price,max_g,clock_s);
            componentes.push_back(comp);
        }

        cout<< "Desea ordenarlos por: "<<endl<<"-----------------"<<endl;
        cout<< "1. Anio"<<endl<<"2. Precio"<<endl<< "3. Graficas maximas que alcanza"<<endl<<"4. Clock Speed"<<endl;
        cin>>sortNum;

        cout<< "Desea ordenarlos de menor a mayor?: "<<endl<<"-----------------"<<endl;
        cout<< "Digite 0 para Si"<<endl<<"Digite 1 para No"<<endl;
        cin>>orden;

        //este algoritmo de ordenamiento "list::sort" es una version del algoritmo merge sort, por lo que tiene una complejidad de (O(n log n))
        componentes.sort([sortNum,orden](const componente& a, const componente& b) {
            return componente::sortByAttributeGPU(a, b, sortNum,orden);
        });

        ofstream archivo_output("output.txt");

        //este ciclo escribe la informacion de los objetos ya ordenados en un archivo .txt
        for(componente& componente : componentes){
            archivo_output << componente.toString(opcion)<<endl;
        }

        cout<<"Arhcivo output creado"<<endl;
        cout<<"Adios";

        

    }else if(opcion == 2){

        std::ifstream archivo("input_procesador.txt");
        std::string name;
        int year, price; 
        float temp, frequency;

        //ciclo para leer los datos de los archivos input de procesadores y nombres y crea los objetos componente
        while(archivo >> name >> year >> price >> temp >> frequency){
            componente comp(name,year,price,temp,frequency);
            componentes.push_back(comp);
        }
        
        cout<< "Desea ordenarlos por: "<<endl<<"-----------------"<<endl;
        cout<< "1. Anio"<<endl<<"2. Precio"<<endl<<"3. Temperatura media"<<endl<<"4. Frequencia media"<<endl;
        cin>>sortNum;

        cout<< "Desea ordenarlos de menor a mayor?: "<<endl<<"-----------------"<<endl;
        cout<< "Digite 0 para Si"<<endl<<"Digite 1 para No"<<endl;
        cin>>orden;

        //este algoritmo de ordenamiento "std::sort" es una version del algoritmo quicksort, por lo que tiene una complejidad de (O(n log n))
        componentes.sort([sortNum,orden](const componente& a, const componente& b) {
            return componente::sortByAttributeProcesador(a, b, sortNum,orden);
        });

        ofstream archivo_output("output.txt");

        //este ciclo escribe la informacion de los objetos ya ordenados en un archivo .txt
        for(componente& componente : componentes){
            archivo_output << componente.toString(opcion)<<endl;
        }

        cout<<"Arhcivo output creado"<<endl;
        cout<<"Adios";
    }



}


/*
teniendo en cuenta las estructuras de datos, los ciclos y los algoritmos de ordenamiento, el programa completo en promedio deberia de tener una complejidad de O(n log n), debido a mayormente a los 
algoritmos de ordenamiento
*/