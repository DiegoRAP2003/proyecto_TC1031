# Proyecto TC1031
Proyecto TC1031 Ago-Dic 2023

## Avance 1
En ete avance se creo la clase de componente, en donde se pueden crear 2 tipos de componente, componente general y procesador, tambien se crearon los metodos toString, que sirve para imprimir los elementos del objeto,  tambien la funcion sortbyattribute, que sera usada para poder utilizar la funcion sort de la libreria estandar de c++, para poder ordenar los objetos dependiendo de lo que pida el usuario

## Avance 2
Se modifico el main y la clase componente.h para poder hacer uso de otra estructura de datos diferente al vecto y poder usar la funcion sort para ordenar los atributos de los objetos

### Cambios a main():

1. Cambio de uso de vector a uso de std::list.
2. Cambio de uso de algoritmo de ordenamiento, anteriormente se utiliza std::sort, ahora se utiliza list::sort.
3. Agregacion de opcion para usuario para poder ordenar de manera ascendente o descendente los objetos en cuanto al atributo que se especifico.

### Cambios a archivo componente.h:

#### Funcion SortByAttribute():
1. se agrego una bandera booleana para decidir la manera de ordenar los objetos.
2. Cambio al codigo para ordenar los objetos de manera ascendente o descendente.