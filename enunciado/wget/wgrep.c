#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *archivo;
    if (argc == 1)
    {
        printf("wgrep: searchterm [file ...]\n");
        exit(1);
    }
    else if (argc == 2)
    {
        size_t len = 0;
        char *line = NULL;
        archivo = stdin;
        while (getline(&line, &len, archivo) != -1)
        {
            if (strstr(line, argv[1]) != NULL)
            {
                printf("%s", line);
            }
        }
        fflush(archivo);
    }
    else
    {
        size_t len = 0;
        char *line = NULL;

        for (int i = 2; i < argc; i++)
        {
            archivo = fopen(argv[i], "r");
            if (archivo == NULL)
            {
                printf("wgrep: cannot open file\n");
                exit(1);
            }

            while (getline(&line, &len, archivo) != -1)
            {
                if (strstr(line, argv[1]) != NULL)
                {
                    printf("%s", line);
                }
            }
            fclose(archivo);
        }
    }
    exit(0);
}