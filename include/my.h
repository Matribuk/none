/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my.h
*/
#ifndef MY
    #define MY
typedef struct tablo {
    int size;
    int hauteur;
    int largeur;
    int size2;
    int valuemax;
    int ymax;
    int xmax;
    int square;
    int yvoulu;
    int xvoulu;
    char *tablou;
    char *number;
    int lenint;
} tablo_t ;
char *my_strcat_malloc(char *buffer, char *cat);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
int my_swap(int *a, int *b);
int my_show_word_array(char *const *tab);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);
void reverse(int **tablox, tablo_t *tablo, int y, int x);
void reverse2(int **tablox, tablo_t *tablo, int y, int x);
void printboard(int **tablox, tablo_t *tablo);
void printboard2(int **tablox, tablo_t *tablo);
void printboard3(int **tablox, tablo_t *tablo);
void branches(int **tablox, tablo_t *tablo, int i, int o);
void branches2(int **tablox, char *buffer, int s, tablo_t *tablo);
int getnbr3(int value);
int getnbr2(char *argv[]);
char **countbsq(tablo_t *tablo, char *buffer);
int check(int argc, char *argv[], tablo_t *tablo);
int bsqerror(char *argv[]);
int bsq2error(char *buffer);
#endif
