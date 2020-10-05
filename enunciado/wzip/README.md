
En este directorio, usted deberá implementar el programa `wzip.c`  y compilarlo como `wzip` (e.g., `gcc -o wzip wzip.c -Wall -Werror`)

Despues de hacer esto, usted  puede correr los test de este directorio al ejecutar el script `test-wzip.sh`. Si todo sale bien, usted verá:

```sh
prompt> ./test-wzip.sh
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
prompt>
```

**Nota del autor**:
The `test-wcat.sh` script is just a wrapper for the `run-tests.sh` script in
the `tester` directory of this repository. This program has a few options; see
the relevant
[README](https://github.com/remzi-arpacidusseau/ostep-projects/blob/master/tester/README.md)
for details.