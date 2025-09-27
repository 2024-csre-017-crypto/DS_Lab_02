#include <iostream>
using namespace std;
struct Node{
    int data; //value stored
    Node*next;//pointer to next node
};
int main() {
  //create three nodes manually
  Node*head=new Node{10,NULL};
  Node*second=new Node{20,NULL};
  Node*third=new Node{30,NULL};
  Node*fourth=new Node{40,NULL};
  
  //link them
  head->next=second;
  second->next=third;
  third->next=fourth;

  //Traverse list from head
  cout<<"Link list";
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" "; //print data
    temp=temp->next;
  }
    return 0;
}