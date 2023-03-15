
#include "exercices.h"

struct my_json_array {
    char *value;
    struct my_json_array *next;
};


bool parse_array(char **str, struct my_json_array *data)
{
    struct my_json_array *next = malloc(sizeof(next));

    if (!(*str))
        return (false);
    if ((*str)[0] == '[')
        (*str)++;
    char *tmp = token_string(str);
    data->value = tmp;
    if ((*str)[0] == ',')
        (*str)++;
    next->value = token_string(str);
    data->next = next;
    if ((*str)[0] == ']')
        (*str)++;
    return true;
}

int main(void)
{
// char *str = "[\"hello\",\"world\"]";
char *str = "[\"hello\"]";
struct my_json_array output_array = {0};

printf("str before = %s\n", str);
printf("valid token = %d\n", parse_array(&str, &output_array));
printf("str after = %s\n", str);
printf("output value 0 = %s\n", output_array.value);
printf("output value 1 = %s\n", output_array.next->value);
}