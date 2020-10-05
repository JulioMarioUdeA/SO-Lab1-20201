

## Salida (printf, putchar, puts) ##

**Ejemplo 1**: [link de simulación](http://www.pythontutor.com/c.html#code=//%20Need%20to%20include%20this%20to%20be%20able%20to%20use%20printf%28%29%0A%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%20%7B%0A%20%20printf%28%22hello,%20world%5Cn%22%29%3B%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
// Need to include this to be able to use printf()
#include <stdio.h>

int main() {
  printf("hello, world\n");
  return 0;
}

```

**Ejemplo 2** [Simulación en repl](https://repl.it/@HENRYALBERTOALB/example1)

```C
// Need to include this to be able to use printf()
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("number of command-line arguments: %d\n", argc);
  // write code here
  return 0;
}
```

**Ejemplo 3** [Simulación en repl](https://repl.it/@HENRYALBERTOALB/example2)

```C
// Need to include this to be able to use printf()
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("number of command-line arguments: %d\n", argc);
  int i;
  for (i = 0; i < argc; i++) {
    printf("argv[%d] is %s\n", i, argv[i]);
  }
  return 0;
}
```

**Ejemplo 4**: [Link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%20%7B%0A%20%20char%20x%20%3D%20'a'%3B%0A%20%20putchar%28x%29%3B%0A%20%20putchar%28'%5Cn'%29%3B%0A%20%20//%20how%20to%20add%20newline%3F%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

int main() {
  char x = 'a';
  putchar(x);
  putchar('\n');
  // how to add newline?
  return 0;
}
```

**Ejemplo 5**: [Link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%20%7B%0A%20%20%20%20char%20*s%20%3D%20%22this%20is%20a%20string%22%3B%0A%20%20%20%20puts%28s%29%3B%0A%20%20%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

int main() {
    char *s = "this is a string";
    puts(s);
    return 0;
}
```

**Ejemplo 6**: [Link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%20%7B%0A%20%20//%20simplest%20form%3A%20just%20pass%20printf%28%29%20a%20string%0A%20%20//%20%28this%20is%20quite%20like%20puts%28%29%20but%20NO%20newline%29%0A%20%20printf%28%22hello%20%22%29%3B%0A%20%20printf%28%22goodbye%5Cn%22%29%3B%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

int main() {
  // simplest form: just pass printf() a string
  // (this is quite like puts() but NO newline)
  printf("hello ");
  printf("goodbye\n");
  return 0;
}
```

**Ejemplo 7**: [Link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20i%20%3D%2010%3B%0A%20%20char%20c%20%3D%20'z'%3B%0A%20%20char%20s%5B%5D%20%3D%20%22a%20string%22%3B%0A%0A%20%20//%20and%20how%20can%20we%20print%20all%20the%20variables%20above%20in%20one%20statement%3F%0A%20%20printf%28%22the%20int%20is%20%25d,%20the%20char%20%25c,%20the%20string%20is%20%25s%5Cn%22,%0A%20%20%20%20%20%20%20%20%20%20%20i,%20c,%20s%29%3B%0A%20%20printf%28%22the%20int%20is%20%25d%5Cn%22,%20i%29%3B%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

int main() {
  int i = 10;
  char c = 'z';
  char s[] = "a string";

  // and how can we print all the variables above in one statement?
  printf("the int is %d, the char %c, the string is %s\n",
 	      i, c, s);
  printf("the int is %d\n", i);
  return 0;
}
```

## Entrada y salida () ##

**Ejemplo 1**: [Link de simulación](repl)

```C
#include <stdio.h>

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    printf("%c", c); 
  }
  return 0;
}

```

**Ejemplo 2**: [Link de simulación](repl)

```C
#include <stdio.h>

int main() {
  char buffer[500];
  int count = 0;
  // stdin of type FILE*
  while (fgets(buffer, 500, stdin) != NULL) {
	printf("%d %s\n", count++, buffer);
  }
  return 0;
}
```

