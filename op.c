#include "main.h"
#include <stddef.h>
/**
 *
 *
 */
int opt(char s, va_list ptr)
{ 
	pf_aux pf_aux[] = {
		{'c', _char},
		{'s', _string},
		{'\0', NULL}
	};
	int j = 0, k = 0;

	for (j = 0; pf_aux[j].type != '\0'; j++)
        {
		if (pf_aux[j].type == s)
		{
                	k = pf_aux[j].f(ptr);
                        break;
                }
        }
        if (pf_aux[j].type == '\0' && s != '%' && s != ' ')
        {
	        if (s != '\0')
                {
        	        _putchar('%');
                        _putchar(s);
                        k = 2;
                }
                else
                {
       		         return (-1);
                }
        }


	return(k);
}
