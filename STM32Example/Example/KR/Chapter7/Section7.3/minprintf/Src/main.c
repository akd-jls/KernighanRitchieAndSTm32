#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>

#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */



/* minprintf: minimal printf with variable argument list */
void minprintf(char *fmt, ...)
{
  va_list ap; /* points to each unnamed arg in turn */
  char *p, *sval;
  int ival;
  double dval;
  va_start(ap, fmt); /* make ap point to 1st unnamed arg */
  for (p = fmt; *p; p++) {
    if (*p != '%') {
      putchar(*p);
      continue;
    }
    switch (*++p) {
    case 'd':
      ival = va_arg(ap, int);
      printf("%d", ival);
      break;
    case 'f':
      dval = va_arg(ap, double);
      printf("%f", dval);
      break;
    case 's':
      for (sval = va_arg(ap, char *); *sval; sval++)
        putchar(*sval);
      break;
    default:
      putchar(*p);
      break;
    }
  }
  va_end(ap); /* clean up when done */
}

main() 
{
	char *string = "hello, world";
	
	minprintf("%d",10); printf("\n");
	minprintf("%f",10.2); printf("\n");
	minprintf("%s",string); printf("\n");

  return 0;
}
