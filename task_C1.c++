#include <iostream>
using namespace std;

struct DNode {
    int data;
    DNode* next;
    DNode* prev;
};

int main() {
    // Create nodes
    DNode* head = new DNode{10, NULL, NULL};
    DNode* second = new DNode{20, NULL, head};
    head->next = second;
    DNode* third = new DNode{30, NULL, second};
    second->next = third;
    DNode* fourth = new DNode{40, NULL, third};


    // Forward traversal
    cout << "Forward: ";
    for (DNode* cur = head; cur; cur = cur->next)
        cout << cur->data << " ";
    cout << endl;

    // Backward traversal (starting from last node: fourth)
    cout << "Backward: ";
    for (DNode* cur = fourth; cur; cur = cur->prev)
        cout << cur->data << " ";
    cout << endl;

    return 0;
}
