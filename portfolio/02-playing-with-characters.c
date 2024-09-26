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
#include <stdlib.h>

int main() {
    char ch;

    // Error handling for scanf
    if (scanf("%c", &ch) != 1) {
        fprintf(stderr, "Error: Failed to read character input.\n");
        return EXIT_FAILURE;
    }
    
    // Error handling for printf
    if (printf("%c\n", ch) < 0) {
        fprintf(stderr, "Error: Failed to print character.\n");
        return EXIT_FAILURE;
    }

    // Error handling for puts
    if (puts("Language") == EOF) {
        fprintf(stderr, "Error: Failed to write to output.\n");
        return EXIT_FAILURE;
    }

    if (puts("Welcome To C!!") == EOF) {
        fprintf(stderr, "Error: Failed to write to output.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
