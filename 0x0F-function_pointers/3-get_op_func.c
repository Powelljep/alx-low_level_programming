/**
 * get_op_func - function that selects the correct function to
 * perform the operation asked by the user
 * @s: operato passed
 *
 *
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
}
