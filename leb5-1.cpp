#include <iostrem>
using namespace;

struct Node{
    int data;
    Node*next;
    Node*prev;
};
class doubleLinkedList{
    Node*head;
    public:
    DoubleLinkedList():head(Null){
    };
    void insertAtBeginning(int val){
        Node*newNode=new Node();
        newNode.next=head;
        newNode->prev=Null;
        newNode->data=val;
        head=newNode;
        if (head){
            head->prev=Node;

        }
        head=newNode;
    }
    void insertAtEnd(int val){
        Node*newNode=new Node();
        newNode->data=val;
        newNode->next=Null;
        if (!head){
            newNode=head;
            
        }
    }
};
