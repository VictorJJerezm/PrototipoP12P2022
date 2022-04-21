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

    protected:

    private:
        string id, nombre1, nombre2, apellido1, apellido2, fechaN;
        string idEq, nombreEq, id2Eq, id3Eq;
};

#endif // PERSONA_H
