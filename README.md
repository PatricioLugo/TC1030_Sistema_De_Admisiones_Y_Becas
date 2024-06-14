# Sistema De Admisiones Y Becas
Este proyecto consiste en un sistema de admisiones y becas para una institución educativa, donde se trabaja con tres tipos de posibles prospectos dependiendo del nivel de educación al que quiera acceder el prospecto (preparatoria, profesional y posgrado) y se establece de acuerdo a sus resultados en un examen de admisión su estado de admisión, así como su posibilidad a solicitar una beca. Al usuario se le permite ver la información específica de cada prospecto (lo que incluye su nombre, su id, el tipo de prospecto según el nivel educativo, sus resultados e información específica que respecta a cada tipo de prospecto), así como su estado de admisión y posibilidad de beca anteriormente determinados.

## Posibles errores
El proyecto puede ser susceptible a errores cuando haya incoherencias entre los tipos de datos que introduzca el usuario y el tipo de datos que requiere el proyecto. Además, puede que haya instituciones educativas que soliciten una mayor cantidad de requisitos de admisión que los incluidos en el proyecto, por lo que para asegurar su funcionamiento habría que ampliar la complejidad del proyecto de acuerdo a las necesidades específicas de la institución.

## Diagrama UML
El diagrama de clases del proyecto consta de 5 clases: Admisiones, Prospecto, ProspectoProfesional, ProspectoPreparatoria, ProspectoPosgrado. Estas últimas 3 son subclases de la clase Prospecto, por lo que tienen los atributos base de prospecto, pero a su vez tienen atributos propios de cada subclase y sus métodos (beca(), estado_de_admision() y to_string()) involucran procesos diferentes de cálculo y de impresión respectivamente. Estas diferencias en los métodos se deben a que los prospectos de diferentes niveles de educación requieren un puntaje diferente en su examen de admisión para recibir una respuesta positiva de parte de la institución educativa tanto para la admisión misma como para la posibilidad de ser acredores a una beca. La clase de Prospecto tiene una relación de composición con la clase Admisiones; éste es el departamento donde se realizan todas las operaciones sobre los prospectos a estudiar en la institución, además de que se guarda la información de los prospectos existentes.

## Versiones
### Versión 1
* Se definió e implementó la clase Prospecto y sus clases heredadas (ProspectoProfesional, ProspectoPreparatoria, ProspectoPosgrado).
* Se creó el esqueleto de la clase Admisiones, sin embargo, a pesar de estar definida le faltaba ser implementada.
* Cabe mencionar que en esta versión la clase Prospecto no era abstracta.
### Versión 2
* Se implementaron los métodos crear_prospecto() y mostrar_prospecto() de la clase Admisiones.
* Se corrigieron los constructores de todas las clases.
NOTA: La versión del main aún era muy simple.
### Versión 3
* Se convirtió la clase Prospecto a una clase abstracta.
* Se corrigieron los comentarios para que estuvieran en el formato apropiado.
* Se implementaron los métodos restantes de la clase Admisiones.
### Versión 4
* Se agregó el método mostrar_prospecto_beca() que muestra los prospectos con los requerimientos suficientes para obtener una beca.
* Se creó una versión completa del main donde se despliega un menu y el usuario puede ver un ejemplo del programa sin necesidad de agregar prospectos el mismo o puede realizar las funciones del programa manualmente (agregar prospectos de disintos tipos y ver su información según las limitantes que decida el usuario).
### Versión 5
* Se corrigió un error del programa donde al introducir los nombres de los prospectos el programa entraba en un loop infinito; el problema fue solucionado con getline().
