#include <vector>
#include <string>
#include <map>
using namespace std;

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
    // Post: devuelve la resta entre this->_peso_maximo y la suma de los
    // valores de this->_pesos_items

    bool buscar_item(string nombre) const;
    // Pre: nada
    // Post: devuelve true sii nombre es un elemento de this->_items

    int peso_de_item(string nombre) const;
    // Pre: nombre debe ser un elemento de this->items
    // Post: devuelve el valor de la clave nombre en this->_pesos_items

    int precio_de_item(string nombre) const;
    // Pre: nombre debe ser un elemento de this->items
    // Post: devuelve el valor de la clave nombre en this->_precios_por_item

    // Modificadores
    void borrar_item(string nombre);
    // Pre: nombre debe ser un elemento de this->items
    // Post: elimina el elemento de clave nombre dentro de this->_pesos_items
    // y this->_precios_por_item, además de eliminar el elemento nombre en
    // this->_items

    void agregar_item(string nombre, int peso, float precio);
    // Pre: nombre no debe ser un elemento de this->items, y 
    // el valor de peso debe ser menor o igual al peso disponible
    // Post: agrega el nuevo item en this->_pesos_items, this->_precios_por_item
    // y this->_items
    
    // Otras operaciones
    float monto_total() const;
    // Pre: nada
    // Post: devuelve la suma de los valores de this->_precios_por_item
    
private:
    int _peso_maximo;
    vector<string> _items;
    map<string, int> _pesos_items;
    map<string, float> _precios_por_item;
};