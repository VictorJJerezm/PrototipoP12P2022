#ifndef PERSONA_H
#define PERSONA_H

using namespace std;

class persona
{
    public:
        persona();
        virtual ~persona();
        void menuLog();
        void login();
        void MenuGeneral();
        void catalogos();
        void entrenador();////Metodos para CRUD entrenador
        void altas1();
        void bajas1();
        void modificaciones1();
        void lectura1();
        void equipo();////Metodos para CRUD Equipos
        void altas2();
        void bajas2();
        void modificaciones2();
        void lectura2();
        void pais();////Metodos para CRUD pais
        void altas3();
        void bajas3();
        void modificaciones3();
        void lectura3();
        void puesto();////Metodos para CRUD puestos
        void altas4();
        void bajas4();
        void modificaciones4();
        void lectura4();
        void jugador();////Metodos para CRUD jugador
        void altas5();
        void bajas5();
        void modificaciones5();
        void lectura5();
        void informes(); ////Metodos para la parte de informes
        void infoEntrenador();
        void infoEquipo();
        void infopais();
        void infopuesto();
        void infoJugador();

    protected:

    private:
        string id, nombre1, nombre2, apellido1, apellido2, fechaN;
        string idEq, nombreEq, id2Eq, id3Eq;
        string idP, nombreP;
        string idPuesto, nombrePuesto, Salario;
        string idJuga, nombrePos;
};

#endif // PERSONA_H
