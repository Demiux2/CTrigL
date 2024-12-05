#include <stdio.h>
#include <math.h>
#include "CTrigL.h"

int main(){

	
	printf("arccos() is the custom implementation and acos() the math.h one\n\n");
	printf("arccos(1.0) = %.10f\n",arccos(1.0));
	printf("acos(1.0) = %.10f\n",acos(1.0));
	printf("arccos(-1.0) = %.10f\n",arccos(-1.0));
	printf("acos(-1.0) = %.10f\n",acos(-1.0));
	printf("arccos(0.87) = %.10f\n",arccos(0.87));
	printf("acos(0.87) = %.10f\n",acos(0.87));

}
