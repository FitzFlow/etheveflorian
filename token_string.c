#include "exercices.h"


char *token_string(char **str)
{
    if (!(*str) || (*str)[0] != '"')
        return (NULL);

    int cpt = 0;
    (*str)++;
    char *new = malloc(sizeof(char) * 1024);

    while ((*str)[0] != '"' && (*str)[0] != '\0') {
        new[cpt] = (*str)[0];
        cpt++;
        (*str)++;
    }
    (*str)++;
    new[cpt] = '\0';
    return (new);
}

// int main(void)
// {
// char *str = "\"hello\"42\"world\"";
// char *output_str1 = NULL;
// char *output_str2 = NULL;

// printf("str before = %s\n", str);
// printf("valid str = %s\n", token_string(&str));
// printf("valid str = %s\n", token_string(&str));
// printf("str after = %s\n", str);
// }