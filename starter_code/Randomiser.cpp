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
        cout << n->data << "" << std::endl;
        n = n -> next;
    }
}
void shuffleBag(Node *n){
    int min = 1;
    int max = 3;
    std::random_device engine;
    std::uniform_int_distribution<int> uniform_dist(min, max);
    int shuffleArray[3];
    for (int i = 0; i < 3; i++){
       if (n != NULL){
           shuffleArray[i] = n -> data;
           n = n -> next;
       } 
    }
    for (int i = 0; i < 3; i++){
        int r = rand() % 3;
        int shuffle = shuffleArray[i];
        shuffleArray[i] = shuffleArray[r];
        shuffleArray[r] = shuffle;
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
    shuffleBag(head);
    printList(head);
    return 0;
}

