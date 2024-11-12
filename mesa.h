#include <string>

class Mesa{
	private:
	int antig;
	std::string modelo;
	float precio;
	float impuesto;
	int durabilidad = 15;
	float descuento = 0.01;
	
	public:
	Mesa();
	Mesa(std::string mod, int an, float prec): modelo(mod), antig(an), precio(prec){};;
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


std::string Mesa::get_modelo(){
  return modelo;
}

int Mesa::get_antig() {
	return antig;
}

float Mesa::get_precio() {
	return precio;
}

void Mesa::set_modelo(std::string mod){
  modelo = mod;
}

void Mesa::set_antig(int an) {
	antig = an;
}

void Mesa::set_precio(float prec){
	precio = prec;
}

float Mesa::impuestos(float prec) {
	impuesto = prec * 0.30;
	return impuesto;
}

int Mesa::cuanto_dura(int antiguedad) {
	return durabilidad - antiguedad;
}

float Mesa::descuento_vejez(int antiguedad, float precio) {
	return precio - (precio *(antiguedad * descuento));
}