#include<stdio.h>
#include<string.h>

typedef enum tipoProducto{
	LEGUMBRES, ENLATADOS, CEREALES, DULCES
};

typedef struct producto{
	char nombre[20];
	int precio;
	int tipo;	
}producto;


//Agregar un producto a la matriz de un tipo definido
void agregarProducto( producto matriz[][] );