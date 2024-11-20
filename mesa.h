#include <string>// Para usar cadenas de texto (std::string)
// Comprueba si el archivo ya se incluyó; si no, lo incluye
#ifndef MESA_H 
#define MESA_H

// Clase Mesa que hereda de la clase base Producto
class Mesa : public Producto {
    private:
		// Atributo específico de la mesa que almacena el número de patas
        int patas;  

    public:
        // Constructor por defecto de la mesa
        Mesa() : Producto(0, "", 0.0, 15, 0.01), patas(0) {};

        // Constructor que recibe parámetros específicos para crear una mesa
        // Llama al constructor de la clase que hereda (Producto) y 
		//establece el valor de las patas
        Mesa(int a, std::string m, float p, int pa) 
            : Producto(a, m, p, 15, 0.01), patas(pa) {};

        // Método que devuelve el numero de patas
        int get_patas();
};

// Devuelve el numero de patas de la mesa
int Mesa::get_patas() {
    return patas;
}

#endif 
