/*
** EPITECH PROJECT, 2023
** C-pool
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char my_strupcase(char str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char c);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char *const *tab);
int too_long(int nbrvalue, int signe, int len, char const *str);
int nbr_str(char *const *tab);
char *concat_params(int argc, char **argv);
char **my_str_to_word_array(char const *str);
void my_put_nbr_long(long a);
void my_put_nbr_longlong(long long a);
char *nbr_to_str(int nb, int i, char *result, int irev);
char *my_revstrn(char *str, int i);
char *my_strdup(char const *src);

#endif /* !MY_H_ */
