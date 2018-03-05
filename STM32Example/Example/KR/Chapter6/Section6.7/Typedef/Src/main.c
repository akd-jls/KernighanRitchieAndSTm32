#include <stdio.h>
#include <stdlib.h> /* for malloc*/

#define MAXLINES 100


typedef int Length;
Length len, maxlen;
Length *lengths[];

typedef char *String;

String p, lineptr[MAXLINES], alloc(int);
int strcmp(String, String);

typedef struct tnode *Treeptr;

typedef struct tnode { /* the tree node: */
	char *word; /* points to the text */
	int count; /* number of occurrences */
	struct tnode *left; /* left child */
	struct tnode *right; /* right child */
} Treenode;

Treeptr talloc(void);

typedef int (*PFI)(char *, char *);
PFI strcmp2, numcmp;

int main(void)
{
	p = (String) malloc(100);	
	
	Treeptr q = talloc();
}


Treeptr talloc(void)
{
	return (Treeptr) malloc(sizeof(Treenode));
}
