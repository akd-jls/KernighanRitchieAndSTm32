#include <stdio.h>

#undef  EOF
#define EOF 0x04 	/* warning:  incompatible redefinition of macro "EOF"  */
#define IN 	1  		/* inside a word */
#define OUT 0 		/* outside a word */

/* count lines, words, and characters in input */
int main()
{
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\r')
      ++nl;
    if (c == ' ' || c == '\r' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}

