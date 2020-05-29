//Librerias Utilizadas
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

//estructuras-Liberias propias

#include "estructura.h"


using namespace std;


//prototipos de funciones
int menu(int m);
void menu2();
void clientes();
void lectura();

int main()
{
    int SEL;
    
    system("color 2" );//Cambia el color de la consola
    
    do//ciclo con do, while para el menu
    {
        
        system("cls");//Limpia pantalla


        switch(menu(SEL))//menu 1
        {


        case 1:
        {
            system("cls");
            menu2();//Llamando al menu numero 2
            break;
        }
        case 2:
        {
            return 0;
            break;
        }
        case 3:
            system("cls");
            lectura();
            break;


        }
    }
    while(SEL!=2);
    return 0;
}



int menu(int m)//Funcion de menu 1
{
    cout<<"Facturacion de clientes-Tienda de electronica TecnoStar"<<endl;
    cout<<"----Developed by: Farit, Roger, Emmanuel and Joshua----"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"------------------Selecione una opcion-----------------"<<endl;
    cout<<"-----------------------1-Cliente-----------------------"<<endl;
    cout<<"-----------------------2-Cerrar------------------------"<<endl;
    cout<<"--------------------3-Leer factura---------------------"<<endl;
    cout<<"-----------------------ver 1.0-------------------------"<<endl;
    cin>>m;
    fflush(stdin);
    fflush(stdout);//limpiando el buffer de salida para evitar errores

    return m;//retorna m, ya que es un funcion int


}

//Menu 2 de nuestra tienda TecnoStar
void menu2()//menu de clientes
{
    int k;
    cout<<"------------------TecnoStar-------------------"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"---------------1-Agregar cliente--------------"<<endl;
    cout<<"-------------------2-Salir--------------------"<<endl;
    cout<<"--------------Escoga un numero: ------------- "<<endl;
    cin>>k;
    fflush(stdin);
    fflush(stdout);

    switch(k)
    {
    case 1:
        system("cls");
        clientes();
        break;
    case 2:
        system("cls");
        break;
    }
}

void lectura(){ //funcion de lectura de archivo txt
    	fstream archivo("tienda.txt");
    	string linea;
    	int op;

    	cout<<"----1-Leer registro-----"<<endl;
    	cout<<"----2-Salir-------------"<<endl;
    	cin>>op;
    	if(op==1)
    	{
    		if(!archivo.is_open())
    		archivo.open("tienda.txt",ios::in);//abriendo archivo

    		while(getline(archivo, linea))
    		cout<< linea << endl;//mostrando datos del archivo.txt en panatalla

    		archivo.close();
    		system("pause");
    	}

    }


void clientes()//fucion de clientes, pide datos
{
    int i,j;
    texto cliente1; //"texto" es la estructura que esta en un header
    ofstream datos;
    datos.open("tienda.txt");//creacion del txt

    cout<<"Cliente-TecnoStar"<<endl;
    cout<<"Cedula de identidad: ";//piediendo datos
    gets(cliente1.Cedula);//ingreso del dato
    fflush(stdin);//limpiando el buffer

    cout<<"Nombre: ";
    gets(cliente1.Nombre);
    fflush(stdin);

    cout<<"Telefono: ";
    gets(cliente1.Telefono);
    fflush(stdin);

    cout<<"Direccion: ";
    gets(cliente1.Direccion);
    fflush(stdin);

    cout<<"Correo de cliente: ";
    gets(cliente1.Correo);
    fflush(stdin);

    datos<<cliente1.Cedula<<endl; //escribiendo en el archivo datos
    datos<<cliente1.Nombre<<endl;
    datos<<cliente1.Telefono<<endl;
    datos<<cliente1.Direccion<<endl;
    datos<<cliente1.Correo<<endl;
    cout<<"----------------------------------"<<endl;

    cout<<"Ingrese la cantidad de productos: ";
    cin>>j;
    fflush(stdin);

    if (j<=0 or j>10)//ciclo de productos
    {
        cout<<"Cantidad de productos incorrecta debe ser mayor a 0 y menor o igual a 10"<<endl;
        system("pause");
        fflush(stdout);
        datos.close();
        system("cls");
        return ;
    }

    else
    {
        for (i=0; i<j; i++) //ciclo para los productos
        {
            cout<<"producto no."<<i+1<<": ";
            switch(i)
            {
            case 0:
            {
                gets(cliente1.producto1);//ingresando datos
                fflush(stdin);
                datos<<cliente1.producto1<<endl;//guardando esos datos
                break;
            }

            case 1:
            {

                gets(cliente1.producto2);
                fflush(stdin);
                datos<<cliente1.producto2<<endl;
                break;
            }
            case 2:
            {
                cout<<"producto no.: "<<i+1;
                gets(cliente1.producto3);
                fflush(stdin);
                datos<<cliente1.producto3<<endl;
                break;
            }
            case 3:
            {

                gets(cliente1.producto4);
                fflush(stdin);
                datos<<cliente1.producto4<<endl;
                break;
            }
            case 4:
            {

                gets(cliente1.producto5);
                fflush(stdin);
                datos<<cliente1.producto5<<endl;
                break;
            }
            case 5:
            {

                gets(cliente1.producto6);
                fflush(stdin);
                datos<<cliente1.producto6<<endl;
                break;
            }
            case 6:
            {

                gets(cliente1.producto7);
                fflush(stdin);
                datos<<cliente1.producto7<<endl;
                break;
            }
            case 7:
            {

                gets(cliente1.producto8);
                fflush(stdin);
                datos<<cliente1.producto8<<endl;
                break;
            }
            case 8:
            {

                gets(cliente1.producto9);
                fflush(stdin);
                datos<<cliente1.producto9<<endl;
                break;
            }
            case 9:
            {

                gets(cliente1.producto10);
                fflush(stdin);
                datos<<cliente1.producto10<<endl;
                break;
            }



            }
        }

    }


    fflush(stdout);//limpiando buffer 

    datos.close();//cerrando el archivo "Cliente.txt
    system("cls");//Limpiando la pantalla
}



