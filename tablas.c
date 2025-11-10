/* #define MAX_ALUMNOS 3 

typedef struct { 
    char nombre[30]; 
    int legajo; 
    char email[50]; 
    int notas[2]; 
    float promedio; 
} t_alumno; 
typedef t_alumno t_alumnos[MAX_ALUMNOS]; */

#include <stdio.h>  
#define TAMANIO 3  
/* definimos una estructura alumno */ 
typedef struct {      
    char nombre[30];      
    int padron;      
    char email[50];      
    int notas[2] ;      
    float promedio; 
} alumno_t;  

typedef alumno_t t_alumnos[TAMANIO];  

void print_newline() {   
    printf("\n\n"); 
}  

void cargar(t_alumnos vec) {     
    int i;     
    for(i=0; i<TAMANIO; i++) {       
        printf("Ingrese datos del Alumno %d\n\n", i+1);       
        printf("Ingrese el Nombre: ");       
        scanf("%s", vec[i].nombre);       
        printf("Ingrese el padron: ");       
        scanf("%d", &vec[i].padron);       
        printf("Ingrese el email: ");       
        scanf("%s", vec[i].email);       
        printf("Ingrese la nota del Parcial 1: ");       
        scanf("%d", &vec[i].notas[0]);       
        printf("Ingrese la nota del Parcial 2: ");       
        scanf("%d", &vec[i].notas[1]);       
        vec[i].promedio = (float)(vec[i].notas[0] + vec[i].notas[1])/2;     
    }     
    print_newline(); 
}  

void mostrar_alumnos(t_alumnos vec) {     
    int i;     
    for(i=0; i<TAMANIO; i++) {       
        printf("Alumnos %d\n", i+1);       
        printf("nombre: %s\n", vec[i].nombre);       
        printf("padron: %d\n", vec[i].padron);        
        printf("email: %s\n", vec[i].email);       
        printf("Nota Parcial 1:%d Nota Parcial 2:%d\n", vec[i].notas[0], vec[i].notas[1]);       
        printf("promedio: %.2f\n", vec[i].promedio);     
    }     
    print_newline(); 
} 

int main(void) { 
    alumno_t alumnos[TAMANIO]; 
    /* Cargo los elementos de la tabla */ 
    cargar(alumnos); 
    /* Muestro el contenido de los elementos de la tabla */ 
    mostrar_alumnos(alumnos); 
    print_newline(); 
    return 0; 
} 