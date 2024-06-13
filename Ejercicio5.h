#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Fecha{
    public:
        Fecha(int dia_del_anio, int anio); // constructor
        // Pre: 0 < dia_del_anio < 372, anio > 0
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
        // Post: devuelve el dia de Fecha

        int mes() const; // observador
        // Pre: nada
        // Post: devuelve el mes de Fecha

        int anio() const; // observador
        // Pre: nada
        // Post: this->_anio

        bool operator==(const Fecha& f) const; // otras operaciones
        // Pre: nada
        // Post: compara si son iguales dos fechas
    
    private:
        int _dia_del_anio;
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

        bool es_popular() const; // otras operaciones
        // Pre: nada
        // Post: devuelve true sii el this->_cantidad_amigos es mayor a 10

    private:
        string _nombre;
        int _edad;
        set<string> _amigos;
        int _cantidad_amigos;
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
        map<int,int> _elementos;
};

class Carrito{

public:
    // Constructor
    Carrito(int peso_maximo);
    // Pre: peso_maximo > 0
    // Post: devuelve un elemento de clase Carrito con el valor pasado 
    // por parámetro 
    
    // Observadores
    int peso_disponible() const;
    // Pre: nada
    // Post: this->_peso_maximo - this->_peso_total

    bool buscar_item(string nombre) const;
    // Pre: nada
    // Post: devuelve true sii nombre es una clave de this->_pesos_items

    int peso_de_item(string nombre) const;
    // Pre: nombre debe ser una clave de this->_pesos_items
    // Post: devuelve el valor de la clave

    int precio_de_item(string nombre) const;
    // Pre: nombre debe ser una clave de this->_precios_por_item
    // Post: devuelve el valor de la clave

    // Modificadores
    void borrar_item(string nombre);
    // Pre: nombre debe ser una clave de this->_pesos_items
    // Post: elimina el elemento de clave nombre dentro de this->_pesos_items
    // y this->_precios_por_item

    void agregar_item(string nombre, int peso, float precio);
    // Pre: nombre no debe ser una clave de this->_pesos_items, y 
    // el valor de peso debe ser menor o igual al peso disponible
    // Post: agrega el nuevo item en this->_pesos_items y this->_precios_por_item
    
    // Otras operaciones
    float monto_total() const;
    // Pre: nada
    // Post: this->_pesos_total
    
private:
    int _peso_maximo;
    int _peso_total;
    map<string, int> _pesos_items;
    map<string, float> _precios_por_item;
};