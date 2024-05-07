#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <string.h>
#include <stdio.h>


char split_arguments(char *str);
int ft_strlen(char *str);
int ft_isdigit(char c);
int num_valid(char *str);
void ft_putstr(char *str);
void process_arg(char *arg);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *str);

#endif /* PUSH_SWAP_H */

