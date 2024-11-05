#include <string>

class Cama{
	private:
	int antig;
	std::string modelo;
	float precio;
	float impuesto;
	
	public:
	Cama();
	Cama(std::string mod, int an, float prec): modelo(mod), antig(an), precio(prec){};
	std::string get_modelo();
	int get_antig();
	float get_precio();
	void set_modelo(std::string);
	void set_antig(int);
	void set_precio(float);
	float impuestos(float);
};


std::string Cama::get_modelo(){
  return modelo;
}

int Cama::get_antig() {
	return antig;
}

float Cama::get_precio() {
	return precio;
}

void Cama::set_modelo(std::string mod){
  modelo = mod;
}

void Cama::set_antig(int an) {
	antig = an;
}

void Cama::set_precio(float prec){
	precio = prec;
}

float Cama::impuestos(float prec) {
	impuesto = prec * 0.30;
	return impuesto;
}

