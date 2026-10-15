c
#include <stdio.h>
int main() {
    int a[10], i, key, found = 0;
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 10; i++) {
        if(a[i] == key) {
            printf("Found at position %d\n", i + 1);
            found = 1;
        }
    }
    if(!found)
        printf("Not found");
    return 0;
}
c
#include <stdio.h>
int main() {
    int a[10], i, sum = 0;
    float avg;

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / 10.0;
    printf("Sum = %d\nAverage = %.2f", sum, avg);
    return 0;
}
c
#include <stdio.h>
int main() {
    int A[3], B[3], C[3], i;

    for(i = 0; i < 3; i++)
        scanf("%d", &A[i]);

    for(i = 0; i < 3; i++)
        scanf("%d", &B[i]);

    for(i = 0; i < 3; i++) {
        C[i] = A[i] + B[i];
        printf("%d ", C[i]);
    }
    return 0;
}
c
#include <stdio.h>
int main() {
    int A[3], B[3], C[6], i;

    for(i = 0; i < 3; i++)
        scanf("%d", &A[i]);

    for(i = 0; i < 3; i++)
        scanf("%d", &B[i]);

    for(i = 0; i < 3; i++)
        C[i] = A[i];

    for(i = 0; i < 3; i++)
        C[i + 3] = B[i];

    for(i = 0; i < 6; i++)
        printf("%d ", C[i]);

    return 0;
}
c
#include <stdio.h>
int main() {
    int a[10], i, max;

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for(i = 1; i < 10; i++)
        if(a[i] > max)
            max = a[i];

    printf("Largest = %d", max);
    return 0;
}
c
#include <stdio.h>
int main() {
    int a[11], i, pos, value, n = 10;

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);
    scanf("%d", &value);

    if(pos < 1 || pos > n + 1) {
        printf("Invalid position");
        return 0;
    }

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
c
#include <stdio.h>
int main() {
    int a[10], i, pos, n = 10;

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position");
        return 0;
    }

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
c
#include <stdio.h>
int main() {
    int a[10], i, j, temp;

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}
c
#include <stdio.h>
int main() {
    int a[10], i, j, temp;

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}
c
#include <stdio.h>
int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2, i, j, k;

    scanf("%d%d", &r1, &c1);
    scanf("%d%d", &r2, &c2);

    if(r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
       r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10 ||
       c1 != r2) {
        printf("Invalid dimensions");
        return 0;
    }

    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            C[i][j] = 0;
            for(k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

ChatGPT is AI and can make mistakes.

No file chosenNo file chosenNo file chosen

