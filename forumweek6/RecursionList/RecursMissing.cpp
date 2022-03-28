#include <iostream>
using namespace std;

struct Node{
    int data ;
    Node* next ;

};

void ReversePrint ( Node* ptr){

  // Base case : if the list is empty, do nothing (already achieved through the if ptr not equal to nullptr)

  if ( ptr != nullptr){         // general case
    ReversePrint(ptr -> next);  //using recursion to traverse the list
    cout << ptr-> data << endl; // print this element
  }
}

int main(){

  //creating the nodes
  Node* Node1 = new Node;
  Node* Node2 = new Node;
  Node* Node3 = new Node;
  Node* Node4 = new Node;
  Node* Node5 = new Node;

  //assigning the data to the respective nodes
  Node1 ->data = 18;
  Node2 ->data = 27;
  Node3 ->data = 36;
  Node4 ->data = 45;
  Node5 ->data = 54;

  //linking the nodes
  Node1 ->next = Node2;
  Node2 ->next = Node3;
  Node3 ->next = Node4;
  Node4 ->next = Node5;
  Node5 ->next = NULL;

  //calling the ReversePrint function
  ReversePrint(Node1);

}