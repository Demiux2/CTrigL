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

double rad_to_deg(double x, bool reduce_range){

    double result = x * (180.0 / PI); // rad to deg conversion
    if (reduce_range) {
        // Reduce to [0, 360] range
        result = fmod(result, 360.0);
        if (result < 0) {
            result += 360.0; // Making the result positive
        }
    }
    else{
        return result;
    }
}

double deg_to_rad(double deg, bool reduce_range) {
    double result = deg * (PI / 180.0); // deg to rad conversion
    if (reduce_range) {
        // Reduce to [0, 2PI] range
        result = fmod(result, 2 * PI);
        if (result < 0) {
            result += 2 * PI; // Making the result positive
        }
    }
    else{
        return result;
    }
}
