#include "Ejercicio2.h"

Tateti::Tateti() {
    this->_tablero = {{Casillero::vacio, Casillero::vacio, Casillero::vacio}, {Casillero::vacio, Casillero::vacio, Casillero::vacio}, {Casillero::vacio, Casillero::vacio, Casillero::vacio}};
}

Jugador Tateti::a_quien_le_toca() {
    int i = 0;
    int cant_cruz = 0;
    int cant_circulo = 0;
    
    while(i < 3) {
        for(int j = 0; j < 3; j++) {
            if(this->_tablero[i][j] == Casillero::cruz) {
                cant_cruz++;
            } else if(this->_tablero[i][j] == Casillero::circulo) {
                cant_circulo++;
            }
        }
        i++;
    }

    Jugador player = Jugador::circulo;
    if(cant_cruz == cant_circulo) {
        player = Jugador::cruz;
    }

    return player;
}

Casillero Tateti::observar_posicion(int fila, int columna) {
    return this->_tablero[fila][columna];
}

void Tateti::hacer_jugada(Jugador player, int fila, int columna) {
    if(player == Jugador::circulo) {
        this->_tablero[fila][columna] = Casillero::circulo;
    } else {
        this->_tablero[fila][columna] = Casillero::cruz;
    }
}

bool Tateti::esta_terminado() {
    for(int i = 0; i < 3; i++) {
        if(this->_tablero[i][0] == this->_tablero[i][1] && this->_tablero[i][1] == this->_tablero[i][2] && this->_tablero[i][0] != Casillero::vacio) {
            return true;
        }
    }

    for(int i = 0; i < 3; i++) {
        if(this->_tablero[0][i] == this->_tablero[1][i] && this->_tablero[1][i] == this->_tablero[2][i] && this->_tablero[0][i] != Casillero::vacio) {
            return true;
        }
    }

    if(this->_tablero[0][0] == this->_tablero[1][1] && this->_tablero[1][1] == this->_tablero[2][2] && this->_tablero[0][0] != Casillero::vacio) {
        return true;
    } 

    if(this->_tablero[0][2] == this->_tablero[1][1] && this->_tablero[1][1] == this->_tablero[2][0] && this->_tablero[2][0] != Casillero::vacio) {
        return true;
    }

    return false;
}

bool Tateti::hubo_empate() {
    int no_vacios = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(this->_tablero[i][j] != Casillero::vacio) {
                no_vacios++;
            }
        }
    }

    if(no_vacios == 9) {
        return true;
    } else {
        return false;
    }
}

Jugador Tateti::quien_gano() {
    int i = 0;
    int cant_cruz = 0;
    int cant_circulo = 0;
    
    while(i < 3) {
        for(int j = 0; j < 3; j++) {
            if(this->_tablero[i][j] == Casillero::cruz) {
                cant_cruz++;
            } else if(this->_tablero[i][j] == Casillero::circulo) {
                cant_circulo++;
            }
        }
        i++;
    }

    if(cant_cruz > cant_circulo) {
        return Jugador::cruz;
    } else {
        return Jugador::circulo;
    }
}