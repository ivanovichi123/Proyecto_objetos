#include <iostream>
#include <string>
#include "television.h"
#include "cama.h"
#include "mesa.h"

int main(){

  Television television_1("sony", 2, 187.5);
  std::cout << television_1.get_modelo() << std::endl;
  std::cout << television_1.get_antig() << std::endl;
  std::cout << television_1.get_precio() << std::endl;
  std::cout << television_1.impuestos(television_1.get_precio()) << std::endl;

  Cama cama_1("springair", 4, 567.3);
  std::cout << cama_1.get_modelo() << std::endl;
  std::cout << cama_1.get_antig() << std::endl;
  std::cout << cama_1.get_precio() << std::endl;
  std::cout << cama_1.impuestos(cama_1.get_precio()) << std::endl;
  
  Mesa mesa_1("truper", 1, 964.2);
  std::cout << mesa_1.get_modelo() << std::endl;
  std::cout << mesa_1.get_antig() << std::endl;
  std::cout << mesa_1.get_precio() << std::endl;
  std::cout << mesa_1.impuestos(mesa_1.get_precio()) << std::endl;
}
