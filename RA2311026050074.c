#include <stdio.h>

int main() {
    int tokens, lines;
    float token_density;
    float threshold = 5.0;

    // Input
    printf("Enter total number of tokens: ");
    scanf("%d", &tokens);

    printf("Enter total number of lines: ");
    scanf("%d", &lines);

    // Avoid division by zero
    if (lines == 0) {
        printf("Error: Number of lines cannot be zero.\n");
        return 1;
    }

    // Feature computation
    token_density = (float)tokens / lines;

    // Output
    printf("\n--- Result ---\n");
    printf("Token Density = %.2f\n", token_density);

    // Flag generation
    if (token_density > threshold) {
        printf("Flag: Token Heavy Code\n");
    } else {
        printf("Flag: Normal Code\n");
    }

    return 0;
}