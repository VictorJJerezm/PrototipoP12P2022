#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include "persona.h"

using namespace std;

persona::persona()
{
    //ctor
}

persona::~persona()
{
    //dtor
}
void persona::menuLog()
{
    int choice;
    char s;
    do

    {
    system("cls");
    cout << "\t\t\t\t---------------------------------------------"<<endl;
    cout << "\t\t\t\t   | Sistema de Recursos Humanos - Grupo 6 |"<<endl;
    cout << "\t\t\t\t---------------------------------------------"<<endl;
    cout << "\t\t\t\t 1. Ingresar"<<endl;
    cout << "\t\t\t\t 2. Salir"<<endl;

    cout << "\t\t\t\t---------------------------------------------"<<endl;
    cout << "\t\t\t\tOpcion a escoger : [1/2]"<<endl;
    cout << "\t\t\t\t---------------------------------------------"<<endl;
    cout << "\t\t\t\tSelecciona tu opcion: ";
    cin>>choice;

    switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        exit(0);
                        break;
                default:

                        cout<<"Hiciste algo mal, prueba otra vez"<<endl;

        }
        getch();
    }while(choice!= 2);
}

void persona::login()
{
    int count;
    string nombre, contra, n, c;
    system("cls");
    cout << "\t\t\t\t---------------------------------------------"<<endl;
    cout << "\t\t\t\t          | Ingresar al Sistema |"<<endl;
    cout << "\t\t\t\t---------------------------------------------"<<endl;
    cout << "\t\t\t\t Nombre de Usuario: ";
    cin >>nombre;
    cout << "\t\t\t\t Contraseña: ";
    cin >>contra;

    ifstream input("RegistroUP.txt");
        while(input>>n>>c)
        {
                if(n==nombre && c==contra)

                {
                        count=0;
                        system("cls");
                }
        }
        input.close();
        if(count==0)
        {
                cout<<"\n\t\t\t\tHola "<< nombre<<"\n\t\t\t\tTu Ingreso ha sido Exitoso!";
                cin.get();
                cin.get();
                persona::MenuGeneral();
        }
        else
        {
                cout<<"\n\t\t\t\tError en el accesos\n\t\t\t\tEl usuario o contraseña son invalidos\n";
        }
}

void persona::MenuGeneral()
{
    int choice;
    char s;
    do
    {
        system ("cls");

        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\t              | Menu General  |"<<endl;
        cout << "\t\t\t\t  Victor Josue Jerez Mijangos / 9959-21-2081"<<endl;
        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\t 1. Catalogos"<<endl;
        cout << "\t\t\t\t 2. Procesos"<<endl;
        cout << "\t\t\t\t 3. Informes"<<endl;
        cout << "\t\t\t\t 4. Salir"<<endl;

        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\tOpcion a escoger : [1/2/3/4]"<<endl;
        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\tSelecciona tu opcion: ";
        cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		catalogos();
    		cout << "\t\t\t\t ¿Quieres seguir en el apartado de Mantenimientos? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;
	/*case 2:
		generacionN();
		break;
	case 3:
		informesN();
		break;
	case 4:
		transferenciaB();
		break;
	case 5:
		generacionP();
		break;
    case 6:
        impuestos();
        break;*/
	case 4:
		exit(0);
	default:
		cout << "\n\t\t\t\tOpcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 4);
}
void persona::catalogos()
{
    int choice;
    char s;
    do
    {
        system ("cls");

        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\t           | Menu de Catalogos  |"<<endl;
        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\t 1. Entrenador"<<endl;
        cout << "\t\t\t\t 2. Equipo"<<endl;
        cout << "\t\t\t\t 3. Pais"<<endl;
        cout << "\t\t\t\t 4. Tipo de Puestos"<<endl;
        cout << "\t\t\t\t 5. Tipo de Jugadors"<<endl;
        cout << "\t\t\t\t 6. Salir"<<endl;

        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\tOpcion a escoger : [1/2/3/4/5/6]"<<endl;
        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\tSelecciona tu opcion: ";
        cin>>choice;

    switch(choice)
    {
    /*case 1:
    	do
    	{
    		catalogos();
    		cout << "\t\t\t\t ¿Quieres seguir en el apartado de Mantenimientos? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;
	case 2:
		generacionN();
		break;
	case 3:
		informesN();
		break;
	case 4:
		transferenciaB();
		break;
	case 5:
		generacionP();
		break;
    case 6:
        impuestos();
        break;*/
	case 6:
		MenuGeneral();
	default:
		cout << "\n\t\t\t\tOpcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 6);
}
