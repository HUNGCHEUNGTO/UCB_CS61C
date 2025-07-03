#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    struct node* hare = head, *tortoise = head;

    if (!head)
        return 0;

    while (1)
    {
        if (hare->next && hare->next->next)
            hare = hare->next->next;
        else
            return 0;
        
        if (tortoise->next)
            tortoise = tortoise->next;
        
        if (tortoise == hare)
            return 1;
    }
    
    return 0;
}

