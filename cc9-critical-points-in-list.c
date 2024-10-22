/*Critical points in a Linked List
Given the head of a linked list, Find the number of critical points. (The starting and end are not considered critical points).
Local minima or maxima are called critical points.
A Node is called a local minima if both next and previous elements are greater than the current element.
A Node is called a local maxima if both next and previous elements are smaller than the current element.
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *createnode(int a) {
    struct node* newn = (struct node*)malloc(sizeof(struct node));
    newn->data = a;
    newn->next = NULL;
    return newn;
}

int critic(struct node *head) {
    if (head == NULL || head->next == NULL || head->next->next == NULL) {
        return 0;
    }

    struct node *temp = head->next; 
    struct node *prev = head; 
    int count = 0;

    while (temp->next != NULL) {
        if (temp->data > prev->data && temp->data > temp->next->data) {
            count++;
        }
        else if (temp->data < prev->data && temp->data < temp->next->data) {
            count++;
        }
        prev = temp; 
        temp = temp->next; 
    }

    return count;
}

int main() {
    struct node *head = NULL;
    struct node *tail = NULL;
    int n;
    scanf("%d", &n);
    int v;
    for (int i = 0; i < n; i++) {
        scanf("%d", &v);
        struct node *newn = createnode(v);
        if (head == NULL) {
            head = tail = newn;
        } else {
            tail->next = newn;
            tail = newn;
        }
    }
    
    int res = critic(head);
    printf("%d", res);

    // Free allocated memory (not shown here for simplicity)

    return 0;
}
