# Proyecto_objetos

## Contexto

Eres el propietario de una tienda que necesita llevar un inventario detallado de sus productos. Este inventario debe incluir información esencial como el precio de venta, el modelo y la antigüedad de cada artículo. Además, el sistema debe permitir agregar nuevos productos junto con sus precios y facilitar el cálculo de los impuestos asociados al almacenamiento de los productos. Con esta herramienta, podrás gestionar de forma eficiente tu inventario, manteniendo los datos actualizados y optimizando los costos de mantenimiento de tus artículos en venta.

## Funcionalidad

El programa permite gestionar un inventario de productos en venta, como camas, mesas y televisores. Con él, puedes ver la información de cada producto, cambiar sus detalles cuando sea necesario y calcular los impuestos que se deben pagar por tenerlos en el inventario. También, el programa calcula cuánto tiempo puede durar cada producto y aplica descuentos según su antigüedad, ayudando a organizar mejor los productos y sus costos de almacenamiento.

## Descripción del UML

Este diagrama UML representa un sistema de inventario de productos compuesto por diferentes tipos de muebles y electrodomésticos.
- **Productos**
  - La clase `Productos` se utiliza mediante hereda atributos a las clases `Cama`, `Mesa`, y `Television`.
  - **Atributos:**
    - `antig` (`int`): antigüedad del producto.
    - `modelo` (`string`): modelo del producto.
    - `precio` (`float`): precio del producto.

- **Cama, Mesa, Television**
  - Cada una de estas clases representa un tipo de producto y hereda metodos de la clase `Productos`.
  - **Atributos:**
    - `durabilidad` (`int`): durabilidad en años.
    - `descuento` (`float`): descuento aplicable al producto.

- **Inventario**
  - La clase `Inventario` esta compuesto de las clases de `Cama`, `Mesa` y `Television` .
  - **Atributos:**
    - `camas`, `mesas`, `televisiones`: arreglos de objetos `Cama`, `Mesa` y `Television`.
    - `Impuesto` (`float`): impuesto general aplicado a los productos en inventario.

## Consideraciones
El programa solo corre en la consola, para compilar utilizar "g++ mesa.h television.h cama.h main.cpp".
