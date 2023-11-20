#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void print_linked_list(Node *head) {
    Node *p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

Node *create_head(int value) {
    Node *head = new Node();
    head->data = value;
    head->next = NULL;
    return head;
}

void insert_back(Node *node, int value) {
    Node *temp = new Node();
    temp->data = value;
    temp->next = node->next;
    node->next = temp;
}

void delete_back(Node *node) {
    Node *temp = node->next;
    if (temp != NULL) {
        node->next = temp->next;
        delete temp;
    }
    else {
        node->next = NULL;
    }
}

void traversal(Node *head) {
    Node *p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *p = head;
    int n = 5;
    for (int i = 0; i < n; i++) {
        if (head == NULL) {
            head = create_head(i);
            p = head;
        }
        else {
            insert_back(p, i);
            p = p->next;
        }
        print_linked_list(head);
    }
    return 0;
}