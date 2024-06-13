#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Conjunto {
    public:
        /* ... */
        void agregar(int elem);
        /* ... */
    private:
        vector<int> _elementos;
};

class Reservas{
    public:
        /* ... */
        void cancelar_reserva(string nombre);
        /* ... */
    private:
        int _cantidad_premium;
        set<string> _listado;
        map<string, bool> _es_premium;
};

class Examenes{
    public:
        /* ... */
        void agregar_examen(string nombre_alumno, int nota);
        // Pre: 0 <= nota <= 10 y nombre_alumno no fue ingresado
        // al sistema previamente.
        /* ... */
    private:
        set<string> _alumnos_aprobados;
        map<string, int> _notas_por_alumno;
};

class Inmobiliaria{
    public:
        /* ... */
        set<string> casas() const;
        bool esta_disponible() const;
        void cambiar_a_no_disponible(string direccion);
        // Pre: la casa 'direccion' ya se encuentra en el
        // sistema y está disponible.
        /* ... */
    private:
        set<string> _casas_disponibles;
        set<string> _casas_no_disponibles;
        map<string, bool> _casas_todas;
};

