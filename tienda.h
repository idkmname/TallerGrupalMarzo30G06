#include<stdio.h>
#include<string.h>

enum tipoProducto{
	LEGUMBRES, ENLATADOS, CEREALES, DULCES
};

typedef struct producto{
	char nombre[20];
	int precio;
	int tipo;
	//FIX: ojo con estos espacios que no se necesitan
	
}producto;


//Inicializa la matriz con valores estandar 
void inicializar(producto matriz[4][4]);

//Agregar un producto a la matriz de un tipo definido
void agregarProducto( producto matriz[4][4] );

//FIX falta que pongan que es un void
venderProducto(producto matriz[4][4]);

int menu();

