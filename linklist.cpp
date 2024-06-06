#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    public:
        Node(int d){
            data=d;
            next=nullptr;
        }
};


Node* convertArrayToLL(int arr[], int n){
    Node *head= new Node(arr[0]);
    Node *mover= head;
    for(int i=1; i<n; i++){
        Node *tmp= new Node(arr[i]);
        mover->next = tmp;
        mover = tmp;
    }
    return head;
}

Node* insertAtFirst(Node * head, int elem){
    Node *tmp=head;
    head = new Node(elem);
    head->next=tmp;
    return head;
}

Node* insertAtLast(Node * head, int elem){
    Node *tmp=head;
    while(tmp!=NULL){
        if(tmp->next==nullptr){
            Node *newNode = new Node(elem);
            tmp->next=newNode;
            break;
        }
        tmp=tmp->next;
    }
    return head;
}

void displayLL(Node *head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->data;
        if(tmp->next!=nullptr)
            cout<<"->";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    cout<<"INTER SIZE OF LL: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    Node *head = convertArrayToLL(arr,n);
    displayLL(head);
    head = insertAtFirst(head,10);
    displayLL(head);
    head = insertAtLast(head,50);
    displayLL(head);
return 0;}