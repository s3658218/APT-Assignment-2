#define NULL 0
#include <iostream>
#include <random>
using std::cout;
// Node class
class Node{
    public:
    int data;
    Node* next;
};
//Function that will iterate through the loop and print the values
void printList(Node *n){
    while (n != NULL){
        cout << n->data << "";
        n = n -> next;
    }
}
//Assigning values to the linked list
int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;
    second -> data = 2;
    second -> next = third;
    third -> data = 3;
    third -> next = NULL;
    //Calling the print function with head being the first n value
    printList(head);
    return 0;
}
void shuffleBag(Node *n){

}
