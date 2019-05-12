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
    //creating an array to temp store linkedlist values
    int shuffleArray[3];
    //setting a point to the head of the linkedlist
    Node *backtoHead;
    //storing head
    backtoHead = n;
    //creating a random seed
    std::random_device engine;
    //settiing the range to meet the length of the array
    int min = 0;
    int max = 2;
    std::uniform_int_distribution<int> uniform_dist(min,max);
    //storing linkedlist data into the array
    for (int i = 0; i < 3; i++){
       if (n != NULL){
           shuffleArray[i] = n -> data;
           n = n -> next;
       } 
    }
    //shuffle method
    for (int i = 0; i < 3; i++){
        //gets a random position between 0 - 2 and stores it
        int r = uniform_dist(engine);
        //storing the i into a temp location
        int shuffle = shuffleArray[i];
        //swapping i with the random position
        shuffleArray[i] = shuffleArray[r];
        //swapping the random position with the temp value
        shuffleArray[r] = shuffle;
    }
    //setting it back to the head
    n = backtoHead;
    //storing the array into the linked list
    for (int i = 0; i < 3; i++){
        if (n != NULL){
            n -> data = shuffleArray[i];
            n = n-> next;
        }
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

