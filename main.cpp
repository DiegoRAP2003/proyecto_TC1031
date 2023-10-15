#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "componente.h"

using namespace std;

int main(){
    int opcion,sortNum;;
    bool orden;
    list<componente> componentes;

    cout<<"Escoga una opcion"<<endl<<"-----------------"<<endl;
    cout<<"1. Componentes en general"<<endl<<"2. Procesadores"<<endl;
    cin>>opcion;

    if(opcion == 1){
        //este ciclo for crea componentes teniendo el cuenta el tipo que se la paso arriba, tiene una complejidad de (O(n)), aunque en ete caso en concreto, realmente seria (O(1)) ya que e hace un numero contante de iteraciones 
        for(int i = 0; i < 6; i++){
            componente comp = comp.crearComponente(opcion);
            componentes.push_back(comp);
        }

        cout<< "Desea ordenarlos por: "<<endl<<"-----------------"<<endl;
        cout<< "1. Anio"<<endl<<"2. Precio"<<endl;
        cin>>sortNum;

        cout<< "Desea ordenarlos de menor a mayor?: "<<endl<<"-----------------"<<endl;
        cout<< "Digite 0 para Si"<<endl<<"DIgite 1 para No"<<endl;
        cin>>orden;


        //este algoritmo de ordenamiento "list::sort" es una version del algoritmo merge sort, por lo que tiene una complejidad de (O(n log n))
        componentes.sort([sortNum,orden](const componente& a, const componente& b) {
            return componente::sortByAttribute(a, b, sortNum,orden);
        });



        //este ciclo for crea imprime los atributos de los componentes, tiene una complejidad de (O(n)) 
        for(componente& componente : componentes){
            cout << componente.toString(opcion)<<endl;
        }

    }else if(opcion == 2){
        //este ciclo for crea componentes teniendo el cuenta el tipo que se la paso arriba, tiene una complejidad de (O(n)), aunque en ete caso en concreto, realmente seria (O(1)) ya que e hace un numero contante de iteraciones 
        for(int i = 0; i < 6; i++){
            componente comp = comp.crearComponente(opcion);
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
            return componente::sortByAttribute(a, b, sortNum,orden);
        });


        //este ciclo for crea componentes teniendo el cuenta el tipo que se la paso arriba, tiene una complejidad de (O(n)), aunque en ete caso en concreto, realmente seria (O(1)) ya que e hace un numero contante de iteraciones 
        for(componente& componente : componentes){
            cout << componente.toString(opcion)<<endl;
        }
    }


}

/*
teniendo en cuenta las estructuras de datos, los ciclos y los algoritmos de ordenamiento, el programa completo en promedio deberia de tener una complejidad de O(n log n), debido a mayormente a los 
algoritmos de ordenamiento
*/