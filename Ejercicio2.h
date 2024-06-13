#include <vector>
#include <string>
using namespace std;

enum class Casillero {circulo, cruz, vacio};
enum class Jugador {circulo, cruz};

class Tateti{
    public:
        Tateti();
        // Pre: nada

        Jugador a_quien_le_toca();
        // Pre: el juego no esta terminado

        Casillero observar_posicion(int fila, int columna);
        // Pre: 0 <= fila, columna <= 2

        void hacer_jugada(Jugador, int fila, int columna);
        // Pre: 0 <= fila, columna <= 2

        bool esta_terminado();
        // Pre: nada

        bool hubo_empate();
        // Pre: el juego esta terminado

        Jugador quien_gano();
        // Pre: el juego esta terminado
    
    private:
        vector<vector<Casillero>> _tablero;
};
