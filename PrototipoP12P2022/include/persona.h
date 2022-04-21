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
        void entrenador();
        void altas1();
        void bajas1();
        void modificaciones1();
        void lectura1();
        void equipo();
        void altas2();
        void bajas2();
        void modificaciones2();
        void lectura2();
        void pais();
        void altas3();
        void bajas3();
        void modificaciones3();
        void lectura3();
        void puesto();
        void altas4();
        void bajas4();
        void modificaciones4();
        void lectura4();
        void jugador();
        void altas5();
        void bajas5();
        void modificaciones5();
        void lectura5();
        void informes();
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
