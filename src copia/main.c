#include "push_swap.h"

char split_arguments(char *str)
{
    char **prm;
    int i;

    i = 0;
    prm = ft_split(str, ' ');
    if (prm == NULL) {
        return -1;
    }

    while(prm[i] != NULL)
    {
        process_arg(prm[i]);
        i++;
    }
    return 0;
}

int num_valid(char *str)
{
    int i = 0;

  if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1)) {
        i++;
  }

    while (str[i] != '\0') {
        if (!ft_isdigit(str[i]))
            return 0;
        i++;
    }
    return 1; // Devolver 1 si el argumento es válido
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

void process_arg(char *arg)
{
    int n = 0;

    if (num_valid(arg))
    {
        n = ft_atoi(arg);
    }
    printf("%d\n", n);
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if(argc == 2) {
        printf("Cadena de entrada: %s\n", argv[1]); // Imprimir la cadena de entrada
        split_arguments(argv[1]);
    }
    while (i < argc) {
        process_arg(argv[i]);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}

