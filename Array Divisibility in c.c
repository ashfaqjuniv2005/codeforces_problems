#include <stdio.h>

void generate_beautiful_array(int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = i + 1;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int result[n];
        generate_beautiful_array(n, result);

        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}
