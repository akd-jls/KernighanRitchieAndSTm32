#include <stdio.h>

#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */
#define MAXLINE 1000 /* maximum input line length */

char line[MAXLINE]; /* current input line */

int getline(char line[], int maxline);

/* getline: read a line into s, return length */
int getline(char s[],int lim)
{
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\r'; ++i)
    s[i] = c;
  if (c == '\r') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}


main() /*  */
{
int day, month, year;
char monthname[20];

while (getline(line, sizeof(line)) > 0) {
  if (sscanf(line, "%d %s %d", &day, monthname, &year) == 3)
    printf("valid: %s\n", line); /* 25 Dec 1988 form */
  else if (sscanf(line, "%d/%d/%d", &month, &day, &year) == 3)
    printf("valid: %s\n", line); /* mm/dd/yy form */
  else
    printf("invalid: %s\n", line); /* invalid form */
}
}
