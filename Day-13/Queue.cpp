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

class Queue{
    int size;
    Node*head;
    Node*tail;

    public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        if(size == 0)return 1;

        return 0;
        // return size == 0;
    }

    void push(int v){
        if(head == NULL){
            Node*n = new Node(v);
            head = n;
            tail = n;
        }else{
            Node*n = new Node(v);
            tail->next = n;
            tail = n;
        }
        size++;
    }

    int pop(){
        if(head == NULL)return -1;

        if(head == tail){
         int ele = head->val;
            head = tail = NULL;
            size--;
            return ele;
        }   

        int ele = head->val;
        head = head->next;
        size--;
        return ele;
    }

    int front(){
        if(size == 0)return -1;
        return head->val;
    }

    int back(){
        if(size == 0)return -1;
        return tail->val;
    }

};


int main(){
    /*Queue q;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.pop()<<endl;

    q.push(10);
    q.push(20);
    q.push(30);
    cout<<endl;
    cout<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.pop()<<endl;*/

    queue<int>q;
  return 0;
}