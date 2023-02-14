# 3-CrearObjAsociacion-solved
Resuelve el ejercicio propuesto de relaciones de asociación y creacon de objetos


## Constructores 

**Objetivo**
Practicar la definición y uso de constructores por defectos y con parámetros en C++

* Agrege un constructor con parámetros que reciba como atributos nombre, edad, raza, color y tamaño en la clase `Perro`.Inicialice los atributos utilizando lista inicializadora
* Agrege un constructor con un sólo parámetro a la clase `Propietario`. Inicialice el atributo que seleccionó en el cuerpo del constructor.
* Desde el main pruebe el constructor de la clase `Perro` creando un objeto de la clase Perro, llame al método ladrar del objeto que creó [Use new].
* Desde el main cree un objeto de la clase `Propietario` usando el constructor que definió, use los sets para definir el resto de atributos [Use new]
* Implemente en la clase Propietario el método mostrarInfo. En este método imprima en consola el nombre, documento de identidad y edad del pPropietario.
* Pruebe el método `mostrarInfo` con el objeto propietario que creó.

### Adicional -- familiaridad con las relaciones
* Observe el atributo `pPropietario` de la clase `Perro`. Este objeto sirve para relacionar dos clases. Desde el main agreguése usted como nuevo pPropietario al `Perro` que acabó de crear usando el método `agregarPropietario` de la clase `Perro`.
* Observe la implementación del método `agregarPropietario` - ¿Qué esta haciendo ese método?
* Desde el `main` a partir de las relaciones intente consultar el documento de identidad del pPropietario del Perro que agregó. Vea el ejmplo disponible en el `main` en el que se imprime
  el nombre del propietario

# Relaciones
* Desde el `main` intente consultar la edad del `pPropietario` del objeto `Perro` que agregó. Esto no es posible porque el atributo es privado y no hay ningún método para consultar la edad. Agregue el método get para consultar la edad

## Relación de asociación - asociar objetos desde la clase creadora

**Objetivo**
Practicar cómo establecer relaciones de asociación entre dos clases cuando el objeto NO existe por fuera del contexto de la clase Origen

1. Cree una nueva clase llamada `Veterinario` que tenga los atributos de tipo cadena "nombre", "aniosExperiencia"
2. Agrege el constructor y los métodos get/set para la clase `Veterinario`
3. Agregue a la clase `Perro` el apuntador para el atributo de tipo `Veterinario`
4. Intente asociar algún objeto `Perro` que tenga creado con un objeto de la clase `Veterinaria`, para ello cree un método en `Perro`
   que reciba la información y cree el objeto.
5. Pruebe la relación mostrando desde algún objeto `Perro` la información de su veterinario

## Relación de asociación - asociar objetos con set

**Objetivo**
Prácticar cómo establecer relaciones de asociación entre dos clases cuando el objeto existe por fuera del contexto de la clase Origen
la asociación

1. Cree una nueva clase llamada `Raza` que tenga los atributos de tipo cadena "nombre", "paisOrigen"
2. Agrege el constructor y los métodos get/set para la clase `Raza`
3. Cree en el método main dos objetos de tipo `Raza` diferentes: "Mastin Napolitano" de origen "Italia" y "Maltes" de origen "Italia"
4. Haga los ajustes que requiera su código para asociar a la clase `Perro` la raza.
5. Vincule a Firualis al objeto que representa la `Raza` del "Mastin Napolitano" que creo en el Main
6. Pruebe imprimiendo información del objeto Firualais, mostrando detalles de su raza como el nombre y el pais de origen.
