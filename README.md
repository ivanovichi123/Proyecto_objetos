# Proyecto_objetos

## Contexto

Este proyecto tiene como objetivo gestionar el inventario de una tienda, permitiendo almacenar información clave sobre los productos, como el precio, el modelo y la antigüedad. El sistema también facilita el cálculo de impuestos asociados a la gestión del inventario, ayudando a optimizar los costos de mantenimiento de los productos en venta. Con esta herramienta, podrás mantener tu inventario actualizado y gestionar de manera eficiente los productos disponibles en tu tienda.

## Funcionalidad

El sistema permite:
- **Gestionar productos en inventario:** Se pueden agregar productos como camas, mesas y televisores al inventario.
- **Mostrar detalles de productos:** Cada producto tiene información como el modelo, el precio, la antigüedad, la durabilidad y el tipo de descuento aplicable.
- **Calcular impuestos:** El sistema calcula los impuestos asociados a los productos almacenados.
- **Aplicar descuentos:** Los productos tienen un descuento basado en su antigüedad, lo que permite ofrecer precios más bajos para artículos más antiguos.
- **Durabilidad de los productos:** El sistema calcula cuánto tiempo puede durar cada producto según su antigüedad.

## Estructura del Proyecto

El sistema está compuesto por varias clases que interactúan entre sí para gestionar el inventario de productos.

### Clases Principales

1. **Producto**
   - Es la clase base para los productos. Contiene atributos comunes como:
     - `antig` (int): La antigüedad del producto.
     - `modelo` (string): El modelo del producto.
     - `precio` (float): El precio del producto.
     - `durabilidad` (int): La durabilidad estimada en años del producto.
     - `descuento` (float): El porcentaje de descuento por antigüedad.

   - Métodos principales:
     - `get_modelo()`: Obtiene el modelo del producto.
     - `get_antig()`: Obtiene la antigüedad del producto.
     - `get_precio()`: Obtiene el precio del producto.
     - `impuestos()`: Calcula los impuestos (30% del precio).
     - `cuanto_dura()`: Calcula la durabilidad restante del producto.
     - `descuento_vejez()`: Calcula el precio con descuento por antigüedad.

2. **Cama, Mesa, Televisión** (Heredan de `Producto`)
   - Estas clases heredan de la clase `Producto` y añaden atributos específicos de cada tipo de producto:
     - **Cama**:
       - `colchon` (string): Tipo de colchón.
     - **Mesa**:
       - `patas` (int): Número de patas de la mesa.
     - **Televisión**:
       - `pulgadas` (float): Tamaño en pulgadas de la televisión.
   - Cada clase tiene un constructor que permite crear un objeto con los atributos específicos y una función para obtener información específica.

3. **Inventario**
   - Gestiona los productos en inventario:
     - `camas` (arreglo de objetos `Cama`): Almacena todas las camas en el inventario.
     - `mesas` (arreglo de objetos `Mesa`): Almacena todas las mesas en el inventario.
     - `televisiones` (arreglo de objetos `Television`): Almacena todas las televisiones en el inventario.
     - `impuesto_total()`: Calcula los impuestos totales para todos los productos.
     - Métodos de creación: `crea_television()`, `crea_mesa()`, `crea_cama()`, que permiten agregar productos al inventario.


# Descripción del Diagrama UML para el Proyecto de Inventario de Productos

Este proyecto incluye una estructura de clases para gestionar un inventario de productos como **Camas**, **Mesas** y **Televisores**. La clase base `Producto` define atributos y métodos comunes para todos los productos, y las clases derivadas (`Cama`, `Mesa`, `Television`) extienden estos comportamientos para agregar detalles específicos. Además, la clase `Inventario` gestiona todos los productos y calcula impuestos y descuentos.

## Clases y Relaciones

### 1. Clase `Producto`

La clase base `Producto` tiene los siguientes atributos y métodos:

#### Atributos:
- `antig` (`int`): Antigüedad del producto en años.
- `modelo` (`string`): Nombre o modelo del producto.
- `precio` (`float`): Precio de venta del producto.
- `durabilidad` (`int`): Durabilidad estimada del producto en años.
- `descuento` (`float`): Porcentaje de descuento aplicable al producto según su antigüedad.

#### Métodos:
- `get_modelo()`: Retorna el modelo del producto.
- `get_antig()`: Retorna la antigüedad del producto.
- `get_precio()`: Retorna el precio del producto.
- `impuestos()`: Calcula el impuesto sobre el precio del producto.
- `cuanto_dura()`: Calcula la cantidad de años que el producto seguirá siendo útil.
- `descuento_vejez()`: Calcula el precio con un descuento basado en la antigüedad del producto.

### 2. Clase `Cama` (Hereda de `Producto`)

#### Atributos:
- `colchon` (`string`): Tipo de colchón de la cama.

#### Métodos:
- `get_colchon()`: Regresa el tipo de colchón de la cama.

### 3. Clase `Mesa` (Hereda de `Producto`)

#### Atributos:
- `patas` (`int`): Número de patas de la mesa.

#### Métodos:
- `get_patas()`: Regresa el número de patas de la mesa.

### 4. Clase `Television` (Hereda de `Producto`)

#### Atributos:
- `pulgadas` (`float`): Tamaño de la pantalla de la televisión en pulgadas.

#### Métodos:
- `get_pulgadas()`: Regresa el tamaño de la pantalla en pulgadas de la televisión.

### 5. Clase `Inventario`

La clase `Inventario` gestiona los productos y tiene los siguientes atributos y métodos:

#### Atributos:
- `camas` (`arreglo<Cama>`): Un arreglo de objetos `Cama`.
- `mesas` (`arregloMesa>`): Un arreglo de objetos `Mesa`.
- `televisiones` (`arreglo<Television>`): Un arreglo de objetos `Television`.
- `impuesto` (`float`): El impuesto total calculado para todos los productos del inventario.

#### Métodos:
- `impuesto_total()`: Calcula el impuesto total sobre todos los productos en el inventario.
- `crea_television()`, `crea_mesa()`, `crea_cama()`: Métodos para agregar un nuevo producto (Television, Mesa o Cama) al inventario.
- `mostrar_productos()`: Muestra los productos en el inventario.

---

## Relaciones entre Clases

### Herencia
- La clase **Producto** es la clase base, y las clases **Cama**, **Mesa** y **Television** heredan de ella. Esto significa que las clases derivadas comparten los atributos y métodos comunes, pero cada una tiene atributos adicionales específicos para su tipo.

### Composición
- La clase **Inventario** contiene varios arreglos de `productos` de: `camas`, `mesas` y `televisiones`. Ya que si no existe el inventario no pueden existir sus productos.

## Uso

1. **Crear productos**: Puedes crear nuevos productos (camas, mesas, televisores) usando los métodos de la clase `Inventario`.
2. **Ver detalles del inventario**: El sistema muestra toda la información relacionada con cada producto, incluyendo su modelo, precio, antigüedad, durabilidad y cualquier descuento aplicable.
3. **Calcular impuestos**: El sistema calcula los impuestos totales para todos los productos en el inventario.

