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

    protected:

    private:
        string id, nombre1, nombre2, apellido1, apellido2, fechaN;
};

#endif // PERSONA_H
