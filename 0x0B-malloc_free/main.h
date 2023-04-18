#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

void simple_print_buffer(char *buffer, unsigned int size);
char *create_array(unsigned int size, char c);
int main(void);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);




#endif