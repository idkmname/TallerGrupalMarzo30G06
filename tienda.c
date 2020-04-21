#include "tienda.h"
	
/* No tengo idea pq hicieron una tienda y no el banco de sangre que fue lo que pedí 
	tiene problemas de sintaxis y par errores lógicos
	Falta el makefile y el readme que los pedía el enunciado
*/

void inicializar(producto matriz[4][4]){
	int i, j;
	char emptyNom[20] = "";

	for ( i = 0; i < 4; i++){ //FIX numero mágico
		for ( j = 0; 4 < col; j++){ // FIX este condicional esta al contrario
			strcpy(matriz[i][j].nombre, emptyNom);
			matriz[i][j].precio = 0;
			matriz[i][j].tipo = 0;
		}
	}
}

void venderProducto(producto matriz[4][4]){
	int i, j, flag;
	char producto[20];
	
	printf(" que producto desea comprar: \n");
	scanf(" %s ", producto);
	
	for ( i = 0; i < 4; i++){ // FIX: número mágico
		for ( j = 0; j < 4; j++){
			if ( !strcmp( producto, matriz[i][j].nombre ) ){
				flag = 1;
				printf("\n producto %d \n", matriz[i][j].precio);
				printf("\n precio del producto: %d \n", matriz[i][j].precio);
				switch (matriz[i][j].tipo){
					
					case LEGUMBRES:
						printf(" tipo del producto: Dulces \n" );
						break;
						
					case ENLATADOS:
						printf(" tipo del producto: Dulces \n" );
						break; 

					case CEREALES:
						printf(" tipo del producto: Dulces \n" );
						break;				

					case DULCES:
						printf(" tipo del producto: Dulces \n" );
						break;
				}
			}				
		}
	}	
	if (flag != 1)
		printf("no hay de esos productos en la tienda");
}


int menu(){
   int opc;
	printf( "\n MENU \n" );
	printf( " 1 INGRESAR PRODUCTO \n" );
	printf( "2 \n" );  //FIX: esta incompleto el menu
	printf( "3 \n" );
	printf( "0 SALIR \n" );
	scanf( "%d", &opc );
   return opc;
}

void agregarProducto( producto matriz[4][4] ){
   int i,precio,tipo,n = 0;
   char nombre[20];
   printf( "Cual es el tipo del producto? (1:legumbres 2:enlatados 3:cereales 4:dulces)\n" );
   scanf("%d",&tipo);
   printf( "Cual es el nombre de producto?\n" );
   scanf( "s", nombre ); //FIX errore sde sintaxis
   printf( "Cual es el precio del producto?\n" );
   scanf( "%d",&precio );

   for( i = 0; i < 4; i++ ){
	if( matriz[tipo - 1][i] == 0  ){
		n = 1; //FIX: para que sirve este n= 1?
		strcpy(matriz[ tipo-1 ][i].nombre , nombre);
		matriz[tipo - 1][i].precio = precio;
		
		switch (tipo){ // En el switch podrían haber usado el enum
			case 1: matriz[tipo - 1][i].tipo = LEGUMBRES;
				break;

			case 2: matriz[tipo - 1][i].tipo = ENLATADOS;
				break;


			case 3: matriz[tipo - 1][i].tipo = CEREALES;
				break;


			case 4: matriz[tipo - 1][i].tipo = DULCES;
				break;

		}
	}
	

   }
   if( n != 1 ){
	printf("No hay espacio para el producto\n");
   }

}