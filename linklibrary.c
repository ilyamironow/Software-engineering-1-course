#include "linklibrary.h"

void pushBegin(List **head, int data) {
    List *node = (List *) malloc(sizeof(List));
    if (node) {
        node->value = data;
        node->next = (*head);
        (*head) = node;
    }
}

void pushBack(List *head, int data) {
    List *last = head;
    if (last == NULL) {
        last = NULL;
    }
    while (last->next) {
        last = last->next;
    }
    List *node = (List *) malloc(sizeof(List));
    if (node) {
        node->value = data;
        node->next = NULL;
        last->next = node;
    }
}

void pushAfter(List *head, int data) {
    printf("Input number of element after which to insert: \n");
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    List *node = NULL;
    while (head->next && i < n) {
        head = head->next;
        i++;
    }
    node = (List *) malloc(sizeof(List));
    if (node) {
        node->value = data;
        if (head->next) {
            node->next = head->next;
            //иначе на NULL
        } else {
            node->next = NULL;
        }
        head->next = node;
    }
}

void deleteElement(List **head, int data) {
    List *node = NULL;
    node = *head;
    if (node->value != data) {
        while (node && node->next && node->next->value != data) {
            node = node->next;
        }
        List *next = node->next;
        node->next = next->next;
        free(next);
    } else {
        List *prev = NULL;
        prev = (*head);
        *head = (*head)->next;
        free(prev);
    }
}

void deleteList(List **head) {
    List *prev = NULL;
    if ((*head)) {
        while ((*head)->next) {
            prev = (*head);
            (*head) = (*head)->next;
            free(prev);
        }
        (*head) = NULL;
        free(*head);
        if ((*head) == NULL) {
            printf("List is NULL.\n");
        }
    } else {
        printf("List is already NULL.\n");
    }

}

void printLinkedList(List *head) {
    while (head) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

int loopCheck(List *list) {
    List *node = list->next;
    while (node && node->next && list && list != node) {
        node = node->next->next;
        list = list->next;
    }
    if (node == NULL || node->next == NULL) {
        return 0;
    } else {
        return 1;
    }
}

void reverse(List **head) {
    printf("Before: ");
    printLinkedList(*head);
    List *end = *head;
    while (end->next) {
        end = end->next;
    }
    List *cur = *head;
    List *next = NULL;
    List *prev = NULL;

    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    end = (*head);
    (*head) = prev;

    printf("After: ");
    printLinkedList(*head);
}


void loopMade(List *list) {
    printf("Input number of element after which to make loop: \n");
    int n = 0;
    scanf("%d", &n);
    int i = 1;
    while (list && i < n) {
        list = list->next;
        i++;
    }
    List *node = list;
    while (list->next) {
        list = list->next;
    }
    list->next = node;
}
