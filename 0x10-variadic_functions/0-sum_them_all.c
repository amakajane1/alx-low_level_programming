#include "variadic_functions.h"
/**
 * sum_them_all - sums all arguments
 *
 * @n: number of arguments to be added
 * Return: always
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	i = 0;
	sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

