#include <stdio.h>


enum _type{
	INT,
	FLOAT,
	STRING
};

union u_tag {
	int ival;
	float fval;
	char *sval;
} u;



int main(void)
{
  enum _type utype = INT;
	u.ival = 5;

	if (utype == INT)
		printf("%d\n", u.ival);
	else if (utype == FLOAT)
		printf("%f\n", u.fval);
	else if (utype == STRING)
		printf("%s\n", u.sval);
	else
		printf("bad type %d in utype\n", utype);

}
