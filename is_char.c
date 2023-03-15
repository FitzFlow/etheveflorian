#include "exercices.h"

bool is_char(char **str, char c)
{
    if (!(*str))
        return (false);

    if ((*str)[0] == c) {
        (*str)++;
        return (true);
    }
    return (false);
}

// int main(void)
// {
//     char *str = "abc";

//     printf("str before = %s\n", str);
//     printf("valid token = %d\n", is_char(&str, 'a'));
//     printf("valid token = %d\n", is_char(&str, 'c'));
//     printf("str after = %s\n", str);
// }