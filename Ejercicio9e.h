#include <vector>
#include <string>
using namespace std;

class Palabras{
    public:
        // Constructor
        Palabras();
        // Pre: nada

        // Observadores
        bool contiene(string p) const;
        // Pre: p debe contener únicamente letras del abecedario

        // Modificadores
        void agregar_palabras(vector<string> ps);
        // Pre: ps debe estar compuesto por strings que contiene
        // únicamente letras del abecedario

        void borrar_palabra(string p);
        // Pre: p debe estar en this->_palabras

        // Otras operaciones
        int contar_vocales() const;
        // Pre: nada

    private:
        vector<string> _palabras;
        int _cant_vocales;
};
