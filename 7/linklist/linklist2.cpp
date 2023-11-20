#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

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

Node* init_link_list(int n) {
    Node *head = NULL;
    Node *p = head;
    for (int i = 0; i < n; i++) {
        if (head == NULL) {
            head = create_head(i);
            p = head;
        }
        else {
            insert_back(p, i);
            p = p->next;
        }
    }
    return head;
}

void traversal(Node *head) {
    Node *p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void insert(Node *head, int index, int value) {
    Node *p = head;
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;
    if (index == 0) {
        temp->next = head;
        head = temp;
    }
    else {
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

void deletion(Node *head, int index) {
    Node *p = head;
    if (index == 0) {
        head = head->next;
        delete p;
    }
    else {
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        Node *q = p->next;
        p->next = q->next;
        delete q;
    }
}

bool find(Node *head, int value) {
    Node *p = head;
    while (p != NULL) {
        if (p->data == value) {
            return true;
        }
        p = p->next;
    }
    return false;
}

void modify(Node *head, int index, int value) {
    Node *p = head;
    for (int i = 0; i < index; i++) {
        p = p->next;
    }
    p->data = value;
}

int main() {
    Node *head = init_link_list(5);
    traversal(head);
    insert(head, 2, 10);
    deletion(head, 2);
    find(head, 2);
    modify(head, 2, 10);
    return 0;
}