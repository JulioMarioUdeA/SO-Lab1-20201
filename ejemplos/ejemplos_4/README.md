## Ejemplos estructuras ##

**Ejemplo 1**: [Enlace simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0A//%20not%20allocate%20any%20space%0A//%20what%20this%20record%20looks%20like%0Astruct%20health_record%20%7B%0A%20%20%20%20int%20age%3B%0A%20%20%20%20int%20height%3B%0A%20%20%20%20int%20num_diseases%3B%0A%7D%3B%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20struct%20health_record%20f%3B%20%0A%0A%20%20f.age%20%3D%2045%3B%0A%20%20f.height%20%3D%2075%3B%0A%20%20f.num_diseases%20%3D%200%3B%0A%0A%20%20printf%28%22most%20awesome%20people%20are%20%25d%20years%20old,%20%22%20%5C%0A%20%20%20%20%20%20%20%20%22and%20around%20%25d%20inches%20tall%5Cn%22,%20f.age,%20f.height%29%3B%0A%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

// not allocate any space
// what this record looks like
struct health_record {
    int age;
    int height;
    int num_diseases;
};

int main(int argc, char *argv[]) {
  struct health_record f; 

  f.age = 45;
  f.height = 75;
  f.num_diseases = 0;

  printf("most awesome people are %d years old, " \
        "and around %d inches tall\n", f.age, f.height);

  return 0;
}
```

**Ejemplo 2**: [Enlace simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Astruct%20health_record%20%7B%0A%20%20int%20age%3B%0A%20%20int%20height%3B%0A%20%20int%20num_diseases%3B%0A%20%20char%20name%5B128%5D%3B%0A%7D%3B%0A%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20struct%20health_record%20f%3B%20//%20alloc%20struct%20on%20stack%0A%20%20f.age%20%3D%2045%3B%0A%20%20struct%20health_record*%20g%20%3D%20%26f%3B%20//%20size%20of%20a%20pointer,%20on%20stack%0A%20%20printf%28%22age%20%25d%20%20height%20%25d%5Cn%22,%20g-%3Eage,%20g-%3Eheight%29%3B%0A%20%20g-%3Eage%20%3D%2025%3B%0A%20%20printf%28%22people%20younger%20than%20%25d%20are%20too%20young%5Cn%22,%20f.age%29%3B%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

* **Nota**: Este código debe ser revisado.

```C
#include <stdio.h>

struct health_record {
  int age;
  int height;
  int num_diseases;
  char name[128];
};


int main(int argc, char *argv[]) {
  struct health_record f; // alloc struct on stack
  f.age = 45;
  struct health_record* g = &f; // size of a pointer, on stack
  printf("age %d  height %d\n", g->age, g->height);
  g->age = 25;
  printf("people younger than %d are too young\n", f.age);
  return 0;
}
```

**Ejemplo 3**: [Enlace simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Astruct%20health_record%20%7B%0A%20%20int%20age%3B%0A%20%20int%20height%3B%0A%7D%3B%0A%0Atypedef%20struct%20health_record%20hr_t%3B%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20hr_t%20f%3B%20//%20SAME%20AS%20struct%20health_record%20f%3B%0A%0A%20%20f.age%20%3D%2045%3B%0A%20%20f.height%20%3D%2075%3B%0A%0A%20%20hr_t*%20g%20%3D%20%26f%3B%0A%20%20g-%3Eage%20%3D%2025%3B%0A%0A%20%20hr_t%20copy%3B%0A%20%20copy%20%3D%20f%3B%20//%20this%20copies%20the%20entire%20structure%20%28contents%29%0A%20%20copy.age%20%3D%20100%3B%0A%20%20printf%28%22copy%20age%3A%20%25d%5Cn%22,%20copy.age%29%3B%0A%20%20printf%28%22original%20age%3A%20%25d%5Cn%22,%20f.age%29%3B%0A%0A%20%20hr_t%20*pointer%20%3D%20g%3B%0A%20%20pointer-%3Eage%20%3D%2040%3B%0A%20%20printf%28%22'copy'%20age%3A%20%25d%5Cn%22,%20pointer-%3Eage%29%3B%0A%20%20printf%28%22original%20age%20%25d%5Cn%22,%20g-%3Eage%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

struct health_record {
  int age;
  int height;
};

typedef struct health_record hr_t;

int main(int argc, char *argv[]) {
  hr_t f; // SAME AS struct health_record f;

  f.age = 45;
  f.height = 75;

  hr_t* g = &f;
  g->age = 25;

  hr_t copy;
  copy = f; // this copies the entire structure (contents)
  copy.age = 100;
  printf("copy age: %d\n", copy.age);
  printf("original age: %d\n", f.age);

  hr_t *pointer = g;
  pointer->age = 40;
  printf("'copy' age: %d\n", pointer->age);
  printf("original age %d\n", g->age);

  return 0;
}
```

**Ejemplo 4**: [Enlace simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Astruct%20health_record%20%7B%0A%20%20int%20age%3B%0A%20%20int%20height%3B%0A%7D%3B%0A%0A//%20adds%20in%20%22typedef%22%0Atypedef%20struct%20health_record%20hr_t%3B%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20hr_t%20f%3B%0A%0A%20%20f.age%20%3D%2045%3B%0A%20%20f.height%20%3D%2075%3B%0A%0A%20%20hr_t*%20g%20%3D%20%26f%3B%0A%20%20printf%28%22age%20%25d%20%20height%20%25d%5Cn%22,%20g-%3Eage,%20g-%3Eheight%29%3B%0A%20%20g-%3Eage%20%3D%2025%3B%0A%20%20printf%28%22people%20younger%20than%20%25d%20are%20too%20young%5Cn%22,%20f.age%29%3B%0A%0A%20%20//%20copy%20semantics%20for%20structs%20work%3A%0A%20%20hr_t%20copy%20%3D%20f%3B%0A%20%20copy.age%20%3D%20100%3B%0A%20%20printf%28%22copy%20age%3A%20%25d%5Cn%22,%20copy.age%29%3B%0A%20%20printf%28%22original%20age%3A%20%25d%5Cn%22,%20f.age%29%3B%0A%0A%20%20//%20but%20if%20using%20pointers,%20you%20are%20just%20creating%20NEW%0A%20%20//%20references%20to%20SAME%20OLD%20THING%0A%20%20hr_t%20*pointer%20%3D%20g%3B%0A%20%20pointer-%3Eage%20%3D%2040%3B%0A%20%20printf%28%22original%20g-%3Eage%20%25d%5Cn%22,%20g-%3Eage%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

struct health_record {
  int age;
  int height;
};

// adds in "typedef"
typedef struct health_record hr_t;

int main(int argc, char *argv[]) {
  hr_t f;

  f.age = 45;
  f.height = 75;

  hr_t* g = &f;
  printf("age %d  height %d\n", g->age, g->height);
  g->age = 25;
  printf("people younger than %d are too young\n", f.age);

  // copy semantics for structs work:
  hr_t copy = f;
  copy.age = 100;
  printf("copy age: %d\n", copy.age);
  printf("original age: %d\n", f.age);

  // but if using pointers, you are just creating NEW
  // references to SAME OLD THING
  hr_t *pointer = g;
  pointer->age = 40;
  printf("original g->age %d\n", g->age);

  return 0;
}
```

**Ejemplo 5**: [Enlace simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstddef.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0A//%20alignment%20rules%0A//%20%20%20efficiency%0A//%20int%20-%3E%204%20bytes%20-%3E%204-byte%20aligned%0A//%20%20%20%20address%20divisable%20by%204%0A//%20double%20-%3E%208%20bytes%20-%3E%208%20byte%20aligned%0A//%20char%20-%3E%201%20byte%20%28anywhere%20in%20memory%29%0Astruct%20info%20%7B%0A%20%20int%20x%3B%0A%20%20float%20y%3B%0A%20%20double%20z%3B%0A%7D%3B%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20printf%28%22TOTAL%20SIZE%3A%20%25lu%5Cn%22,%20sizeof%28struct%20info%29%29%3B%0A%20%20return%200%3B%0A%7D%0A%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

// alignment rules
//   efficiency
// int -> 4 bytes -> 4-byte aligned
//    address divisable by 4
// double -> 8 bytes -> 8 byte aligned
// char -> 1 byte (anywhere in memory)
struct info {
  int x;
  float y;
  double z;
};

int main(int argc, char *argv[]) {
  printf("TOTAL SIZE: %lu\n", sizeof(struct info));
  return 0;
}
```

**Ejemplo 6**: Mirar con detenimiento. Al parecer tiene fallas.

```C
#include <stdio.h>
#include <stddef.h>

struct info {
  char* name;
  char first_initial;
  int age;
  int height;
  char last_initial;
} __attribute__ ((packed));


int main(int argc, char *argv[]) {
  struct info f[1000];
  printf("struct info TOTAL SIZE: %lu\n", sizeof(struct info));
  printf("  offset of 'age': %lu\n", offsetof(struct info, age));
  printf("  offset of 'height': %lu\n", offsetof(struct info, height));
  printf("  offset of 'f init': %lu\n", offsetof(struct info, first_initial));
  printf("  offset of 'l init': %lu\n", offsetof(struct info, last_initial));
  printf("struct info array SIZE: %lu\n", sizeof(f));

  return 0;
}
```