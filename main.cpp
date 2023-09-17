#include <vector>
#include <iostream>
#include <algorithm>
#include "componente2.h"

using namespace std;

int main(){
    int opcion,sortNum;;
    vector<componente> componentes;

    cout<<"Escoga una opcion"<<endl<<"-----------------"<<endl;
    cout<<"1. Componentes en general"<<endl<<"2. Procesadores"<<endl;
    cin>>opcion;

    if(opcion == 1){
        for(int i = 0; i < 6; i++){
            componente comp = comp.crearComponente(opcion);
            componentes.push_back(comp);
        }

        cout<< "Desea ordenarlos por: "<<endl<<"--------";
        cout<< "1. Precio"<<endl<<"2. Anio"<<endl;
        cin>>sortNum;

        sort(componentes.begin(), componentes.end(), [sortNum](const componente& a, const componente& b) {
        return componente::sortByAttribute(a, b,sortNum);
        });

        for(componente& componente : componentes){
            cout << componente.toString(opcion)<<endl;
        }

    }else if(opcion == 2){
        for(int i = 0; i < 6; i++){
            componente comp = comp.crearComponente(opcion);
            componentes.push_back(comp);
        }
        cout<< "Desea ordenarlos por: "<<endl<<"--------";
        cout<< "1. Precio"<<endl<<"2. Anio"<<endl<<"3. Temperatura media"<<endl<<"4. Frequencia media"<<endl;
        cin>>sortNum;

        sort(componentes.begin(), componentes.end(), [sortNum](const componente& a, const componente& b) {
        return componente::sortByAttribute(a, b,sortNum);
        });

        for(componente& componente : componentes){
            cout << componente.toString(opcion)<<endl;
        }
    }


}