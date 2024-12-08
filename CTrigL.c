#include <stdio.h>
#include <stdbool.h>
#include "CTrigL.h"

#include <math.h>
#undef acos
#undef atan
#undef atan2
#undef cos
#undef cosh
#undef sin
#undef sinh
#undef tanh
#undef exp
#undef ldexp
#undef log
#undef log10
//#undef modf
//#undef pow
//#undef sqrt
#undef ceil
//#undef fabs

//
//Trigonometric functions
//


//Arcocosine or inverse cosine (Arcocoseno/ACOS)
double arccos(double x){

	//Input range verification
	if(x < -1.0 || x > 1.0){
		return NAN;//Input range must be between [-1,1] range
	}
	//Special case handling
	if(x == 1.0){
		return 0.0;
	}
	else if(x == -1.0){
		return PI;
	}

	double arcsin_val = asin(x);
	double result = PI2 - arcsin_val;
	return result;
}
