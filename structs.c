#include <stdio.h> 
#include <string.h> 
typedef int t_legajo; 
typedef char t_cadena[50];

typedef struct { 
    t_legajo legajo;
    t_cadena nombre; 
} t_alumno; 

void modificar_alumno(t_alumno *alumno) { 
    /* Al modificar los campos del struct por referencia debemos utilizar la notación flecha -> */ 
    alumno->legajo = 202340; 
    strcpy(alumno->nombre, "Juan"); 
}

void mostrar_alumno(t_alumno alumno) { 
    /* Al recibir el struct por valor trabajamos con una copia de los valores originales y utilizamos el operador punto */ 
    printf("Legajo: %d\n", alumno.legajo); 
    printf("Nombre: %s\n\n", alumno.nombre); 
} 

int main() { 
    /* Declaración de variables tipo struct */ 
    t_alumno alumno1, alumno2; 

    /* Asignando valores a los campos del alumno1 */ 
    alumno1.legajo = 112130; 
    strcpy(alumno1.nombre, "Diego"); 
    mostrar_alumno(alumno1); 
    // Legajo: 112130 
    // Nombre: Diego 
    
    /* Copia de struct por valor */ 
    alumno2 = alumno1; 
    mostrar_alumno(alumno2); 
    // Legajo: 112130 
    // Nombre: Diego 
    
    /* Asignando valores a los campos del alumno2 */ 
    alumno2.legajo = 120001; 
    strcpy(alumno2.nombre, "Adrian"); 
    mostrar_alumno(alumno2); 
    // Legajo: 120001 
    // Nombre: Adrian 
    
    /* Mostrando datos del alumno1*/ 
    mostrar_alumno(alumno1); 
    // Legajo: 112130 
    // Nombre: Diego 
    
    /* Modificando al struct de alumno2 por referencia */ 
    modificar_alumno(&alumno2); 
    mostrar_alumno(alumno2); 
    // Legajo: 202340 
    // Nombre: Juan 

    printf("Tamaño del struct en bytes es %d", sizeof(t_alumno)); 
} 