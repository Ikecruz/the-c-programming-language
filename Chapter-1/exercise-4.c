#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {

    printf("Temperature Converter \n\n");

    int fahr;

    for (fahr = 0; fahr <= UPPER; fahr += STEP) {
        float celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3d %6.1f\n", fahr, celsius);
    }

    return 0;

}

// int main() {

//     printf("Temperature Converter \n\n");

//     float fahr, celsius;
//     float lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = (5.0/9.0) * (fahr-32.0);
//         printf("%3.0f %6.1f\n", fahr, celsius);
//         fahr = fahr + step;
//     }

//     return 0;
// }