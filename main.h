#ifndef PF_FUNCTIONS_included
#define PF_FUNCTIONS_included
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char);
int _char(va_list ptr);
int _string(va_list ptr);
int _percent(void);
int func_aux(char, va_list);

typedef struct pf_aux
{
	char type;
	int (*f)(va_list ptr);
} pf_aux;

#endif
