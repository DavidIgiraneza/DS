c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL)
            head = newnode;
        else
            temp->next = newnode;

        temp = newnode;
    }

    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
```

c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i, choice;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("1. Start 2. End: ");
    scanf("%d", &choice);

    newnode = malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(choice == 1) {
        newnode->next = head;
        head = newnode;
    } else {
        if(head == NULL)
            head = newnode;
        else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }

    for(temp = head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);

    return 0;
}
```

c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode, *prev;
    int n, i, key, value, choice;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    scanf("%d", &choice);
    scanf("%d%d", &key, &value);

    temp = head;
    prev = NULL;

    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) {
        printf("Node not found");
        return 0;
    }

    newnode = malloc(sizeof(struct node));
    newnode->data = value;

    if(choice == 1) {
        newnode->next = temp->next;
        temp->next = newnode;
    } else {
        if(temp == head) {
            newnode->next = head;
            head = newnode;
        } else {
            prev->next = newnode;
            newnode->next = temp;
        }
    }

    for(temp = head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);

    return 0;
}
```

c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *prev, *del;
    int n, i, choice, key;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        temp = malloc(sizeof(struct node));
        scanf("%d", &temp->data);
        temp->next = NULL;

        if(head == NULL)
            head = temp;
        else {
            prev = head;
            while(prev->next != NULL)
                prev = prev->next;
            prev->next = temp;
        }
    }

    scanf("%d", &choice);

    if(choice == 1) {
        if(head != NULL) {
            del = head;
            head = head->next;
            free(del);
        }
    } else if(choice == 2) {
        if(head != NULL) {
            if(head->next == NULL) {
                free(head);
                head = NULL;
            } else {
                temp = head;
                while(temp->next->next != NULL)
                    temp = temp->next;
                free(temp->next);
                temp->next = NULL;
            }
        }
    } else if(choice == 3) {
        scanf("%d", &key);
        temp = head;
        prev = NULL;

        while(temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if(temp != NULL) {
            if(prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;
            free(temp);
        }
    }

    for(temp = head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);

    return 0;
}
```

c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = temp;

        if(head == NULL)
            head = newnode;
        else
            temp->next = newnode;

        temp = newnode;
    }

    for(temp = head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);

    return 0;
}
```

c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i, choice;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = temp;

        if(head == NULL)
            head = newnode;
        else
            temp->next = newnode;

        temp = newnode;
    }

    scanf("%d", &choice);
    newnode = malloc(sizeof(struct node));
    scanf("%d", &newnode->data);

    if(choice == 1) {
        newnode->prev = NULL;
        newnode->next = head;
        if(head != NULL)
            head->prev = newnode;
        head = newnode;
    } else {
        newnode->next = NULL;

        if(head == NULL) {
            newnode->prev = NULL;
            head = newnode;
        } else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
            newnode->prev = temp;
        }
    }

    for(temp = head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);

    return 0;
}
```

c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

int main() {
    struct node *head = NULL, *temp, *newnode, *p;
    int n, i, choice, key, value;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;

        if(head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    scanf("%d", &choice);
    scanf("%d%d", &key, &value);

    temp = head;
    while(temp != NULL && temp->data != key)
        temp = temp->next;

    if(temp == NULL) {
        printf("Node not found");
        return 0;
    }

    newnode = malloc(sizeof(struct node));
    newnode->data = value;

    if(choice == 1) {
        newnode->next = temp->next;
        newnode->prev = temp;

        if(temp->next != NULL)
            temp->next->prev = newnode;

        temp->next = newnode;
    } else {
        newnode->prev = temp->prev;
        newnode->next = temp;

        if(temp->prev != NULL)
            temp->prev->next = newnode;
        else
            head = newnode;

        temp->prev = newnode;
    }

    for(p = head; p != NULL; p = p->next)
        printf("%d ", p->data);

    return 0;
}
```

c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

int main() {
    struct node *head = NULL, *temp, *del;
    int n, i, choice, key;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        temp = malloc(sizeof(struct node));
        scanf("%d", &temp->data);
        temp->next = NULL;
        temp->prev = NULL;

        if(head == NULL)
            head = temp;
        else {
            del = head;
            while(del->next != NULL)
                del = del->next;
            del->next = temp;
            temp->prev = del;
        }
    }

    scanf("%d", &choice);

    if(choice == 1) {
        if(head != NULL) {
            del = head;
            head = head->next;
            if(head != NULL)
                head->prev = NULL;
            free(del);
        }
    } else if(choice == 2) {
        if(head != NULL) {
            del = head;
            while(del->next != NULL)
                del = del->next;

            if(del->prev != NULL)
                del->prev->next = NULL;
            else
                head = NULL;

            free(del);
        }
    } else if(choice == 3) {
        scanf("%d", &key);
        del = head;

        while(del != NULL && del->data != key)
            del = del->next;

        if(del != NULL) {
            if(del->prev != NULL)
                del->prev->next = del->next;
            else
                head = del->next;

            if(del->next != NULL)
                del->next->prev = del->prev;

            free(del);
        }
    }

    for(temp = head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);

    return 0;
}
```