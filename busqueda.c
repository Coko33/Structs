/*
Busqueda secuencial: se usa en arreglos desordenados.
se comprueban los valores uno a uno hasta encontrarlo (while)
*/
#include <stdbool.h>
int Busqueda_seq(int valores[], int size, int buscado)
{
    int i = 0,
        posicion = -1;
    bool encontrado = false;
    while (i < size && !encontrado)
    {
        if (valores[i] == buscado)
        {
            encontrado = true;
            posicion = i;
        }
        i++;
    }
    return posicion;
}

/*
Busqueda binaria o dicotomica: cuando el vector esta ordenado
suponemos ordenamiento creciente
se va comprobando con el valor de la mitad del rango
el corte se da cuando se encuentra el elemento o cuando es menor que el menor elemento del arreglo o mayor al mayor elemento de arreglo
*/

#include <stdbool.h>
int Busqueda_bin(int valores[], int size, int buscado)
{
    int inf, sup, mit;
    bool terminado;
    int posicion = -1;

    inf = 0;
    sup = size - 1;
    terminado = false;

    while (!terminado) // while (terminado == false)
    {
        if ((buscado > valores[sup]) || (buscado < valores[inf]))
        {
            terminado = true; // NO está, fin de la busqueda
            posicion = -1;
        }
        else
        {
            mit = (inf + sup) / 2;
            if (buscado == valores[mit])
            {
                terminado = true; // ENCONTRADO, fin de la busqueda
                posicion = mit;
            }
            else if (buscado > valores[mit])
                inf = mit + 1;
            else
                sup = mit - 1;
        }
    }
    return posicion;
}
