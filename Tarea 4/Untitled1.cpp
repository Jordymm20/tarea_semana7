#include <stdio.h>
#include <conio.h>
#include  <stdlib.h>
#include <iostream>
#include <string.h>
// terminar consultar

// agreguen modificar y borrar

// Validaciones cuando se busca un usuario y no existe

// Agregar telefono, direccion 

// validación al ingresar estudiantes en la cantidad máxima en el arreglo
using namespace std;
char borrados[20];
char seguir=0;
char nombres[3][50],telefono[3][30],direccion[3][100];
float  notas[3];
int indice = 0;

void consultar(){
char nombre[50];
bool resul=0;
	do{	
	resul=false;
    cout<<"Digite el nombre del estudiante: ";
    cin>>nombre; 
	for(int i=0; i<3; i++){
		if(strcmp(nombre,nombres[i])==0){
	    resul=true;
		} else {
		}
	}
	if(resul!=1){
	system("cls");		
	cout<<"El estudiante "<<nombre<<" no existe seleccione uno correcto\n";
	system("pause");
	}
	}while(resul!=1);
	
	for(int i=0; i<3; i++)
	{
		if (strcmp(nombres[i],nombre)==0){
			cout << "La nota es de " << notas[i];
			break;
		} else {
		}
	}
	cout<<"\n";
    system("pause");

}
void modificar_y_borrar(){
char nombre[50];
bool resul=0;
	do{	
	resul=false;
    cout<<"Digite el nombre del estudiante que desea modificar: ";
    cin>>nombre; 
	for(int i=0; i<3; i++){
		if(strcmp(nombre,nombres[i])==0){
	    resul=true;
		} else {
		}
	}
	if(resul!=1){
	system("cls");		
	cout<<"El estudiante "<<nombre<<" no existe seleccione uno correcto\n";
	system("pause");
	}
	}while(resul!=1);
	
	for(int i=0; i<3; i++)
	{
		if (strcmp(nombres[i],nombre)==0){
			memcpy(nombres[i],borrados, strlen(borrados)+1);
			notas[i]=0;
			memcpy(telefono[i],borrados, strlen(borrados)+1);
			memcpy(direccion[i],borrados, strlen(borrados)+1);
			indice--;
			break;
		} else {
		}
	}
	cout<<"\n";
    system("pause");	
}
void ingrear() {
char seguir;
		do {
		if(indice<3){	
		system("cls");
	    cout << "Digite el nombre: ";
		cin >> nombres[indice];
		cout <<"\nDigite la nota: ";
		cin >> notas[indice];
		cout<<"\nDigite el numero de telefono: ";
		cin>>telefono[indice];
		cout<<"\nDigite la direccion: ";
		cin >>direccion[indice];
	    cout <<"\nDesea continuar.....s/n: ";
	    getchar();
		seguir=getch();
	    indice++;
	    }else if(indice>2){
        	cout<<"\nUsted ya digito el numero mayor de nombres\n";
        	break;
        }
		} while ((seguir=='s') || (seguir=='S'));
		cout<<"\n";
		system("pause");
        system("cls");
}
void reporte(){
	printf("\n|---------------------------------------------------------------------------- ");
	printf("\n|Nombre              Nota            Telefono                Direccion    ");
	printf("\n|---------------------------------------------------------------------------- ");
	for(int i=0; i<3; i++){
	printf("\n|%s              %f        %s                %s    ", nombres[i], notas[i], telefono[i], direccion[i]);
	printf("\n|---------------------------------------------------------------------------- ");
	}
printf("\n ");
system("pause");
system("cls");
}
void salir(){
	exit(3);
}

void menu(){
  char seguir = 's';
  int opcion;
   do {
   	cout << "1- Ingresar Estudiantes   \n";
   	cout << "2- Consultar Estudiantes  \n";
   	cout << "3- Reporte Estudiantes    \n";
   	cout << "4- Si desea borrar un estudiante \n";
   	cout << "5- Si desea  finalizar el programa \n";
   	cout << "Digite una opcion...    : \n" ;
   	cin >> opcion;
   	system("cls");
   
   	switch (opcion)
   	{
   		case 1: ingrear(); break;
   		case 2: consultar(); break;
   	    case 3: reporte(); break;
   	    case 4: modificar_y_borrar();break;
   	    case 5: exit(3);break;
   	    default : break;
   	}

   }while ((seguir=='s') || (seguir=='S'));
	
}

int main(){
	
 	menu();
 	
	return 3;
}
