#include <bits/stdc++.h>
using namespace std;

class Node {
private:
    int data;
    Node *next;

public:
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    void set_data(int data) {
        this->data = data;
    }
    void set_next(Node *next) {
        this->next = next;
    }
    int get_data() {
        return data;
    }
    Node *get_next() {
        return next;
    }
};

class LinkedList {
private:
    Node *head;
    Node *tail;

public:
    LinkedList();
    void insert_back(int data);
    void delete_back();
};

LinkedList::LinkedList() {
    this->head = NULL;
    this->tail = NULL;
}
void LinkedList::insert_back(int data) {
    Node *temp = new Node(data);
    if (head == NULL) {
        head = temp;
    }
    else {
        tail->set_next(temp);
    }
    tail = temp;
}
void LinkedList::delete_back() {
    if (head != NULL) {
        Node *temp = head;
        if (head == tail) {
            head = NULL;
            tail = NULL;
        }
        else {
            while (temp->get_next() != tail) {
                temp = temp->get_next();
            }
            temp->set_next(NULL);
            tail = temp;
        }
        delete temp;
    }
}

int main() {
    vector<int> vec;
    vec.push_back(1);
    return 0;
}