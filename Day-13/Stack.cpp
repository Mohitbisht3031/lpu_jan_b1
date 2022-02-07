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

class Stack{
    Node*head;
    int size;
    public:
    Stack(){
        this->head = NULL;
        this->size = 0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    void push(int v){
        Node*n = new Node(v);
        n->next = head;
        this->head = n;
        size++;
        return;
    }

    int pop(){
        if(size == 0)return -1;
        int element = head->val;
        this->head = head->next;
        size--;
        return element;
    }

    int top(){
        if(size == 0)return -1;
        return head->val;
    }

};

int main(){
    /*
    Stack s;
    cout<<s.getSize()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<endl;
    cout<<endl;

    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.getSize()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl;*/

    stack<int>s;
    // s.push(10)

  return 0;
}