
# Ejemplos 1 #

Apuntes de Remzi: [link](http://pages.cs.wisc.edu/~remzi/Classes/354/Spring2017/Lectures/Day2/InClass-Day2.pdf)

## Funciones ##

**Ejemplo 1**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show%28int%20x%29%3B%0Aint%20add%28int%20x,%20int%20y%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20f%20%3D%2010%3B%0A%20%20int%20g%20%3D%2020%3B%0A%20%20int%20h%20%3D%20add%28f,%20g%29%3B%0A%20%20show%28h%29%3B%20//%20to%20print%20some%20output%20to%20screen%0A%20%20int%20i%20%3D%20add%282,%203%29%3B%0A%20%20show%28i%29%3B%0A%20%20return%201%3B%0A%7D%0A%0A%0Aint%20add%28int%20x,%20int%20y%29%20%7B%0A%20%20return%20x%20%2B%20y%3B%0A%7D%0A%0Avoid%20show%28int%20x%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,x%29%3B%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show(int x);
int add(int x, int y);

int main() {
  int f = 10;
  int g = 20;
  int h = add(f, g);
  show(h); // to print some output to screen
  int i = add(2, 3);
  show(i);
  return 1;
}

int add(int x, int y) {
  return x + y;
}

void show(int x) {
  printf("value: %d\n",x);
}
```

**Ejemplo 2**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show%28int%20x%29%3B%0Avoid%20increment%28int%20x%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20f%20%3D%2010%3B%0A%20%20increment%28f%29%3B%0A%20%20show%28f%29%3B%0A%20%20return%200%3B%0A%7D%0A%0A//%20NOTE%3A%20new%20return%20type%20'void'%0Avoid%20increment%28int%20x%29%20%7B%0A%20%20%20%20x%20%3D%20x%20%2B%201%3B%0A%20%20%20%20show%28x%29%3B%0A%7D%0A%0Avoid%20show%28int%20x%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,x%29%3B%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show(int x);
void increment(int x);

int main() {
  int f = 10;
  increment(f);
  show(f);
  return 0;
}

// NOTE: new return type 'void'
void increment(int x) {
  x = x + 1;
  show(x);
}

void show(int x) {
  printf("value: %d\n",x);
}
```

**Ejemplo 3**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show%28int%20x%29%3B%0Avoid%20increment%28int*%20x%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20f%20%3D%2010%3B%0A%20%20show%28f%29%3B%0A%20%20increment%28%26f%29%3B%0A%20%20show%28f%29%3B%0A%20%20return%200%3B%0A%7D%0A%0A//%20NOTE%3A%20new%20return%20type%20'void'%0Avoid%20increment%28int*%20x%29%20%7B%0A%20%20*x%20%3D%20*x%20%2B%201%3B%0A%7D%0A%0Avoid%20show%28int%20x%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,x%29%3B%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show(int x);
void increment(int* x);

int main() {
  int f = 10;
  show(f);
  increment(&f);
  show(f);
  return 0;
}

// NOTE: new return type 'void'
void increment(int* x) {
  *x = *x + 1;
}

void show(int x) {
  printf("value: %d\n",x);
}
```

## Apuntadores ##

**Ejemplo 1**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show%28int%20v%29%3B%0Avoid%20show_address%28int%20*p%29%3B%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%3B%0A%20%20int*%20xp%3B%20%20//%20also%20fine%20to%20do%20'int%20%20%20%20%20*xp%3B'%0A%20%20%0A%20%20x%20%3D%20100%3B%0A%20%20xp%20%3D%20%26x%3B%0A%20%20show%28x%29%3B%0A%20%20show_address%28%26x%29%3B%0A%20%20show_address%28xp%29%3B%0A%7D%0A%0Avoid%20show%28int%20v%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,v%29%3B%0A%7D%0A%0Avoid%20show_address%28int%20*p%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,p%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show(int v);
void show_address(int *p);


int main() {
  int x;
  int* xp;  // also fine to do 'int     *xp;'
  
  x = 100;
  xp = &x;
  show(x);
  show_address(&x);
  show_address(xp);
}

void show(int v) {
  printf("value: %d\n",v);
}

void show_address(int *p) {
  printf("address: %X\n",p);
}
```

**Ejemplo 2**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show%28int%20v%29%3B%0Avoid%20show_address%28int%20*p%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%3B%0A%20%20int*%20xp%20%3D%20%26x%3B%0A%0A%20%20//%20show%20addresses%20first%20%0A%20%20show_address%28%26x%29%3B%0A%20%20show_address%28%26xp%29%3B%0A%0A%20%20//%20'xp'%20is%20just%20a%20value,%20happens%20to%20be%20an%20address%28!%29%0A%20%20show_address%28xp%29%3B%0A%0A%20%20//%20init%20x%20and%20show%20it%0A%20%20x%20%3D%20100%3B%0A%20%20show%28x%29%3B%0A%0A%20%20//%20dereference%20xp%3A%20setting%20what%20it%20points%20to%20to%20'1'%0A%20%20*xp%20%3D%201%3B%0A%20%20show%28x%29%3B%0A%0A%20%20//%20take%20value%20pointed%20at%20by%20xp,%20add%201,%20put%20it%20in%20x%0A%20%20x%20%3D%20*xp%20%2B%201%3B%20//%20equivalent%20to%20...%3F%0A%20%20show%28x%29%3B%0A%0A%20%20//%20set%20xp%20to%20NULL%20value%0A%20%20xp%20%3D%20NULL%3B%0A%20%20show_address%28xp%29%3B%0A%7D%0A%0Avoid%20show%28int%20v%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,v%29%3B%0A%7D%0A%0Avoid%20show_address%28int%20*p%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,p%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show(int v);
void show_address(int *p);

int main() {
  int x;
  int* xp = &x;

  // show addresses first 
  show_address(&x);
  show_address(&xp);

  // 'xp' is just a value, happens to be an address(!)
  show_address(xp);

  // init x and show it
  x = 100;
  show(x);

  // dereference xp: setting what it points to to '1'
  *xp = 1;
  show(x);

  // take value pointed at by xp, add 1, put it in x
  x = *xp + 1; // equivalent to ...?
  show(x);

  // set xp to NULL value
  xp = NULL;
  show_address(xp);
}

void show(int v) {
  printf("value: %d\n",v);
}

void show_address(int *p) {
  printf("address: %X\n",p);
}
```

**Ejemplo 3**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show%28int%20v%29%3B%0Avoid%20show_address%28int%20*p%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%3B%0A%20%20int*%20xp%3B%0A%20%20x%20%3D%20100%3B%0A%20%20xp%20%3D%20%26x%3B%0A%0A%20%20show%28x%29%3B%0A%20%20show_address%28%26x%29%3B%0A%20%20show_address%28%26xp%29%3B%0A%0A%20%20int%20z%20%3D%20*xp%3B%0A%20%20show%28z%29%3B%0A%0A%20%20*xp%20%3D%2090%3B%0A%20%20show%28*xp%29%3B%0A%20%20show%28x%29%3B%0A%20%20show%28z%29%3B%0A%7D%0A%0Avoid%20show%28int%20v%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,v%29%3B%0A%7D%0A%0Avoid%20show_address%28int%20*p%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,p%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show(int v);
void show_address(int *p);

int main() {
  int x;
  int* xp;
  x = 100;
  xp = &x;

  show(x);
  show_address(&x);
  show_address(&xp);

  int z = *xp;
  show(z);

  *xp = 90;
  show(*xp);
  show(x);
  show(z);
}

void show(int v) {
  printf("value: %d\n",v);
}

void show_address(int *p) {
  printf("address: %X\n",p);
}
```

## Scope ##

**Ejemplo 1**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show%28int%20v%29%3B%0Avoid%20foo%28int%20y%29%3B%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%20%3D%20100%3B%20//%20x,%20y,%20and%20z%20in%20main's%20scope%0A%20%20int%20y%20%3D%20200%3B%0A%20%20int%20z%20%3D%20300%3B%0A%20%20%0A%20%20foo%28400%29%3B%0A%0A%20%20show%28x%29%3B%0A%20%20show%28y%29%3B%0A%20%20show%28z%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0A%0Avoid%20show%28int%20v%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,v%29%3B%0A%7D%0A%0Avoid%20foo%28int%20y%29%20%7B%20%20//%20a%20different%20'y'%20than%20below%0A%20%20%20%20int%20x%20%3D%201%3B%20%20%20%20%20//%20a%20different%20'x'%20than%20below%0A%20%20%20%20y%20%3D%202%3B%0A%20%20%20%20show%28x%29%3B%0A%20%20%20%20show%28y%29%3B%0A%20%20%20%20//%20show%28z%29%3B%20%20%20%20//%20doesn't%20work%3B%20'z'%20is%20in%20main's%20scope%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show(int v);
void foo(int y);


int main() {
  int x = 100; // x, y, and z in main's scope
  int y = 200;
  int z = 300;
  
  foo(400);

  show(x);
  show(y);
  show(z);

  return 0;
}

void show(int v) {
  printf("value: %d\n",v);
}

void foo(int y) {  // a different 'y' than below
  int x = 1;     // a different 'x' than below
  y = 2;
  show(x);
  show(y);
  // show(z);    // doesn't work; 'z' is in main's scope
}
```
**Pregunda**: ¿Qué pasa si se descomenta la linea donde se encuentra la instrucción ```//show(z);```?


**Ejemplo 2**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show%28int%20x%29%3B%0Avoid%20foo%28int%20x%29%3B%0Avoid%20show_address%28int%20*x%29%3B%0A%0Aint%20X%20%3D%200%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%20%3D%200%3B%0A%20%20show%28x%29%3B%0A%20%20show_address%28%26x%29%3B%0A%0A%20%20show%28X%29%3B%20%20%20%20%20%20%20%20%20%20//%20can%20use%20GLOBALS%20here%20too%0A%20%20show_address%28%26X%29%3B%20//%20where%20are%20they%3F%0A%0A%20%20foo%28100%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0A%0Avoid%20show%28int%20x%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,x%29%3B%0A%7D%0A%0Avoid%20show_address%28int%20*x%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,x%29%3B%0A%7D%0A%0Avoid%20foo%28int%20x%29%20%7B%0A%20%20show%28x%29%3B%0A%20%20show%28X%29%3B%20//%20can%20use%20GLOBAL%20variables%20here%0A%20%20show_address%28%26X%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show(int x);
void foo(int x);
void show_address(int *x);

int X = 0;

int main() {
  int x = 0;
  show(x);
  show_address(&x);

  show(X);          // can use GLOBALS here too
  show_address(&X); // where are they?

  foo(100);

  return 0;
}


void show(int x) {
  printf("value: %d\n",x);
}

void show_address(int *x) {
  printf("address: %X\n",x);
}

void foo(int x) {
  show(x);
  show(X); // can use GLOBAL variables here
  show_address(&X);
}
```

## Stack ##

**Ejemplo 1**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show_address%28int%20*x%29%3B%0A%0Aint%20X%20%3D%200%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%3B%0A%20%20show_address%28%26x%29%3B%0A%20%20show_address%28main%29%3B%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20show_address%28int%20*x%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,x%29%3B%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show_address(int *x);

int X = 0;

int main() {
  int x;
  show_address(&x);
  show_address(main);
  return 0;
}

void show_address(int *x) {
  printf("address: %X\n",x);
}
```

**Ejemplo 2**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show_address%28int%20*x%29%3B%0Avoid%20increment%28int%20value%29%3B%0Avoid%20show%28int%20x%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%20%3D%2010%3B%0A%20%20show_address%28%26x%29%3B%0A%20%20show%28x%29%3B%0A%20%20increment%28x%29%3B%0A%20%20show%28x%29%3B%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20increment%28int%20value%29%20%7B%0A%20%20value%20%3D%20value%20%2B%201%3B%0A%20%20show_address%28%26value%29%3B%0A%20%20show%28value%29%3B%0A%7D%0A%0Avoid%20show_address%28int%20*x%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,x%29%3B%0A%7D%0A%0Avoid%20show%28int%20x%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,x%29%3B%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show_address(int *x);
void increment(int value);
void show(int x);

int main() {
  int x = 10;
  show_address(&x);
  show(x);
  increment(x);
  show(x);
  return 0;
}

void increment(int value) {
  value = value + 1;
  show_address(&value);
  show(value);
}

void show_address(int *x) {
  printf("address: %X\n",x);
}

void show(int x) {
  printf("value: %d\n",x);
}
```

**Ejemplo 3**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show_address%28int%20*x%29%3B%0Avoid%20increment%28int%20value%29%3B%0Avoid%20show%28int%20x%29%3B%0Avoid%20bar%28int%20b%29%3B%0Avoid%20foo%28int%20f%29%3B%20%0A%0Aint%20main%28%29%20%7B%0A%20%20%20%20int%20x%3B%0A%20%20%20%20x%20%3D%201%3B%0A%20%20%20%20show%28x%29%3B%0A%20%20%20%20foo%28x%20%2B%201%29%3B%0A%20%20%20%20return%200%3B%0A%7D%0A%0Avoid%20increment%28int%20value%29%20%7B%0A%20%20value%20%3D%20value%20%2B%201%3B%0A%20%20show_address%28%26value%29%3B%0A%20%20show%28value%29%3B%0A%7D%0A%0Avoid%20show_address%28int%20*x%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,x%29%3B%0A%7D%0A%0Avoid%20show%28int%20x%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,x%29%3B%0A%7D%0A%0Avoid%20bar%28int%20b%29%20%7B%0A%20%20show%28b%29%3B%0A%7D%0A%0Avoid%20foo%28int%20f%29%20%7B%0A%20%20show%28f%29%3B%0A%20%20bar%28f%20%2B%201%29%3B%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show_address(int *x);
void increment(int value);
void show(int x);
void bar(int b);
void foo(int f); 

int main() {
    int x;
    x = 1;
    show(x);
    foo(x + 1);
    return 0;
}

void increment(int value) {
  value = value + 1;
  show_address(&value);
  show(value);
}

void show_address(int *x) {
  printf("address: %X\n",x);
}

void show(int x) {
  printf("value: %d\n",x);
}

void bar(int b) {
  show(b);
}

void foo(int f) {
  show(f);
  bar(f + 1);
}
```

**Ejemplo 4**: En este codigo hay un  error ¿Cúal es?


```C
#include <stdio.h>

void show_address(int *x);
void increment(int value);
void show(int x);
void bar(int b);
void foo(int f); 


int main() {
  int x;
  int y;
  int z;

  show_address(&x);
  show_address(&y);
  show_address(&z);

  x = 0;
  y = 1;
  z = 2;

  increment(z);
  show(z);

  return 0;
}

void increment(int value) {
    value = value + 1;
    z = value + 1; // BUG: can't access z from increment()
}

void show_address(int *x) {
  printf("address: %X\n",x);
}

void show(int x) {
  printf("value: %d\n",x);
}

void bar(int b) {
  show(b);
}

void foo(int f) {
  show(f);
  bar(f + 1);
}
```

## Arreglos ##

**Ejemplo 1**: [Link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show_address%28int%20*x%29%3B%0Avoid%20show%28int%20x%29%3B%0A%0A//%20arrays%0Aint%20main%28%29%20%7B%0A%20%20//%20declares%2010%20integers%0A%20%20//%20access%20them%20a%5B0%5D%20...%20a%5B9%5D%0A%20%20int%20a%5B10%5D%3B%20%0A%0A%20%20//%20initialize%0A%20%20%20%20int%20i%3B%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%2010%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20a%5Bi%5D%20%3D%20i%3B%0A%20%20%7D%0A%0A%20%20//%20print%20the%20values%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%2010%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20show%28a%5Bi%5D%29%3B%0A%20%20%7D%0A%0A%20%20//%20how%20is%20this%20laid%20out%20in%20memory%3F%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%2010%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20show_address%28%26a%5Bi%5D%29%3B%0A%20%20%7D%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20show_address%28int%20*x%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,x%29%3B%0A%7D%0A%0Avoid%20show%28int%20x%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,x%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show_address(int *x);
void show(int x);

// arrays
int main() {
  // declares 10 integers
  // access them a[0] ... a[9]
  int a[10]; 

  // initialize
    int i;
  for (i = 0; i < 10; i++) {
    a[i] = i;
  }

  // print the values
  for (i = 0; i < 10; i++) {
    show(a[i]);
  }

  // how is this laid out in memory?
  for (i = 0; i < 10; i++) {
    show_address(&a[i]);
  }
  return 0;
}

void show_address(int *x) {
  printf("address: %X\n",x);
}

void show(int x) {
  printf("value: %d\n",x);
}
```


### Equivalencia entre arreglos y punteros ###

|Notación puntero|Notación subindice|
|--|--|
|```A```|	```&A[0]```|
|```A + i```|```&A[i]```|
|```*(A + 0) = *A	```|```A[0]```|
|```*(A + i)```	|```A[i]```|

**Ejemplo representación subindice**: Hacer una funcion que sume todos los elementos de un vector.

|Notación puntero|Notación subindice|
|--|--|
|<pre>```float sumV(float *V, int T) {```<br>```  float s = 0;```<br>```  for (int i = 0; i < T; i++) {```<br>```    s += *(V + i);```<br>```  }```<br>```  return s;```<br>```}```</pre>|<pre>```float sumV(float *V, int T) {```<br>```  float s = 0;```<br>```  for (int i = 0; i < T; i++) {```<br>```    s += V[i];```<br>```  }```<br>```  return s;```<br>```}```</pre>|

La invicación es posible de cualquiera de las siguientes formas (las cuales son equivalentes):

|Forma 1|Forma 2|
|--|--|
|<pre>```float B[] = {2, 3, 5};```<br>```float sum;```<br>```sum = sumV(B, 3);```<br></pre>|<pre>```float B[] = {2, 3, 5};```<br>```float sum;```<br>```sum = sumV(&B[0], 3);```<br></pre>|


**Ejemplo 2**: [Link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show_address%28int%20*x%29%3B%0Avoid%20show%28int%20x%29%3B%0A%0A//%20arrays%20and%20pointers%0Aint%20main%28%29%20%7B%0A%20%20int%20a%5B3%5D%3B%20%0A%0A%20%20int%20i%3B%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%203%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20a%5Bi%5D%20%3D%20i%20%2B%201%3B%0A%20%20%7D%0A%0A%20%20int*%20a_ptr%20%3D%20a%3B%20//%20or%20%26a%5B0%5D%0A%0A%20%20//%20initial%20values%0A%20%20show_address%28a_ptr%29%3B%0A%20%20show%28*a_ptr%29%3B%0A%0A%20%20//%20pointer%20arithmetic!%0A%20%20a_ptr%20%3D%20a_ptr%20%2B%201%3B%20%0A%0A%20%20//%20what%20will%20these%20print%20now%3F%0A%20%20show_address%28a_ptr%29%3B%0A%20%20show%28*a_ptr%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20show_address%28int%20*x%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,x%29%3B%0A%7D%0A%0Avoid%20show%28int%20x%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,x%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show_address(int *x);
void show(int x);

// arrays and pointers
int main() {
  int a[3]; 

  int i;
  for (i = 0; i < 3; i++) {
    a[i] = i + 1;
  }

  int* a_ptr = a; // or &a[0]

  // initial values
  show_address(a_ptr);
  show(*a_ptr);

  // pointer arithmetic!
  a_ptr = a_ptr + 1; 

  // what will these print now?
  show_address(a_ptr);
  show(*a_ptr);

  return 0;
}

void show_address(int *x) {
  printf("address: %X\n",x);
}

void show(int x) {
  printf("value: %d\n",x);
}
```

**Ejemplo 3 - arrays bug**: [Link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show_address%28int%20*x%29%3B%0Avoid%20show_char%28char%20c%29%3B%0Avoid%20show%28int%20v%29%3B%20%0A%0A//%20arrays%0Aint%20main%28%29%20%7B%0A%20%20int%20a%5B3%5D%3B%20%0A%20%20int%20b%5B3%5D%3B%0A%0A%20%20a%5B0%5D%20%3D%20100%3B%0A%20%20a%5B1%5D%20%3D%20101%3B%0A%20%20a%5B2%5D%20%3D%20102%3B%0A%0A%20%20b%5B0%5D%20%3D%201%3B%0A%20%20b%5B1%5D%20%3D%202%3B%0A%20%20b%5B2%5D%20%3D%203%3B%0A%0A%20%20//%20show%20address%20ranges%20of%20a,%20b%0A%20%20show_char%28'a'%29%3B%0A%20%20show_address%28%26a%5B0%5D%29%3B%0A%20%20show_address%28%26a%5B2%5D%29%3B%0A%0A%20%20show_char%28'b'%29%3B%0A%20%20show_address%28%26b%5B0%5D%29%3B%0A%20%20show_address%28%26b%5B2%5D%29%3B%0A%0A%20%20//%20print%20the%20values%0A%20%20show_char%28'v'%29%3B%0A%20%20int%20i%3B%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%205%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20show%28b%5Bi%5D%29%3B%0A%20%20%7D%0A%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20show_address%28int%20*x%29%20%7B%0A%20%20printf%28%22address%3A%20%25X%5Cn%22,x%29%3B%0A%7D%0A%0A%0Avoid%20show_char%28char%20c%29%20%7B%0A%20%20printf%28%22value%3A%20%25c%5Cn%22,%20c%29%3B%0A%7D%0A%0Avoid%20show%28int%20v%29%20%7B%0A%20%20printf%28%22value%3A%20%25d%5Cn%22,%20v%29%3B%0A%7D%0A&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)


```C
#include <stdio.h>

void show_address(int *x);
void show_char(char c);
void show(int v); 

// arrays
int main() {
  int a[3]; 
  int b[3];

  a[0] = 100;
  a[1] = 101;
  a[2] = 102;

  b[0] = 1;
  b[1] = 2;
  b[2] = 3;

  // show address ranges of a, b
  show_char('a');
  show_address(&a[0]);
  show_address(&a[2]);

  show_char('b');
  show_address(&b[0]);
  show_address(&b[2]);

  // print the values
  show_char('v');
  int i;
  for (i = 0; i < 5; i++) {
    show(b[i]);
  }

  return 0;
}

void show_address(int *x) {
  printf("address: %X\n",x);
}


void show_char(char c) {
  printf("value: %c\n", c);
}

void show(int v) {
  printf("value: %d\n", v);
}

```

## Strings ##

**Ejemplo 1**: [Link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20show_char%28char%20c%29%3B%0Avoid%20show_string%28char%20s%5B%5D%29%3B%0A%0A%0A//%20strings%0Aint%20main%28%29%20%7B%0A%20%20//%20note%3A%20string%20has%20double%20quotes%20%28%22%29%20around%20it,%20not%20single%20%28'%29%0A%20%20char%20s%5B%5D%20%3D%20%22hello!%22%3B%0A%0A%20%20show_string%28s%29%3B%0A%0A%20%20int%20i%3B%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%206%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20//%20access%20s%5B0%5D%20...%20s%5B5%5D%0A%20%20%20%20show_char%28s%5Bi%5D%29%3B%0A%20%20%7D%0A%0A%20%20//%20can%20be%20accessed%20just%20like%20an%20array%0A%20%20s%5B0%5D%20%3D%20'j'%3B%0A%20%20show_string%28s%29%3B%0A%0A%20%20//%20what%20will%20happen%20here%3F%0A%20%20if%20%28s%5B6%5D%20%3D%3D%20'%5C0'%29%20%7B%0A%20%20%20%20show_string%28%22found%20end-of-string%20marker%22%29%3B%0A%20%20%7D%0A%0A%20%20return%200%3B%0A%7D%0A%0A%0Avoid%20show_char%28char%20c%29%20%7B%0A%20%20printf%28%22value%3A%20%25c%5Cn%22,%20c%29%3B%0A%7D%0A%0Avoid%20show_string%28char%20s%5B%5D%29%20%7B%0A%20%20printf%28%22string%3A%20%25s%5Cn%22,%20s%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void show_char(char c);
void show_string(char s[]);


// strings
int main() {
  // note: string has double quotes (") around it, not single (')
  char s[] = "hello!";

  show_string(s);

  int i;
  for (i = 0; i < 6; i++) {
    // access s[0] ... s[5]
    show_char(s[i]);
  }

  // can be accessed just like an array
  s[0] = 'j';
  show_string(s);

  // what will happen here?
  if (s[6] == '\0') {
    show_string("found end-of-string marker");
  }

  return 0;
}


void show_char(char c) {
  printf("value: %c\n", c);
}

void show_string(char s[]) {
  printf("string: %s\n", s);
}
```