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
    cout << "\t\t\t\t      | Login - Segundo Parcial |"<<endl;
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
        cout << "\t\t\t\t 2. Informes"<<endl;
        cout << "\t\t\t\t 3. Salir"<<endl;

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
	case 2:
		informes();
		break;
	case 3:
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
        cout << "\t\t\t\t 5. Tipo de Jugador"<<endl;
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
	case 3:
		pais();
		break;
	case 4:
		puesto();
		break;
	case 5:
		jugador();
		break;
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
	cout<<"\t\t\t\t        |  CRUD - Equipo  |"<<endl;
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
void persona::pais()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\t        |  CRUD - pais |"<<endl;
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
    		altas3();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		bajas3();
		break;
	case 3:
		modificaciones3();
		break;
	case 4:
		lectura3();
		break;
	case 5:
		catalogos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 5);
}
void persona::altas3()
{
	system("cls");
	fstream file;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t     | Ingresar informacion Pais | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\tIngresa Id del Pais: ";
	cin >>idP;
	cout <<"\t\t\t\tIngresa el Nombre del Pais: ";
	cin >>nombreP;
	cout <<"\n\n\t\t\t\t ¡El ingreso fue exitoso! ";
	file.open("InformacionP.txt", ios::app | ios::out | ios::binary);
	file<<std::left<<std::setw(10)<< idP <<std::left<<std::setw(10)<< nombreP << "\n";
	file.close();
}
void persona::bajas3()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Borrar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionP.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Pais que quiere borrar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> idP >> nombreP;
		while(!file.eof())
		{
			if(participant_codigo!= idP)
			{
				file1<<std::left<<std::setw(10)<< idP <<std::left<<std::setw(10)<< nombreP << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idP >> nombreP;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Pais no encontrado...";
		}
		file1.close();
		file.close();
		remove("InformacionP.txt");
		rename("registros.txt","InformacionP.txt");
		}
}
void persona::modificaciones3()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Modificar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionP.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Pais que quiere modificar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> idP >> nombreP;
		while(!file.eof())
		{
			if(participant_codigo!=idP)
			{
			 file1<<std::left<<std::setw(10)<< idP <<std::left<<std::setw(10)<< nombreP << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese codigo del Pais: ";
				cin>>idP;
				cout<<"\t\t\tIngrese Nombre del Pais: ";
				cin>>nombreP;
				file1<<std::left<<std::setw(10)<< idP <<std::left<<std::setw(10)<< nombreP << "\n";
				found++;
			}
			file >> idP >> nombreP;

		}
		file1.close();
		file.close();
		remove("InformacionP.txt");
		rename("registros.txt","InformacionP.txt");
	}
}
void persona::lectura3()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("InformacionP.txt",ios::in);
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
		cout<<"\nIngrese id del pais que quiere buscar: ";
		cin>>participant_codigo;
		file >> idP >> nombreP;
		while(!file.eof())
		{
			if(participant_codigo==idP)
			{
				cout<<"\n\n\t\t\t ID del Pais: "<<idP<<endl;
				cout<<"\t\t\t Nombre del Pais: "<<nombreP<<endl;
				found++;
			}
			file >> idP >> nombreP;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Pais no encontrado...";
		}
		file.close();
	}
}
void persona::puesto()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\t        |  CRUD - Puestos |"<<endl;
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
    		altas4();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		bajas4();
		break;
	case 3:
		modificaciones4();
		break;
	case 4:
		lectura4();
		break;
	case 5:
		catalogos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 5);
}
void persona::altas4()
{
	system("cls");
	fstream file;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t     | Ingresar informacion Puestos | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\tIngresa Id del Puesto: ";
	cin >>idPuesto;
	cout <<"\t\t\t\tIngresa el Nombre del Puesto: ";
	cin >>nombrePuesto;
    cout <<"\t\t\t\tIngresa el Salario: ";
	cin >>Salario;
	cout <<"\n\n\t\t\t\t ¡El ingreso fue exitoso! ";
	file.open("InformacionPuestos.txt", ios::app | ios::out | ios::binary);
	file<<std::left<<std::setw(10)<< idPuesto <<std::left<<std::setw(10)<< nombrePuesto <<std::left<<std::setw(10)<< Salario<< "\n";
	file.close();
}
void persona::bajas4()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Borrar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionPuestos.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Puesto que quiere borrar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> idPuesto >> nombrePuesto >> Salario;
		while(!file.eof())
		{
			if(participant_codigo!= idPuesto)
			{
				file1<<std::left<<std::setw(10)<< idPuesto <<std::left<<std::setw(10)<< nombrePuesto <<std::left<<std::setw(10)<< Salario << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idPuesto >> nombrePuesto >> Salario;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Puesto no encontrado...";
		}
		file1.close();
		file.close();
		remove("InformacionPuestos.txt");
		rename("registros.txt","InformacionPuestos.txt");
		}
}
void persona::modificaciones4()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Modificar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionPuestos.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Puesto que quiere modificar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> idPuesto >> nombrePuesto >> Salario;
		while(!file.eof())
		{
			if(participant_codigo!=idPuesto)
			{
			 file1<<std::left<<std::setw(10)<< idPuesto <<std::left<<std::setw(10)<< nombrePuesto <<std::left<<std::setw(10)<< Salario << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese codigo del Puesto: ";
				cin>>idPuesto;
				cout<<"\t\t\tIngrese Nombre del Puesto: ";
				cin>>nombrePuesto;
				cout<<"\t\t\tIngrese Salario: ";
				cin>>Salario;
				file1<<std::left<<std::setw(10)<< idPuesto <<std::left<<std::setw(10)<< nombrePuesto <<std::left<<std::setw(10)<< Salario << "\n";
				found++;
			}
			file >> idPuesto >> nombrePuesto >> Salario;

		}
		file1.close();
		file.close();
		remove("InformacionPuestos.txt");
		rename("registros.txt","InformacionPuestos.txt");
	}
}
void persona::lectura4()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("InformacionPuestos.txt",ios::in);
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
		cout<<"\nIngrese id del Puesto que quiere buscar: ";
		cin>>participant_codigo;
		file >> idPuesto >> nombrePuesto >> Salario;
		while(!file.eof())
		{
			if(participant_codigo==idPuesto)
			{
				cout<<"\n\n\t\t\t ID del Puesto: "<<idPuesto<<endl;
				cout<<"\t\t\t Nombre del Puesto: "<<nombrePuesto<<endl;
				cout<<"\t\t\t Salario: "<<nombrePuesto<<endl;
				found++;
			}
			file >> idPuesto >> nombrePuesto >> Salario;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Puesto no encontrado...";
		}
		file.close();
	}
}
void persona::jugador()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout<<"\t\t\t\t        |  CRUD - Jugador |"<<endl;
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
    		altas5();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		bajas5();
		break;
	case 3:
		modificaciones5();
		break;
	case 4:
		lectura5();
		break;
	case 5:
		catalogos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 5);
}
void persona::altas5()
{
	system("cls");
	fstream file;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t     | Ingresar informacion Jugador | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\tIngresa Id del Jugador: ";
	cin >>idJuga;
	cout <<"\t\t\t\tIngresa el Nombre de la posicion: ";
	cin >>nombrePos;
	cout <<"\n\n\t\t\t\t ¡El ingreso fue exitoso! ";
	file.open("InformacionJugador.txt", ios::app | ios::out | ios::binary);
	file<<std::left<<std::setw(10)<< idJuga <<std::left<<std::setw(10)<< nombrePos << "\n";
	file.close();
}
void persona::bajas5()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Borrar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionJugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Jugador que quiere borrar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> idJuga >> nombrePos;
		while(!file.eof())
		{
			if(participant_codigo!= idJuga)
			{
				file1<<std::left<<std::setw(10)<< idJuga <<std::left<<std::setw(10)<< nombrePos << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idJuga >> nombrePos;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Jugador no encontrado...";
		}
		file1.close();
		file.close();
		remove("InformacionJugador.txt");
		rename("registros.txt","InformacionJugador.txt");
		}
}
void persona::modificaciones5()
{
	system("cls");
	fstream file,file1;
	string participant_codigo;
	int found=0;
	cout<<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion a Modificar | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionJugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Jugador que quiere modificar: ";
		cin>>participant_codigo;
		file1.open("registros.txt",ios::app | ios::out);
		file >> idJuga >> nombrePos;
		while(!file.eof())
		{
			if(participant_codigo!=idJuga)
			{
			 file1<<std::left<<std::setw(10)<< idJuga <<std::left<<std::setw(10)<< nombrePos << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese codigo del Jugador: ";
				cin>>idJuga;
				cout<<"\t\t\tIngrese Nombre de la posicion: ";
				cin>>nombrePos;
				file1<<std::left<<std::setw(10)<< idJuga <<std::left<<std::setw(10)<< nombrePos << "\n";
				found++;
			}
			file >> idJuga >> nombrePos;

		}
		file1.close();
		file.close();
		remove("InformacionJugador.txt");
		rename("registros.txt","InformacionJugador.txt");
	}
}
void persona::lectura5()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("InformacionJugador.txt",ios::in);
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
		cout<<"\nIngrese id del Jugador que quiere buscar: ";
		cin>>participant_codigo;
		file >> idJuga >> nombrePos;
		while(!file.eof())
		{
			if(participant_codigo==idJuga)
			{
				cout<<"\n\n\t\t\t ID del Jugador: "<<idJuga<<endl;
				cout<<"\t\t\t Nombre de la posicion: "<<nombrePos<<endl;
				found++;
			}
			file >> idJuga >> nombrePos;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Jugador no encontrado...";
		}
		file.close();
	}
}
void persona::informes()
{
    int choice;
    char s;
    do
    {
        system ("cls");

        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\t           | Menu de Informes  |"<<endl;
        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\t 1. Informes de Entrenadores"<<endl;
        cout << "\t\t\t\t 2. Informes de Equipos"<<endl;
        cout << "\t\t\t\t 3. Informes de Paises"<<endl;
        cout << "\t\t\t\t 4. Informes de Tipos de Puestos"<<endl;
        cout << "\t\t\t\t 5. Informes de Tipos de Jugadores"<<endl;
        cout << "\t\t\t\t 6. Regresar"<<endl;

        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\tOpcion a escoger : [1/2/3/4/5/6]"<<endl;
        cout << "\t\t\t\t---------------------------------------------"<<endl;
        cout << "\t\t\t\tSelecciona tu opcion: ";
        cin>>choice;

    switch(choice)
    {
    case 1:
        infoEntrenador();
		break;
	case 2:
		infoEquipo();
		break;
	case 3:
		infopais();
		break;
	case 4:
		infopuesto();
		break;
	case 5:
		infoJugador();
		break;
	case 6:
		MenuGeneral();
	default:
		cout << "\n\t\t\t\tOpcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 6);
}
void persona::infoEntrenador()
{
	system("cls");
	fstream file;
	int total=0;

	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion de Entrenadores | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("Informacion.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre1 >> nombre2 >> apellido1 >> apellido2 >> fechaN;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Entrenador: "<<id<<endl;
			cout<<"\t\t\t 1er Nombre Entrenador: "<<nombre1<<endl;
			cout<<"\t\t\t 2do Nombre Entrenador: "<<nombre2<<endl;
			cout<<"\t\t\t 1er Apellido Entrenador: "<<apellido1<<endl;
			cout<<"\t\t\t 2do Apellido Entrenador: "<<apellido2<<endl;
			cout<<"\t\t\t Fecha de Nacimiento: "<<fechaN<<endl;
			file >> id >> nombre1 >> nombre2 >> apellido1 >> apellido2 >> fechaN;
		}
		cout<<"\n\nPresione cualquier tecla para regresar al menu anterior "<<endl;
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void persona::infoEquipo()
{
	system("cls");
	fstream file;
	int total=0;

	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion de Equipo | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionE.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idEq >> nombreEq >> id2Eq >> id3Eq;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Equipo: "<<idEq<<endl;
			cout<<"\t\t\t Nombre del Equipo: "<<nombreEq<<endl;
			cout<<"\t\t\t Id del Entrenador: "<<id2Eq<<endl;
			cout<<"\t\t\t Id del Deporte: "<<id3Eq<<endl;
			file >> idEq >> nombreEq >> id2Eq >> id3Eq;
		}
		cout<<"\n\nPresione cualquier tecla para regresar al menu anterior "<<endl;
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void persona::infopais()
{
	system("cls");
	fstream file;
	int total=0;

	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion de Pais | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionP.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idP >> nombreP;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Pais: "<<idP<<endl;
			cout<<"\t\t\t Nombre del Pais: "<<nombreP<<endl;
			file >> idP >> nombreP;
		}
		cout<<"\n\nPresione cualquier tecla para regresar al menu anterior "<<endl;
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void persona::infopuesto()
{
	system("cls");
	fstream file;
	int total=0;

	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion de Puestos | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionPuestos.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idPuesto >> nombrePuesto >> Salario;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Puesto: "<<idPuesto<<endl;
			cout<<"\t\t\t Nombre del Puesto: "<<nombrePuesto<<endl;
			cout<<"\t\t\t Salario: "<<Salario<<endl;
			file >> idPuesto >> nombrePuesto >> Salario;
		}
		cout<<"\n\nPresione cualquier tecla para regresar al menu anterior "<<endl;
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void persona::infoJugador()
{
	system("cls");
	fstream file;
	int total=0;

	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	cout <<"\t\t\t\t         | Informacion de Jugadores | "<<endl;
	cout <<"\t\t\t\t---------------------------------------------"<<endl;
	file.open("InformacionJugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idJuga >> nombrePos;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Jugador: "<<idJuga<<endl;
			cout<<"\t\t\t Nombre de l Posicion: "<<nombrePos<<endl;
			file >> idJuga >> nombrePos;
		}
		cout<<"\n\nPresione cualquier tecla para regresar al menu anterior "<<endl;
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
