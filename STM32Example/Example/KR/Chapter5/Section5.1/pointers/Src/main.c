int main ()
{
	int x = 1, y = 2, z[10];
	int *ip; 				/* ip is a pointer to int */
	
	ip = &x; 				/* ip now points to x */
	y = *ip; 				/* y is now 1 */
	*ip = 0; 				/* x is now 0 */
	ip = &z[0]; 		/* ip now points to z[0] */
	*ip = *ip + 10; /* increments *ip by 10 */
	y = *ip + 1; 		/* takes whatever ip points at, adds 1, and assigns the result to y */
	*ip += 1; 			/* increments what ip points to */
	++*ip; 					/* increments what ip points to */
	(*ip)++; 				/* increments what ip points to */
									/* The parentheses are necessary in this last example; without them, the expression would
									increment ip instead of what it points to, because unary operators like * and ++ associate right
									to left.*/
									
	int *iq;				/* iq is a pointer to int */
	iq = ip; 				/* copies the contents of ip into iq, thus making iq point to whatever ip pointed to */
	return 0;

}
