
## Funciones por referencia y por valor ##


**Ejemplo 1**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0A%23define%20SWAP%28a,%20b%29%20%7B%20int%20tmp%20%3D%20a%3B%20a%20%3D%20b%3B%20b%20%3D%20tmp%3B%20%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20char%20x%20%3D%20'a'%3B%0A%20%20char%20y%20%3D%20'b'%3B%0A%20%20printf%28%22x%3A%25d%20y%3A%25d%5Cn%22,%20x,%20y%29%3B%0A%20%20SWAP%28x,%20y%29%3B%0A%20%20printf%28%22x%3A%25c%20y%3A%25c%5Cn%22,%20x,%20y%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

#define SWAP(a, b) { int tmp = a; a = b; b = tmp; }

int main() {
  char x = 'a';
  char y = 'b';
  printf("x:%d y:%d\n", x, y);
  SWAP(x, y);
  printf("x:%c y:%c\n", x, y);
}
```

**Ejemplo 2**: : [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20swap_int%28int*%20a1,%20int*%20a2%29%3B%0Avoid%20show%28int%20value%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20x%20%3D%201%3B%0A%20%20int%20y%20%3D%202%3B%0A%20%20show%28x%29%3B%0A%20%20show%28y%29%3B%0A%20%20swap_int%28%26x,%20%26y%29%3B%0A%20%20show%28x%29%3B%0A%20%20show%28y%29%3B%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20swap_int%28int*%20a1,%20int*%20a2%29%20%7B%0A%20%20int%20tmp%20%3D%20*a1%3B%0A%20%20*a1%20%3D%20*a2%3B%0A%20%20*a2%20%3D%20tmp%3B%0A%7D%0A%0Avoid%20show%28int%20value%29%7B%0A%20%20printf%28%22%25d%5Cn%22,%20value%29%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void swap_int(int* a1, int* a2);
void show(int value);

int main() {
  int x = 1;
  int y = 2;
  show(x);
  show(y);
  swap_int(&x, &y);
  show(x);
  show(y);
  return 0;
}

void swap_int(int* a1, int* a2) {
  int tmp = *a1;
  *a1 = *a2;
  *a2 = tmp;
}

void show(int value){
  printf("%d\n", value);
}
```


**Ejemplo 3**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20swap_int_ptr%28int**%20a1,%20int**%20a2%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20a%20%3D%200,%20b%20%3D%201%3B%0A%20%20int*%20x%20%3D%20%26a%3B%0A%20%20int*%20y%20%3D%20%26b%3B%0A%20%20swap_int_ptr%28%26x,%20%26y%29%3B%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20swap_int_ptr%28int**%20a1,%20int**%20a2%29%20%7B%0A%20%20int*%20tmp%20%3D%20*a1%3B%0A%20%20*a1%20%3D%20*a2%3B%0A%20%20*a2%20%3D%20tmp%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void swap_int_ptr(int** a1, int** a2);

int main() {
  int a = 0, b = 1;
  int* x = &a;
  int* y = &b;
  swap_int_ptr(&x, &y);
  return 0;
}

void swap_int_ptr(int** a1, int** a2) {
  int* tmp = *a1;
  *a1 = *a2;
  *a2 = tmp;
}
```

**Ejemplo 4**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20increment_array%28int*%20array,%20int%20size%29%3B%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20int%20x%5B10%5D%3B%0A%20%20int%20i%3B%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%2010%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20x%5Bi%5D%20%3D%2010%3B%0A%20%20%7D%0A%20%20increment_array%28x,%2010%29%3B%0A%0A%20%20//%20WHAT%20WILL%20THIS%20PRINT%3F%0A%20%20printf%28%22%25d%5Cn%22,%20x%5B5%5D%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20increment_array%28int*%20array,%20int%20size%29%20%7B%0A%20%20int%20i%3B%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%2010%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20//array%5Bi%5D%20%2B%3D%201%3B%0A%20%20%20%20*%28array%20%2B%20i%29%20%2B%3D%201%3B%20//%20same%20thing%0A%20%20%7D%20%20%20%20%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)

```C
#include <stdio.h>

void increment_array(int* array, int size);

int main(int argc, char *argv[]) {
  int x[10];
  int i;
  for (i = 0; i < 10; i++) {
    x[i] = 10;
  }
  increment_array(x, 10);

  // WHAT WILL THIS PRINT?
  printf("%d\n", x[5]);

  return 0;
}

void increment_array(int* array, int size) {
  int i;
  for (i = 0; i < 10; i++) {
	//array[i] += 1;
    *(array + i) += 1; // same thing
  }    
}
```


## Asignación dinámica de memoria ##

**Ejemplo 1**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%20//%20have%20to%20include%20stdlib.h%20to%20use%20malloc%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20int*%20p%3B%20//%20stack%0A%20%20p%20%3D%20malloc%2810%20*%20sizeof%28int%29%29%3B%20//%20allocs%2040%20bytes%20on%20heap%0A%20%20printf%28%22addr%20of%20p%20%28stack%29%3A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%25p%5Cn%22,%20%26p%29%3B%0A%20%20printf%28%22addr%20of%20malloc'd%20mem%20%28heap%29,%20in%20'p'%3A%20%25p%5Cn%22,%20p%29%3B%0A%20%20%20%20%0A%20%20int%20i%3B%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%2010%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20p%5Bi%5D%20%3D%20i%3B%0A%20%20%20%20printf%28%22p%5B%25d%5D%20is%20%25d%5Cn%22,%20i,%20p%5Bi%5D%29%3B%0A%20%20%7D%0A%0A%20%20free%28p%29%3B%0A%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D) 

```C
#include <stdio.h>
#include <stdlib.h> // have to include stdlib.h to use malloc

int main(int argc, char *argv[]) {
  int* p; // stack
  p = malloc(10 * sizeof(int)); // allocs 40 bytes on heap
  printf("addr of p (stack):                   %p\n", &p);
  printf("addr of malloc'd mem (heap), in 'p': %p\n", p);
    
  int i;
  for (i = 0; i < 10; i++) {
	p[i] = i;
	printf("p[%d] is %d\n", i, p[i]);
  }

  free(p);

  return 0;
}
```

**Ejemplo 2**: [link de simulación](http://www.pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20//%20p%20is%20on%20the%20stack,%20of%20type%20'int%20*'%20%28a%20pointer%20to%20an%20int%29%0A%20%20int*%20ip%20%3D%20malloc%2810%20*%20sizeof%28int%29%29%3B%20%0A%0A%20%20int%20i%3B%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%2010%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20ip%5Bi%5D%20%3D%20i%3B%0A%20%20%20%20printf%28%22ip%5B%25d%5D%20is%20%25d%5Cn%22,%20i,%20ip%5Bi%5D%29%3B%0A%20%20%7D%0A%0A%20%20//%20can%20use%20same%20area%20for%20array%20of%20char's%0A%20%20//%20but,%20need%20to%20CAST%20it%20to%20avoid%20C's%20type%20system%0A%20%20char*%20cp%20%3D%20%28char%20*%29%20ip%3B%20//%20i'm%20the%20boss%20let%20me%20do%20this%0A%0A%20%20for%20%28i%20%3D%200%3B%20i%20%3C%2026%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20cp%5Bi%5D%20%3D%20'a'%20%2B%20i%3B%0A%20%20%20%20printf%28%22cp%5B%25d%5D%20is%20%25c%5Cn%22,%20i,%20cp%5Bi%5D%29%3B%0A%20%20%7D%0A%0A%20%20//%20what%20happens%20if%20we%20print%20out%20elements%20of%20ip%5B%5D%20now%3F%0A%20%20//%20printf%28%22%25d%5Cn%22,%20ip%5B0%5D%29%3B%0A%20%20%20%0A%20%20free%28ip%29%3B%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D) 

```C
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  // p is on the stack, of type 'int *' (a pointer to an int)
  int* ip = malloc(10 * sizeof(int)); 

  int i;
  for (i = 0; i < 10; i++) {
	ip[i] = i;
	printf("ip[%d] is %d\n", i, ip[i]);
  }

  // can use same area for array of char's
  // but, need to CAST it to avoid C's type system
  char* cp = (char *) ip; // i'm the boss let me do this

  for (i = 0; i < 26; i++) {
	cp[i] = 'a' + i;
	printf("cp[%d] is %c\n", i, cp[i]);
  }

  // what happens if we print out elements of ip[] now?
  // printf("%d\n", ip[0]);
   
  free(ip);
  return 0;
}
```

### Importante ###

Todos los ejemplos que siguen a continuación tienen que ser analizados y corregidos.

**Ejemplo 3**: [link de simulación](https://repl.it/@HENRYALBERTOALB/example3)

```C
#include <stdio.h>
#include <string.h>

#define MAX_BUFFER (512)

int main(int argc, char *argv[]) {
  char* reverse[10]; // 10 lines (max)
  int index = 0;

  char buffer[MAX_BUFFER]; // only mem allocated for string
  while (fgets(buffer, MAX_BUFFER, stdin) != NULL) {
	reverse[index++] = buffer; // buggy; why?
  }

  printf("index: %d\n", index);

  if (!feof(stdin)) {
	fprintf(stderr, "error during reading of stdin\n");
  }
    
  int i;
  for (i = index - 1; i >= 0; i--) {
	printf("%s", reverse[i]);
  }

  return 0;
}
```

**Ejemplo 4**: [link de simulación](https://repl.it/@HENRYALBERTOALB/example4) 

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER (512)
#define ARRAY_SIZE (10)

int main(int argc, char *argv[]) {
  char* reverse[ARRAY_SIZE]; // a limit!
  int index = 0;

  char buffer[MAX_BUFFER];
  while (fgets(buffer, MAX_BUFFER, stdin) != NULL) {
    // "hello" -> strlen()-> 5 + 1
    reverse[index] = malloc(strlen(buffer) + 1);
    strcpy(reverse[index], buffer);
    index++;
  // possible buffer overrun?
  }

  printf("index: %d\n", index);

  if (!feof(stdin)) {
	fprintf(stderr, "error during reading of stdin\n");
  }
    
  int i;
  for (i = index - 1; i >= 0; i--) {
	printf("%s", reverse[i]);
	free(reverse[i]);
  }

  return 0;
}
```

**Ejemplo 5**: [link de simulación](https://repl.it/@HENRYALBERTOALB/example5) 

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_BUFFER (512)
#define ARRAY_SIZE (100)

int main(int argc, char *argv[]) {
  char** reverse = (char **) malloc(ARRAY_SIZE * sizeof(char *));
  int current_size = ARRAY_SIZE;
  int index = 0;

  char buffer[MAX_BUFFER];
  while (fgets(buffer, MAX_BUFFER, stdin) != NULL) {
    reverse[index] = strdup(buffer);
	index++;

	// reallocate array to bigger size
	if (index == current_size) {
	  current_size += ARRAY_SIZE;
	  reverse = realloc(reverse, current_size * sizeof(char *));
	  assert(reverse != NULL);
	}
  }

  if (!feof(stdin)) {
    fprintf(stderr, "error during reading of stdin\n");
  }
    
  int i;
  for (i = index - 1; i >= 0; i--) {
	printf("%s", reverse[i]);
	free(reverse[i]);
  }
  free(reverse);

  return 0;
}
```

**Ejemplo 6**: [link de simulación](https://repl.it/@HENRYALBERTOALB/example6)

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_BUFFER (512)

typedef struct __line_t {
  char line[MAX_BUFFER];
  struct __line_t* next;
} line_t;


int main(int argc, char *argv[]) {
  // this will point to the "list" of entries
  line_t* head = NULL;
    
  char buffer[MAX_BUFFER];
  while (fgets(buffer, MAX_BUFFER, stdin) != NULL) {
	line_t* n = malloc(sizeof(line_t));
	assert(n != NULL);
	strncpy(n->line, buffer, MAX_BUFFER);

	// how to "insert" new structure:
	// first, have new struct point to head
	n->next = head;

	// then, reassign head to point to new struct
	// result is a reversed list ...
	head = n;
  }

  if (!feof(stdin)) {
	fprintf(stderr, "error during reading of stdin\n");
  }
    
  while (head) {
	printf("%s", head->line);
	line_t* tmp = head;
	head = head->next;
	free(tmp);
  }

  return 0;
}
```