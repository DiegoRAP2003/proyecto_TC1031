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

## Avance 3

### Cambios a main():

1. Se agrego la lectura de archivos para crear los objetos, y la escritura en un archivo de output
2. Cambio a la funcion de sort por atributo, se agrego una extra para poder usarse con los 2 tipos de componente
3. Se agrego un nuevo componente(GPU) 
4. Codigo en python para crear inputs aleatorios

## Analisis Asintotico

### Main

### Declaracion de variables y estructuras

1.  La declaracion de las listas y variables es de O(1)

### Lectura de archivos y creacion de los objetos tipo componente

1. Tanto para la creacion de procesadores como de GPUs se leen archivos de una forma lineal dado el tamanio del archivo, por lo que serian O(n)

### Ordenamiento

1. Los algoritmos de ordenamiento se implementan usando la libreria estandar std::sort, por lo que en esta seccion la complejidad es de O(n log n)

### Escritura de archivo de salida

1. Es un ciclo lineal de complejidad O(n)

### Clase componente

Todos los metodos de esta clase tienen una complejidad de O(1) ya que son constantes, exceptuando el metodo toString(), que tiene una complejidad de O(n) ya que es lineal.
Por lo que esta clase en promedio deberia de tener una complejidad de O(n).
  
### Conclusion

Tanto para la parte de GPUs como procesadores la complejidad seria de O(n log n), ya que las dos son dominadas por el algoritmo de ordenamiento