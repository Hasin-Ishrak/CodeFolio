
#include <stdio.h>

int main() {
    int k, r;
    scanf("%d %d", &k, &r);


    if (k%10 == r || k%10==0) {
        printf("1\n");
        return 0;
    }

    for (int i = 2; i <= 10; i++) {
        if ((k * i) % 10 == 0 || (k * i - r) % 10 == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
