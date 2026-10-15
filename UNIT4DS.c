c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* create() {
    int x;
    struct node *newnode;

    scanf("%d", &x);

    if(x == -1)
        return NULL;

    newnode = malloc(sizeof(struct node));
    newnode->data = x;

    printf("Enter left child of %d (-1 for NULL): ", x);
    newnode->left = create();

    printf("Enter right child of %d (-1 for NULL): ", x);
    newnode->right = create();

    return newnode;
}

void preorder(struct node *root) {
    if(root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node *root;

    printf("Enter root value (-1 for NULL): ");
    root = create();

    printf("Preorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    return 0;
}
```

c
```
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* insert(struct node *root, int x) {
    if(root == NULL) {
        root = malloc(sizeof(struct node));
        root->data = x;
        root->left = root->right = NULL;
    } else if(x < root->data)
        root->left = insert(root->left, x);
    else if(x > root->data)
        root->right = insert(root->right, x);

    return root;
}

struct node* findMin(struct node *root) {
    while(root != NULL && root->left != NULL)
        root = root->left;
    return root;
}

struct node* deleteNode(struct node *root, int x) {
    struct node *temp;

    if(root == NULL)
        return root;

    if(x < root->data)
        root->left = deleteNode(root->left, x);
    else if(x > root->data)
        root->right = deleteNode(root->right, x);
    else {
        if(root->left == NULL) {
            temp = root->right;
            free(root);
            return temp;
        } else if(root->right == NULL) {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

int height(struct node *root) {
    int l, r;

    if(root == NULL)
        return 0;

    l = height(root->left);
    r = height(root->right);

    return 1 + (l > r ? l : r);
}

int count(struct node *root) {
    if(root == NULL)
        return 0;

    return 1 + count(root->left) + count(root->right);
}

void inorder(struct node *root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct node *root = NULL;
    int choice, x;

    while(1) {
        printf("\n1.Insert 2.Delete 3.Height 4.Count 5.Display 6.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &x);
                root = insert(root, x);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &x);
                root = deleteNode(root, x);
                break;

            case 3:
                printf("Height = %d\n", height(root));
                break;

            case 4:
                printf("Total nodes = %d\n", count(root));
                break;

            case 5:
                inorder(root);
                printf("\n");
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
```