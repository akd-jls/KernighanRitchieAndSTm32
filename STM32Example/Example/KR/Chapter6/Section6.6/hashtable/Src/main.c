#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#undef  EOF
#define EOF 0x04 /* warning:  incompatible redefinition of macro "EOF"  */

#define MAXWORD 100
#define HASHSIZE 10
#define BUFSIZE 100
char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */

struct nlist { /* table entry: */
  struct nlist *next; /* next entry in chain */
  char *name; /* defined name */
  char *defn; /* replacement text */
};

static struct nlist *hashtab[HASHSIZE]; /* pointer table */


struct nlist *lookup(char *);
char *strdup(char *);


/* getword: get next word or character from input */
int getword(char *word, int lim)
{
  int c, getch(void);
  void ungetch(int);
  char *w = word;
  while (isspace(c = getch())) //isspace to skip whitespace
    ;
  if (c != EOF)
    *w++ = c;
  if (!isalpha(c)) {  //isalpha to identify letters
    *w = '\0';
    return c;
  }
  for ( ; --lim > 0; w++)
    if (!isalnum(*w = getch())) { //isalnum to identify letters and digits
      ungetch(*w);
      break;
    }
  *w = '\0';
  return word[0];
}


int getch(void) /* get a (possibly pushed-back) character */
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}


void ungetch(int c) /* push character back on input */
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}

/*
The hashing function, which is used by both lookup and install, adds each character value in
the string to a scrambled combination of the previous ones and returns the remainder modulo
the array size. This is not the best possible hash function, but it is short and effective.
*/

/* hash: form hash value for string s */
unsigned hash(char *s)
{
  unsigned hashval;						/* Unsigned arithmetic ensures that the hash value is non-negative. */
  for (hashval = 0; *s != '\0'; s++)
    hashval = *s + 31 * hashval;
  return hashval % HASHSIZE;
}

/*
install uses lookup to determine whether the name being installed is already present; if so,
the new definition will supersede the old one. Otherwise, a new entry is created. install
returns NULL if for any reason there is no room for a new entry.
*/

/* install: put (name, defn) in hashtab */
struct nlist *install(char *name, char *defn)
{
  struct nlist *np;
  unsigned hashval;
  if ((np = lookup(name)) == NULL) { /* not found */
    np = (struct nlist *) malloc(sizeof(*np));
    if (np == NULL || (np->name = strdup(name)) == NULL)
      return NULL;
    hashval = hash(name);
    np->next = hashtab[hashval];
    hashtab[hashval] = np;
  } else /* already there */
    free((void *) np->defn); /*free previous defn */
  if ((np->defn = strdup(defn)) == NULL)
    return NULL;
  return np;
}

/*
The hashing process produces a starting index in the array hashtab; if the string is to be found
anywhere, it will be in the list of blocks beginning there. The search is performed by lookup. If
lookup finds the entry already present, it returns a pointer to it; if not, it returns NULL.
*/
/* lookup: look for s in hashtab */
struct nlist *lookup(char *s)
{
  struct nlist *np;
  for (np = hashtab[hash(s)]; np != NULL; np = np->next) /* This for loop in lookup is the standard idiom for walking along a linked list */
    if (strcmp(s, np->name) == 0)
      return np; /* found */
  return NULL; /* not found */
}


char *strdup(char *s) /* make a duplicate of s */
{
  char *p;
  p = (char *) malloc(strlen(s)+1); /* +1 for '\0' */
  if (p != NULL)
    strcpy(p, s);
  return p;
}

int getMacro()
{
  char macroname[MAXWORD] ;
  char macrotoken[MAXWORD]; 
  
  while(1)
  {
    
    if (getword(macroname, MAXWORD) == EOF){
      printf("end of file\n");
      return 0;
    }
    
    if(strcmp(macroname,"#")!=0){
      printf("missing #\n");
      return 0;	
    }
    
    if (getword(macroname, MAXWORD) == EOF){
      printf("end of file\n");
      return 0;
    }
    
    if(strcmp(macroname,"define")!=0){
      printf("missing define\n");
      return 0;	
    }
    
    if (getword(macroname, MAXWORD) == EOF){
      printf("missing macro name\n");				
      return 0;
    }
    
    if (getword(macrotoken, MAXWORD) == EOF){
      printf("missing macro token\n");				
      return 0;
    }
    
    while(getchar()!='\r'){
      printf("End of line missing\n");
      return 0;
    }
    
    install(macroname, macrotoken);
  }
  
}


/* word frequency count */
int main()
{
  struct nlist *hashtabtemp = NULL;
  getMacro();
  hashtabtemp = hashtab[0];
  
  for(int i =0; i < HASHSIZE; )
  {
    while(hashtabtemp != NULL){
      printf("#define %s	%s\n", hashtabtemp->name, hashtabtemp->defn);
      hashtabtemp = hashtab[i]->next ;
    }
    hashtabtemp = hashtab[++i];
  }
  
}
