
#include "exercices.h"


bool is_word(char **str, char *word)
{
    if (!(*str) || !word)
        return (false);

    for (int cpt = 0; cpt != strlen(word); cpt++) {
        if ((*str)[cpt] != word[cpt])
            return (false);
    }

    int i = 0;

    while (i != strlen(word)) {
        if ((*str)[0] == word[i]) {
            (*str)++;
            i++;
        } else
            return (false);
    }

    return (true);
}

// int main(void)
// {
// char *str = "HelloWorldAndUniverse";

// printf("str before = %s\n", str);
// printf("valid token = %d\n", is_word(&str, "Hello"));
// printf("valid token = %d\n", is_word(&str, "World"));
// printf("str after = %s\n", str);
// }