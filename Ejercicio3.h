#include <vector>
#include <string>
#include <set>
using namespace std;

class Fecha{
    public:
        Fecha(int dia, int mes, int anio); // constructor
        // Pre: 0 < dia < 32, 0 < mes < 13, anio > 0
        // Post: devuelve un elemento de clase Fecha con los valores pasados 
        // por parámetro 

        void avanzar_dia(); // modificador
        // Pre: nada
        // Post: actualiza los valores del elemento Fecha una vez que
        // avanzamos en uno el día

        void avanzar_n_dias(int n); // modificador
        // Pre: nada
        // Post: actualiza los valores del elemento Fecha una vez que
        // avanzamos en n días

        int dia() const; // observador
        // Pre: nada
        // Post: this->_dia

        int mes() const; // observador
        // Pre: nada
        // Post: this->_mes

        int anio() const; // observador
        // Pre: nada
        // Post: this->_anio

        bool operator==(const Fecha& f) const; // otras operaciones
        // Pre: nada
        // Post: compara si son iguales dos fechas
    
    private:
        int _dia;
        int _mes;
        int _anio;
};

class Usuario{
    public:
        Usuario(string nombre, int edad); // constructor
        // Pre: |nombre| y edad > 0
        // Post: devuelve un elemento Usuario con los valores pasados por
        // parametro

        string nombre() const; // observador
        // Pre: nada
        // Post: this->_nombre

        int edad() const; // observador
        // Pre: nada
        // Post: this->_edad

        void agregar_amigo(string nombre); // modificador
        // Pre: el amigo no debe estar en this->_amigos
        // Post: actualiza el set de this->_amigos agregando el nuevo amigo

        bool es_amigo(string nombre) const; // otras operaciones
        // Pre: |nombre| > 0
        // Post: devuelve true sii el amigo esta en this->_amigos

        bool es_popular() const; // observador
        // Pre: nada
        // Post: devuelve true sii el cardinal de this->_amigos es mayor a 10

    private:
        string _nombre;
        int _edad;
        set<string> _amigos;
        bool _es_popular;
};

class Multiconjunto{
    public:
        Multiconjunto(); // constructor
        // Pre: nada
        // Post: devuelve un nuevo elemento Multiconjunto

        void agregar(int e); // modificador
        // Pre: nada
        // Post: se agrega el elemento e a this->_elementos

        void quitar(int e); // modificador
        // Pre: e debe ser un elemento de this->_elementos
        // Post: se eliminan todos los elementos e de this->_elementos

        int contar_apariciones(int e) const; // otras operaciones
        // Pre: nada
        // Post: devuelve la cantidad de veces que aparece e en 
        // this->_elementos

        int cardinal() const; // observador
        // Pre: nada
        // Post: devuelve la cantidad de elementos de this->_elementos

        int cantidad_elementos_distintos() const; // observador
        // Pre: nada
        // Post: devuelve la cantidad de elementos distintos de
        // this->_elementos

    private:
        int _cantidad_distintos;
        vector<int> _elementos;
};
