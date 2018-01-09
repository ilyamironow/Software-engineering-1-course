#include "linklibrary.h"

#define PUSHBEGIN 1
#define PUSHEND 2
#define PUSHAFTER 3
#define DELETEELEMENT 4
#define DELETELIST 5
#define PRINTLIST 6
#define REVERSE 7
#define CHECKLOOP 8
#define MAKELOOP 9
#define EXIT 10


void main() {
    List *list = NULL;
    int n;
    printf("Choose Available Method: \n"
                   "1. Push Begin\n"
                   "2. Push End\n"
                   "3. Push After\n"
                   "4. Delete Element\n"
                   "5. Delete List\n"
                   "6. Print List\n"
                   "7. Reverse\n"
                   "8. Check Loop\n"
                   "9. Make Loop\n"
                   "10. Exit\n");
    int quit = 0;
    while (!quit) {
        int input;
        scanf("%d", &input);
        switch (input) {
            case PUSHBEGIN:
                printf("Input number: ");
                scanf("%d", &n);
                pushBegin(&list, n);
                printf("Choose option: ");
                break;
            case PUSHEND:
                printf("Input number: ");
                scanf("%d", &n);
                pushBack(&list, n);
                printf("Choose option: ");
                break;
            case PUSHAFTER:
                printf("Input number: ");
                scanf("%d", &n);
                pushAfter(&list, n);
                printf("Choose option: ");
                break;
            case DELETEELEMENT:
                printf("Input number: ");
                scanf("%d", &n);
                deleteElement(&list, n);
                printf("Choose option: ");
                break;
            case DELETELIST:
                deleteList(&list);
                printf("Choose option: ");
                break;
            case REVERSE:
                reverse(&list);
                printf("Choose option: ");
                break;
            case PRINTLIST:
                printLinkedList(list);
                printf("Choose option: ");
                break;
            case CHECKLOOP:
                loopCheck(list);
                printf("Choose option: ");
                break;
            case MAKELOOP:
                loopMade(list);
                printf("Choose option: ");
                break;
            case EXIT:
                quit = 1;
                deleteList(&list);
                break;
        }
    }
}
