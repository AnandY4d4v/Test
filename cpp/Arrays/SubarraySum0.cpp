#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //const
    Node(int data){
        this ->data= data;
        this ->next=NULL;
    }

};

void InsertAtHead(Node* &head , int d){
    Node* temp =new Node(d);
    temp->next= head;
    head=temp;
}

void print(Node* &head){
    Nodetemp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

void InsertAtTail(Node tail , int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}

int getLength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

Node getMiddle(Node* &head){
    int len=getLength(head);
    int ans=(len/2);

    Node* temp = head;
    int cnt=0;
    while(cnt<ans){
        temp= temp->next;
        cnt++;
    }
    return temp;
}

int main(){
 Node* node1 = new Node(10);
    Node* head= node1;
    Node* tail= node1;
InsertAtHead(head,68);
InsertAtHead(head,66);
InsertAtHead(head,61);
InsertAtTail(tail,77);
print(head);
getMiddle(head);
cout<<"hi";
}