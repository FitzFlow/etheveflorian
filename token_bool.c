
#include "exercices.h"

bool token_bool(char **str, bool *value)
{
    if (!(*str))
        return false;

    char **tmp = str;

    if (is_word(tmp, "false")) {
        is_word(str, "false");
        *value = false;
        return (true);
    } else if (is_word(tmp, "true")) {
        is_word(str, "true");
        *value = true;
        return (true);
    }

    return (false);
}

// int main(void)
// {
// char *str = "42false";
// bool output_bool = false;

// printf("str before = %s\n", str);
// printf("valid token = %d\n", token_bool(&str, &output_bool));
// printf("str after = %s\n", str);
// printf("output bool = %d\n", output_bool);
// }