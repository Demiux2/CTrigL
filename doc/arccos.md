# arccos()

Arccos or inverse cosine is a trigonometrical function which has 1 parameter,`x`.
The complete function name is `double arccos(double x)`, which needs an double type input and outputs a double type result.

## Code example
```
#include <stdio.h>
#include "CTrigL.h"

int main(){
    
    double x;
    printf("Input number to calculate the arcocosine of it: \n");
    scanf("%lf", &x);
    printf("The result of arccos(%f) is %f\n", x, arccos(x));
    return 0;
    
}
```
