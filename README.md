# tl1_tp1_2023-NatiRoll
## Punto 2.2

El archivo **.gitignore** es un archivo de texto plano, donde especificamos aquellos archivos o carpetas que queremos que git no tenga en cuenta y no almacene las modificaciones que se han realizado sobre ellos.

*  _¿Por qué es conveniente incluirlo?_
Porque puede ocurrir que durante nuestro manejo de esos archivos se creen archivos secundarios que se crean por herramientas externas, que no son relevantes y que su información es cambiante con el tiempo y no nos aporta nada. Ademas de proteger datos que pueden ser privados para un desarrollador en concreto.

* _¿Cuándo se debe hacer?_
El archivo se debe agregar al repositorio cuando se inicia el proyecto, antes de hacer el primer commit, o tan pronto como se identifican los archivos que no deben ser agregados por Git.

* _¿Cómo configuraría el archivo .gitignore?_
    1. Abro Git Bash.
    2. Navego a la ubicación del repositorio de Git.
    3. Creo un archivo **.gitignore**, vacio, en la raiz del proyecto con el comando 'touch .gitignore'.
    4. Dentro del archivo coloco texto plano, con todas las carpetas que quiero que Git simplemente ignore, así como los archivos en líneas separadas. En este caso agrego la línia **.txt**.
    5. Guardo y cierro el archivo.

## Punto 2.3c

Los archivos .exe no hacen falta que esten.

## Punto 2.3g

Los apartados 2 y 3 tienen el mismo resultado porque el puntero tiene almacenado la dirección de memoria de la variable a la cual apunta.

_¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?_

Obtengo la dirección de memoria del puntero. No es igual a los anteriores porque estoy hablando del lugar que ocupa en la memoria la variable 'puntero', no de la dirección de memoria a la que apunta. 
