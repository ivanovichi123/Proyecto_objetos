#include <string>

class Television{
	private:
	int antig;
	std::string modelo;
	float precio;
	float impuesto;
	int durabilidad = 7;
	float descuento = 0.05;
	
	public:
	Television();
	Television(std::string mod, int an, float prec): modelo(mod), antig(an), precio(prec){};
	std::string get_modelo();
	int get_antig();
	float get_precio();
	void set_modelo(std::string);
	void set_antig(int);
	void set_precio(float);
	float impuestos(float);
	int cuanto_dura(int);
	float descuento_vejez(int, float);
};


std::string Television::get_modelo(){
  return modelo;
}

int Television::get_antig() {
	return antig;
}

float Television::get_precio() {
	return precio;
}

void Television::set_modelo(std::string mod){
  modelo = mod;
}

void Television::set_antig(int an) {
	antig = an;
}

void Television::set_precio(float prec){
	precio = prec;
}

float Television::impuestos(float prec) {
	impuesto = prec * 0.30;
	return impuesto;
}

int Television::cuanto_dura(int antiguedad) {
	return durabilidad - antiguedad;
}

float Television::descuento_vejez(int antiguedad, float precio) {
	return precio - (precio *(antiguedad * descuento));
}