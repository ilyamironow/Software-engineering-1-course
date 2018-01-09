#ifndef LINKEDLIST_LINKLIBRARY_H
#define LINKEDLIST_LINKLIBRARY_H

#include <stdio.h>
#include <malloc.h>

typedef struct List {
    int value;
    struct List *next;
} List;

void pushBegin(List **head, int data);
void pushBack(List *head, int data);
void pushAfter (List *head, int data);
void deleteElement(List **head, int data);
void deleteList(List **head);
void printLinkedList(const List *head);
void reverse(List **head);
int loopCheck(List *list);
void loopMade(List *list);
#endif //LINKEDLIST_LINKLIBRARY_H
