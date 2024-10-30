#include <iostream>

//Linked lsit node structure
struct Node
{
    int Data;
    Node * Next;
};

//Function inserts a new node from the beginning of the linked list 
void insertNode(Node * & Head, int Data)
{
    Node * newNode = new Node;      //Creates a new Node
    newNode -> Data = Data;         //Assigns data to new Node
    newNode -> Next = Head;         //Sets the next pointer of the new node to the current head 
    Head = newNode;                 //Updating the head to point to the new node 
}

void List(Node * Head)
{
    //Loops to traverse the linked list until it reaches the end (nullptr)
    while (Head != nullptr)
    {
        std::cout << Head -> Data << " ";   //Prints the data of the current node
        Head = Head -> Next;                //Moves to the next node
    }
    std::cout << std::endl;                 //Prints a new line after the linked list
}

//Recursive function to reverse the linked list
Node * Reverse(Node * current, Node * Previous = nullptr)
{
    //Base Case:
    if(current == nullptr)      //If the current node is at the end of the linked list (nullptr)...
        return Previous;        //Returns the previous node
    
    Node * nextNode = current -> Next;      //Stores the next node
    current -> Next = Previous;             //Reverses the pointer to the previous node
    return Reverse(nextNode, current);      //Recursively calls the function with updated pointers
}

int main()
{
    Node * Head = nullptr;                  //Initialising the head of the linked list to nullptr
    
    //Inserts the elements into the linked list
    insertNode(Head,10);
    insertNode(Head,9);
    insertNode(Head,8);
    insertNode(Head,7);
    insertNode(Head,6);
    insertNode(Head,5);
    insertNode(Head,4);
    insertNode(Head,3);
    insertNode(Head,2);
    insertNode(Head,1);
    
    std::cout << "Original Linked List: ";
    List(Head);                             //Prints the original linked list
    
    Head = Reverse(Head);
    
    std::cout << "Reversed Linked List: ";
    List(Head);                             //Prints the reversed linked list
    
    return 0;
}