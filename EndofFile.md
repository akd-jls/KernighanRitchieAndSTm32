# End of File (EOF) #
 
Introduction
============

The simplest input mechanism is to read one character at a time from the
*standard input*, normally the keyboard, with getchar:

int getchar(void)

getchar returns the next input character each time it is called, or EOF
when it encounters end

of file. The symbolic constant EOF is defined in \<stdio.h\>. The value
is -1, defined in ARM C library.

In our environments, a file is substituted for the keyboard. All inputs
to program comes when we type in “Debug (printf) viewer” of uVision.

We can’t type -1 from keyboard. So we have used an alternate value to
indicate EOF.

We have used ASCII value 0x04, this is EOT (End of transmission) is
ASCII.

EOT can be entered in Windows PC by typing ‘Ctrl + D’.

So in all our code where EOF is used, we have \#undef the EOF and
redefined \#define to 0x04.

\#undef EOF

\#define EOF 0x04

If we don’t so an \#undef we will get warning:

warning: incompatible redefinition of macro "EOF"
