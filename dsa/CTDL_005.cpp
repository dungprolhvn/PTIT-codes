#include<bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node* next;
};


int remove(Node*& list, int e) {
    int count = 0;
    Node* ptr = list;
    Node* prev = nullptr;
    while (ptr != nullptr) {
        if (ptr->val == e) {
            Node* nextNode = ptr->next;
            if (prev != nullptr) {
                prev->next = nextNode;
            }
            else {
                list = nextNode;
            }
            delete ptr;
            ptr = nextNode;
            count++;
        }
        else {
            prev = ptr;
            ptr = ptr->next;
        }
    }
    return count;
}


void printLinkedList(Node* list) {
    Node* ptr = list;
    while (ptr != nullptr) {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}


int main() {
    int n;
    cin >> n;
    Node* first = new Node;
    cin >> first->val;
    first->next = nullptr;
    Node* p = first; // pointer to current node
    for (int i = 1; i < n; i++) {
        Node* n = new Node;
        cin >> n->val;
        n->next = nullptr;
        p->next = n;
        p = n;
    }
    int e;
    cin >> e;
    int r = remove(first, e);
    printLinkedList(first);
}