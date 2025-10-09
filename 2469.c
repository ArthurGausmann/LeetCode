/*
2469.
You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.
You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].
Return the array ans. Answers within 10-5 of the actual answer will be accepted.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    *returnSize = 2;
    double k = celsius + 273.15;
    double f = celsius * 1.8 + 32;

    double *converted;
    converted = (double*) malloc(2*sizeof(double));
    converted[0] = k;
    converted[1] = f;

    return converted;
}