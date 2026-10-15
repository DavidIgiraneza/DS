1.

c
```
#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push() {
    int x;
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else {
        printf("Enter value: ");
        scanf("%d", &x);
        stack[++top] = x;
    }
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Deleted: %d\n", stack[top--]);
}

void print() {
    int i;
    if (top == -1)
        printf("Stack is empty\n");
    else
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
}

void peek() {
    if (top == -1)
        printf("Stack is empty\n");
    else
        printf("Top element: %d\n", stack[top]);
}

void peep() {
    int pos;
    printf("Enter position from top: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > top + 1)
        printf("Invalid position\n");
    else
        printf("Element: %d\n", stack[top - pos + 1]);
}

void change() {
    int pos, x;
    printf("Enter position from top: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > top + 1)
        printf("Invalid position\n");
    else {
        printf("Enter new value: ");
        scanf("%d", &x);
        stack[top - pos + 1] = x;
    }
}

int main() {
    int choice;
    do {
        printf("\n1.Push 2.Pop 3.Print 4.Peek");
        printf("\n5.Peep 6.Change 7.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: print(); break;
            case 4: peek(); break;
            case 5: peep(); break;
            case 6: change(); break;
            case 7: break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 7);

    return 0;
}
```

2.

c
```
#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
        printf("Invalid input\n");
    else
        printf("Factorial = %lld\n", factorial(n));

    return 0;
}
```

3.

c
```
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], stack[100];
    int i, top = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
        stack[++top] = str[i];

    printf("Reversed string: ");
    while (top != -1)
        printf("%c", stack[top--]);

    printf("\n");
    return 0;
}
```

4.

c
```
#include <stdio.h>

int main() {
    int stack[21], n, top = -1, i;
    unsigned long long fact = 1;

    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Invalid input\n");
        return 0;
    }

    for (i = n; i >= 1; i--)
        stack[++top] = i;

    while (top != -1)
        fact *= stack[top--];

    printf("Factorial = %llu\n", fact);
    return 0;
}
```

5.

c
```
#include <stdio.h>

int main() {
    int stack[100], a, b, i, top = -1;
    long long power = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);

    if (b < 0 || b > 100) {
        printf("Invalid exponent\n");
        return 0;
    }

    for (i = 0; i < b; i++)
        stack[++top] = a;

    while (top != -1)
        power *= stack[top--];

    printf("Power = %lld\n", power);
    return 0;
}
```

6.

c
```
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);
    return 0;
}
```

7.

c
```
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter an integer greater than 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input\n");
        return 0;
    }

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("Smallest divisor = %d\n", i);
            break;
        }
    }

    return 0;
}
```

8.

c
```
#include <stdio.h>

int min(int a[], int n) {
    int m;
    if (n == 1)
        return a[0];

    m = min(a, n - 1);
    return a[n - 1] < m ? a[n - 1] : m;
}

int max(int a[], int n) {
    int m;
    if (n == 1)
        return a[0];

    m = max(a, n - 1);
    return a[n - 1] > m ? a[n - 1] : m;
}

int main() {
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Minimum = %d\n", min(a, n));
    printf("Maximum = %d\n", max(a, n));

    return 0;
}
```

9.

c
```
#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void insert() {
    int x;

    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &x);

    if (front == -1)
        front = 0;

    queue[++rear] = x;
}

void delete() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front++]);

    if (front > rear)
        front = rear = -1;
}

void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main() {
    int choice;

    do {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
```