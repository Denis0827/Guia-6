#include <vector>
#include <string>
using namespace std;

class Libro {
    public:
        Libro(string titulo, string autor, int cantidad_paginas); // construye e inicializa un nuevo objeto de la clase Libro.
        // Pre: |titulo|, |autor| y cantidad_paginas > 0

        int paginas_totales() const; // indica la cantidad de páginas totales que tiene el libro lib.
        // Pre: nada

        int pagina_actual() const; // indica el número de página a la que llegamos hasta el momento.
        // Pre: nada

        int porcentaje_leido() const; // indica el porcentaje del total del libro lib que ya leímos (contando como que ya leímos desde el principio hasta la página actual).
        // Pre: nada

        void avanzar_paginas(int n); // avanza la página actual hasta n páginas más adelante.
        // Pre: 0 < this->pagina_actual() + n <= this->paginas_totales()

        void saltar_a_pagina(int k); // salta la página actual hasta la página número k.
        // Pre: 0 < k <= this->paginas_totales()

        bool finalizado() const; // indica si ya terminamos de leer el libro completo o no.
        // Pre: nada

    private:
        string _titulo;
        string _autor;
        int _paginas_totales;
        int _pagina_actual;
};