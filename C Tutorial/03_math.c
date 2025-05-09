#include <stdio.h>

int main() {
    /* some useful math functions!! */
    /* math.h: for more math functions!! */
    /* pow: power, sqrt: square root, ceil: round up, floor: round down, fabs: absolute value */
    /* log: natural logarithm, log10: base 10 logarithm, exp: e^x, fmod: remainder of division */
    /* sin: sine, cos: cosine, tan: tangent, asin: inverse sine, acos: inverse cosine, atan: inverse tangent */
    /* atan2: inverse tangent of y/x, hypot: hypotenuse of a right triangle */

    /* M_PI: pi, M_E: e, M_SQRT2: square root of 2, M_SQRT1_2: square root of 1/2 */
    /* M_LN2: natural logarithm of 2, M_LN10: natural logarithm of 10, M_LOG2E: base 2 logarithm of e */
    /* M_LOG10E: base 10 logarithm of e, M_PI_2: pi/2, M_PI_4: pi/4, M_1_PI: 1/pi */
    /* M_2_PI: 2/pi, M_2_SQRTPI: 2/sqrt(pi), M_SQRT3: square root of 3, M_SQRT1_3: square root of 1/3 */
    /* M_SQRT2PI: square root of 2*pi, M_1_SQRT2PI: 1/sqrt(2*pi), M_1_SQRT3PI: 1/sqrt(3*pi) */
    /* M_SQRT2: square root of 2, M_SQRT1_2: square root of 1/2, M_LN2: natural logarithm of 2 */

    
    printf("%f", pow(2, 3)); // 2^3 = 8.0
    printf("%f", sqrt(16));
    printf("%f", ceil(16.9786)); // 17.0
    printf("%f", fabs(-16.9786)); // 16.9786
    printf("%f", floor(16.9786)); // 16.0
    printf("%f", log(16)); // 2.772588
    printf("%f", log10(100)); // 2.0
    printf("%f", exp(2)); // e^2 = 7.389056
    printf("%f", fmod(5, 2)); // 1.0
    
    printf("%f", sin(30)); // 0.499999
    printf("%f", cos(30)); // 0.866025
    printf("%f", tan(30)); // 0.577350
    printf("%f", asin(0.5)); // 0.523599
    printf("%f", acos(0.5)); // 1.047198
    printf("%f", atan(0.5)); // 0.463648
    printf("%f", atan2(1, 1)); // 0.785398  
    printf("%f", hypot(3, 4)); // 5.0
    return 0;   
}