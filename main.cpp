#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"

int main() {

    // Instanciar


    Perro * connor = new Perro("Connor", "Pequenio","Blanco",5 );
    connor->ladrar();

    connor->agregarVeterinario("Luis Eduardo", 3);

    // Consulto el nombre del veterinario a partir del objeto perro
    std::cout << "El nombre del veterinario de "
                 << connor->getNombre() << " es " << connor->getVeterinario()->getNombre() << std::endl;


    Propietario * luisFelipe  = new Propietario("Luis Felipe");
    luisFelipe->setDocIdentidad("111111111");
    luisFelipe->setEdad(20);

    luisFelipe->mostrarInfo();

    Raza * pMaltes = new Raza("Maltes", "Italia");
    Raza * pMastin = new Raza("Mastin Napolitano", "Italia");

    connor->setRaza(pMaltes);
    std::cout << "La raza de  "
              << connor->getNombre() << " es " << connor->getRaza()->getNombre() << std::endl;

    /*
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre();
     */

    return 0;
}
