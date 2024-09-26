/**
 * ==============================================================================
 * Author: Michael Gene Brockus (Dreamer)
 * Email: michaelbrockus@gmail.com
 * Organization: Fossil Logic
 * Description: 
 *     This file is part of the Fossil Logic project, where innovation meets
 *     excellence in software development. Michael Gene Brockus, also known as
 *     "Dreamer," is a dedicated contributor to this project. For any inquiries,
 *     feel free to contact Michael at michaelbrockus@gmail.com.
 * ==============================================================================
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

int main() {
    int32_t int1, int2;
    float_t float1, float2;

    // Reading two integers
    if (scanf("%d %d", &int1, &int2) != 2) {
        fprintf(stderr, "Error: Invalid input. Please enter two integers.\n");
        return EXIT_FAILURE;
    }

    // Reading two floats
    if (scanf("%f %f", &float1, &float2) != 2) {
        fprintf(stderr, "Error: Invalid input. Please enter two floating-point numbers.\n");
        return EXIT_FAILURE;
    }

    // Handle potential overflow/underflow for integers (optional, adds robustness)
    if (int1 > INT32_MAX - int2 || int1 < INT32_MIN + int2) {
        fprintf(stderr, "Error: Integer overflow in addition.\n");
        return EXIT_FAILURE;
    }

    // Handle potential overflow/underflow for floats (optional, adds robustness)
    if (float1 > FLT_MAX - float2 || float1 < -FLT_MAX + float2) {
        fprintf(stderr, "Error: Float overflow in addition.\n");
        return EXIT_FAILURE;
    }

    // Print sum and difference of the integers
    if (printf("%d %d\n", int1 + int2, int1 - int2) < 0) {
        fprintf(stderr, "Error: Failed to print integer values.\n");
        return EXIT_FAILURE;
    }

    // Print sum and difference of the floats (rounded to 1 decimal place)
    if (printf("%.1f %.1f\n", float1 + float2, float1 - float2) < 0) {
        fprintf(stderr, "Error: Failed to print float values.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
