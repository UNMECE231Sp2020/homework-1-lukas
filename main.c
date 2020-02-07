
#include "my_complex.h"

int main()
{

	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex (*fn_ptr[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};

	double (*fn_ptr1[2])(Complex) = {magnitude, phase};
	int i;

	for(i=0;i<4;i++)
	{
		HDLR1(fn_ptr[i], a, b);
	
	}
	for(i=0;i<2;i++)
	{
		HDLR2(fn_ptr1[i], a);
		HDLR2(fn_ptr1[i], b);
	}

	
	
	return 0;
}
