#include <stdio.h>

int main() {

    int start[]  = {1, 2, 3, 5};
    int finish[] = {2, 4, 5, 6};

    int n = 4;
    int i, last = 0;

    printf("Selected activities: A1 ");

    for (i = 1; i < n; i++) {

        if (start[i] >= finish[last]) {

            printf("A%d ", i + 1);

            last = i;
        }
    }

    return 0;
}