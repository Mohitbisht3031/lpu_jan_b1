// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

Node* make_ll(){
    int val;
    cin>>val;

    if(val == -1)return NULL;

    Node*head = new Node(val);
    Node*temp = head;
    cin>>val;
    while(val != -1){
        Node* n = new Node(val);
        temp->next  = n;
        temp = n;
        cin>>val;
    }

    return head;
}

/*void print(Node*head){
    if(head == NULL)return;

    Node*temp = head;

    while(temp){
        if(temp->next){
        cout<<temp->val<<"->";}
        else{
            cout<<temp->val;
        }
        temp = temp->next;
    }
    cout<<endl;

    return;
}*/

void print(Node*head){
    if(head == NULL)return ;
    if(head->next == NULL){
        cout<<head->val;
        return;
    }

    cout<<head->val<<"->";
    print(head->next);
    cout<<endl;
    return;
}

/*
int len(Node*head){
    if(head == 0)return 0;

    Node*temp = head;
    int c = 0;
    while(temp){
        c++;
        temp = temp->next;
    }   

    return c; 
}*/

int len(Node*head){
    if(head == NULL)return 0;

    int smlans = len(head->next);

    return 1+smlans;
}

Node* del(Node*head,int target){
    if(head == NULL)return head;

    if(head->val == target)return head->next;

    Node*temp = head;
    while(temp){
        if(temp->next){
            if(temp->next->val == target)break;
        }
        temp = temp->next;
    }

    if(temp){
        temp->next = temp->next->next;
    }

    return head;
}

int main(){

   Node*head = make_ll();
   print(head);
//    cout<<len(head)<<endl;
   Node*nhead = del(head,5);
   print(nhead);
  return 0;
}