#include <stdio.h>

#define START 0 // valor inicial
#define END 100 // valor final
#define STEP 1 // incremento

int main() {
    printf("Imprimindo números de %d a %d com incremento de %d:\n", START, END, STEP);

    for (int i = START; i <= END; i += STEP) {
        printf("%d\n", i);
    }

    return 0;
}