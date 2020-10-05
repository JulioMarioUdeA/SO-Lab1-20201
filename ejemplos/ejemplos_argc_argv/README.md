# Paso de argumentos por linea de comandos #

A continuación se muestra el paso de argumentos por linea de comandos para una aplicación. Analicelos, comprendalos y ejecutelos.

## Ejemplo 1 ##

Hacer un programa que pida por linea de comandos la edad en años y devuelva el resultado de esta en meses:

**Código**: edad.c

```C
#include <stdio.h>
#include <stdlib.h>

int edad_en_meses(int);

int main(int argc, char *argv[])
{
  int edad = atoi(argv[1]);
  int meses = edad_en_meses(edad);
  printf("Edad %d \n", meses);
  return 0;
}

int edad_en_meses(int anios){
  int mes = anios * 12; 
  return mes;
}
```

**Compilación**

A continuación se muestra el comando de compilación 

```
gcc -Wall -o edad edad.c
```

**Ejecución**

A continuación se muestra la ejecución del programa anterior empleando como entrada 5.

```
./edad 5
```

## Ejemplo 2 ##
A continuación se muestra el siguiente código [ch51.c](http://bluefever.net/Downloads/BeginC/ch51.c):

```C
#include "stdio.h"
#include "string.h"

// Codigo tomado de: http://bluefever.net/Downloads/BeginC/ch51.c

int main(int argc, char *argv[]) {	
  printf("\nmain() : argc : %d \n", argc);
  int index = 0;
  for(index = 0; index < argc; ++index) {
    // printf("main() : argv[%d] : %s\n",index,argv[index]);
    if( strncmp( argv[index], "debug", 5) == 0 ) {
      printf("main() : PROGRAM DEBUG MODE\n");
    } else if ( strncmp( argv[index], "-file", 5) == 0 ) {
      printf("main() : PROGRAM READ FILENAME : %s\n", argv[index + 1]);
    }
  }
  printf("\nmain(): Program Quit\n");
  return 0;
}
```

En el siguiente [link](https://www.youtube.com/watch?v=jl4r7u7IfJY&feature=emb_title) de youtube se hace una descripción de este. Compile el codigo, analicelo, entiendalo y ejecutelo.