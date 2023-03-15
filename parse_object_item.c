
#include "exercices.h"

struct object_item {
    char *key;
    char *value;
};


bool parse_object_item(char **str, struct object_item *data)
{
    if (!(*str))
        return (false);
    char *tmp = token_string(str);
    data->key = tmp;
    if ((*str)[0] == ':')
        (*str)++;
    tmp = token_string(str);
    data->value = tmp;
    return true;
}

int main(void)
{
char *str = "\"hello\":\"world\"";
struct object_item output_item = {0};

printf("str before = %s\n", str);
printf("valid token = %d\n", parse_object_item(&str, &output_item));
printf("str after = %s\n", str);
printf("output key = %s\n", output_item.key);
printf("output value = %s\n", output_item.value);
    return (0);
}