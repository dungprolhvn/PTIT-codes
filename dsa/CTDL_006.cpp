#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int val;
    Node *next;
};

int remove(Node *&list, int e)
{
    int count = 0;
    Node *ptr = list;
    Node *prev = nullptr;
    while (ptr != nullptr)
    {
        if (ptr->val == e)
        {
            Node *nextNode = ptr->next;
            if (prev != nullptr)
            {
                prev->next = nextNode;
            }
            else
            {
                list = nextNode;
            }
            delete ptr;
            ptr = nextNode;
            count++;
        }
        else
        {
            prev = ptr;
            ptr = ptr->next;
        }
    }
    return count;
}

void printLinkedList(Node *list)
{
    Node *ptr = list;
    while (ptr != nullptr)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}


Node* initializeList(int n) {
    // create a linked list with n element
    Node *first = new Node;
    cin >> first->val;
    first->next = nullptr;
    Node *p = first; // pointer to current node
    for (int i = 1; i < n; i++)
    {
        Node *n = new Node;
        cin >> n->val;
        n->next = nullptr;
        p->next = n;
        p = n;
    }
    return first;
}


void deleteLinkedList(Node*& list) {
    Node* curr = list;
    while (curr != nullptr) {
        curr = list->next;
        delete list;
        list = curr;
    }
}


void removeDuplicate(Node*& list) {
    // remove duplicate element from the list
    unordered_set<int> seen;
    Node *ptr = list;
    Node *prev = nullptr;
    while (ptr != nullptr)
    {
        if (seen.find(ptr->val) != seen.end())
        {
            Node *nextNode = ptr->next;
            if (prev != nullptr)
            {
                prev->next = nextNode;
            }
            else
            {
                list = nextNode;
            }
            delete ptr;
            ptr = nextNode;
        }
        else
        {
            seen.insert(ptr->val);
            prev = ptr;
            ptr = ptr->next;
        }
    }
}


int main()
{
    int n;
    cin >> n;
    Node* first = initializeList(n);
    removeDuplicate(first);
    printLinkedList(first);
    deleteLinkedList(first);
    return 0;
}