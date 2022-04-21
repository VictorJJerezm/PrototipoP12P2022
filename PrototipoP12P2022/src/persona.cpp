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
		procesos();
		break;
	case 3:
		informes();
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
        cout << "\t\t\t\t 6. Regresar"<<endl;

        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\tOpcion a escoger : [1/2/3/4/5/6]"<<endl;
        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\tSelecciona tu opcion: ";
        cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		entrenador();
    		cout << "\t\t\t\t ¿Quieres seguir en el apartado de Mantenimientos? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;
	case 2:
		equipo();
		break;
	/*case 3:
		pais();
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
void persona::entrenador()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\t        |  CRUD - Entrenador  |"<<endl;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\t 1. Altas"<<endl;
	cout<<"\t\t\t\t 2. Bajas"<<endl;
	cout<<"\t\t\t\t 3. Modificaciones"<<endl;
	cout<<"\t\t\t\t 4. Lectura"<<endl;
	cout<<"\t\t\t\t 5. Regresar"<<endl;

	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		altas1();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		bajas1();
		break;
	case 3:
		modificaciones1();
		break;
	case 4:
		lectura1();
		break;
	case 5:
		catalogos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 5);
}
void persona::altas1()
{
	system("cls");
	fstream file;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t     | Ingresar informacion Entrenador | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\tIngresa Id del Entrenador: ";
	cin >>id;
	cout <<"\t\t\t\tIngresa el 1er nombre del Entrenador: ";
	cin >>nombre1;
	cout <<"\t\t\t\tIngresa el 2do nombre del Entrenador: ";
	cin >>nombre2;
	cout <<"\t\t\t\tIngresa el 1er apellido del Entrenador: ";
	cin >>apellido1;
	cout <<"\t\t\t\tIngresa el 2do apellido del Entrenador: ";
	cin >>apellido2;
	cout <<"\t\t\t\tIngresa fecha de nacimiento del Entrenador: ";
	cin >>fechaN;
	cout <<"\n\n\t\t\t\t ¡El ingreso fue exitoso! ";
	file.open("Informacion.txt", ios::app | ios::out | ios::binary);
	file<<std::left<<std::setw(10)<< id <<std::left<<std::setw(10)<< nombre1 <<std::left<<std::setw(10)<< nombre2 <<std::left<<std::setw(10)<< apellido1 <<std::left<<std::setw(10)<< apellido2 <<std::left<<std::setw(10)<< fechaN << "\n";
	file.close();
}
void persona::bajas1()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Borrar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("Informacion.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Entrenador que quiere borrar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> id >> nombre1 >> nombre2 >> apellido1 >> apellido2 >> fechaN;
		while(!file.eof())
		{
			if(participant_codigo!= id)
			{
				file1<<std::left<<std::setw(10)<< id <<std::left<<std::setw(10)<< nombre1 <<std::left<<std::setw(10)<< nombre2 <<std::left<<std::setw(10)<< apellido1 <<std::left<<std::setw(10)<< apellido2 <<std::left<<std::setw(15)<< fechaN << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> nombre1  >> nombre2 >> apellido1 >> apellido2 >> fechaN;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Entrenador no encontrado...";
		}
		file1.close();
		file.close();
		remove("Informacion.txt");
		rename("registros.txt","Informacion.txt");
		}
}
void persona::modificaciones1()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Modificar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("Informacion.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Entrenador que quiere modificar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> id >> nombre1 >> nombre2 >> apellido1 >> apellido2 >> fechaN;
		while(!file.eof())
		{
			if(participant_codigo!=id)
			{
			 file1<<std::left<<std::setw(10)<< id <<std::left<<std::setw(10)<< nombre1 <<std::left<<std::setw(10)<< nombre2 <<std::left<<std::setw(10)<< apellido1 <<std::left<<std::setw(10)<< apellido2 <<std::left<<std::setw(15)<< fechaN << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese codigo del Entrenador: ";
				cin>>id;
				cout<<"\t\t\tIngrese 1er Nombre del Entrenador: ";
				cin>>nombre1;
				cout<<"\t\t\tIngrese 2do Nombre del Entrenador: ";
				cin>>nombre2;
				cout<<"\t\t\tIngrese 1er Apellido del Entrenador: ";
				cin>>apellido1;
				cout<<"\t\t\tIngrese 2do Apellido del Entrenador: ";
				cin>>apellido2;
				cout<<"\t\t\tIngrese fecha de nacimiento del Entrenador: ";
				cin>>fechaN;
				file1<<std::left<<std::setw(10)<< id <<std::left<<std::setw(10)<< nombre1 <<std::left<<std::setw(10)<< nombre2 <<std::left<<std::setw(10)<< apellido1 <<std::left<<std::setw(10)<< apellido2 <<std::left<<std::setw(15)<< fechaN << "\n";
				found++;
			}
			file >> id >> nombre1 >> nombre2 >> apellido1 >> apellido2 >> fechaN;

		}
		file1.close();
		file.close();
		remove("Informacion.txt");
		rename("registros.txt","Informacion.txt");
	}
}
void persona::lectura1()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Informacion.txt",ios::in);
	if(!file)
	{
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
	    cout <<"\t\t\t\t         | Informacion Solicitada | "<<endl;
	    cout <<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_codigo;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
	    cout <<"\t\t\t\t         | Informacion Solicitada | "<<endl;
	    cout <<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\nIngrese id del Entrenador que quiere buscar: ";
		cin>>participant_codigo;
		file >> id >> nombre1 >> nombre2 >> apellido1 >> apellido2 >> fechaN;
		while(!file.eof())
		{
			if(participant_codigo==id)
			{
				cout<<"\n\n\t\t\t ID del Entrenador: "<<id<<endl;
				cout<<"\t\t\t 1er Nombre del Entrenador: "<<nombre1<<endl;
				cout<<"\t\t\t 2do Nombre del Entrenador: "<<nombre2<<endl;
				cout<<"\t\t\t 1er Apellido del Entrenador: "<<apellido1<<endl;
				cout<<"\t\t\t 2do Apellido del Entrenador: "<<apellido2<<endl;
				cout<<"\t\t\t Fecha de Nacimiento "<<fechaN<<endl;
				found++;
			}
			file >> id >> nombre1 >> nombre2 >> apellido1 >> apellido2 >> fechaN;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Entrenador no encontrado...";
		}
		file.close();
	}
}
void persona::equipo()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\t        |  CRUD - Entrenador  |"<<endl;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\t 1. Altas"<<endl;
	cout<<"\t\t\t\t 2. Bajas"<<endl;
	cout<<"\t\t\t\t 3. Modificaciones"<<endl;
	cout<<"\t\t\t\t 4. Lectura"<<endl;
	cout<<"\t\t\t\t 5. Regresar"<<endl;

	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		altas2();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		bajas2();
		break;
	case 3:
		modificaciones2();
		break;
	case 4:
		lectura2();
		break;
	case 5:
		catalogos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 5);
}
void persona::altas2()
{
	system("cls");
	fstream file;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t     | Ingresar informacion Equipo | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\tIngresa Id del Equipo: ";
	cin >>idEq;
	cout <<"\t\t\t\tIngresa el Nombre del Equipo: ";
	cin >>nombreEq;
	cout <<"\t\t\t\tIngresa Id entrenador Equipo: ";
	cin >>id2Eq;
	cout <<"\t\t\t\tIngresa el Id del Tipo de Deporte: ";
	cin >>id3Eq;
	cout <<"\n\n\t\t\t\t ¡El ingreso fue exitoso! ";
	file.open("InformacionE.txt", ios::app | ios::out | ios::binary);
	file<<std::left<<std::setw(10)<< idEq <<std::left<<std::setw(10)<< nombreEq <<std::left<<std::setw(10)<< id2Eq <<std::left<<std::setw(10)<< id3Eq << "\n";
	file.close();
}
void persona::bajas2()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Borrar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionE.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Equipo que quiere borrar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> idEq >> nombreEq >> id2Eq >> id3Eq;
		while(!file.eof())
		{
			if(participant_codigo!= idEq)
			{
				file1<<std::left<<std::setw(10)<< idEq <<std::left<<std::setw(10)<< nombreEq <<std::left<<std::setw(10)<< id2Eq <<std::left<<std::setw(10)<< id3Eq << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idEq >> nombreEq  >> id2Eq >> id3Eq;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Equipo no encontrado...";
		}
		file1.close();
		file.close();
		remove("InformacionE.txt");
		rename("registros.txt","InformacionE.txt");
		}
}
void persona::modificaciones2()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Modificar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionE.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Equipo que quiere modificar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> idEq >> nombreEq >> id2Eq >> id3Eq;
		while(!file.eof())
		{
			if(participant_codigo!=idEq)
			{
			 file1<<std::left<<std::setw(10)<< idEq <<std::left<<std::setw(10)<< nombreEq <<std::left<<std::setw(10)<< id2Eq <<std::left<<std::setw(10)<< id3Eq << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese codigo del Equipo: ";
				cin>>idEq;
				cout<<"\t\t\tIngrese Nombre del Equipo: ";
				cin>>nombreEq;
				cout<<"\t\t\tIngrese Id del Entrenador: ";
				cin>>id2Eq;
				cout<<"\t\t\tIngrese Id del Deporte: ";
				cin>>id3Eq;
				file1<<std::left<<std::setw(10)<< idEq <<std::left<<std::setw(10)<< nombreEq <<std::left<<std::setw(10)<< id2Eq <<std::left<<std::setw(10)<< id3Eq << "\n";
				found++;
			}
			file >> idEq >> nombreEq >> id2Eq >> id3Eq;

		}
		file1.close();
		file.close();
		remove("InformacionE.txt");
		rename("registros.txt","InformacionE.txt");
	}
}
void persona::lectura2()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("InformacionE.txt",ios::in);
	if(!file)
	{
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
	    cout <<"\t\t\t\t         | Informacion Solicitada | "<<endl;
	    cout <<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_codigo;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
	    cout <<"\t\t\t\t         | Informacion Solicitada | "<<endl;
	    cout <<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\nIngrese id del Equipo que quiere buscar: ";
		cin>>participant_codigo;
		file >> idEq >> nombreEq >> id2Eq >> id3Eq;
		while(!file.eof())
		{
			if(participant_codigo==idEq)
			{
				cout<<"\n\n\t\t\t ID del Equipo: "<<idEq<<endl;
				cout<<"\t\t\t Nombre del Equipo: "<<nombreEq<<endl;
				cout<<"\t\t\t ID del Entrenador "<<id2Eq<<endl;
				cout<<"\t\t\t ID del Deporte: "<<id3Eq<<endl;
				found++;
			}
			file >> idEq >> nombreEq >> id2Eq >> id3Eq;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Equipo no encontrado...";
		}
		file.close();
	}
}
