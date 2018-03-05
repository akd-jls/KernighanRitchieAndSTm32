

#include <stdio.h>


/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}


int main ()
{
	char buffer[110]; 
	char format[10];
	char c = 0;
	snprintf(format, sizeof(format), "%%%ds", sizeof(buffer)-1);
	
	printf("Enter string: ");
	scanf(format,buffer);
	printf("\n");
	printf("Entered string: %s\n", buffer);

	printf("Enter squeeze char: ");
	c = getchar(); // being in windows machine we get '\r' and '\n'. '\r' processed in scanf. '\n' here
	c = getchar();
	printf("\n");
	
	
	squeeze(buffer, c);
	printf("squeezed string: %s\n", buffer);
	
	return 0;

}
