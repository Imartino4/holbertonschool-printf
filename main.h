#ifndef PF_FUNCTIONS_included
#define PF_FUNCTIONS_included
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char);
int _char(va_list ptr);
int _string(va_list ptr);
int _int(va_list);
int _bin(va_list);
int func_aux(char, va_list);
int _pow_integers(int, int);

typedef struct pf_aux
{
	char type;
	int (*f)(va_list ptr);
} pf_aux;

#endif
