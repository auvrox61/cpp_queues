#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        int max;
        int* queue;
        int front;
        int rear;
        int count;
        Queue(int n);
        void enq(int key);
        void deq();
        int frontElement();
        int size();
        bool isEmpty();
        void circEnq(int key);
        void circDeq();
        int displayCount();
        void showQueue();
};

Queue::Queue(int n){
    max=n;
    queue=new int[max];
    front=rear=count=0;
}

void Queue::enq(int key){
    if(rear==max){
        cout<<"Queue is filled up"<<endl;
        count++;
        return;
    }
    queue[rear]=key;
    rear++;
    count++;
}

void Queue::deq(){
    if(front==rear){
        cout<<"Queue is empty"<<endl;
        count--;
        return;
    }
    queue[front]=-1;
    front++;
    count--;
}

int Queue::frontElement(){
    return queue[front];
}

int Queue::size(){
    return (rear-front);
}

bool Queue::isEmpty(){
    if(front==rear){
        return true;
    }
    return false;
}

void Queue::circEnq(int key){
    if(rear==max-1){
        rear=(rear+1)%max;
        queue[rear]=key;
        count++;
        return;
    }
    queue[rear]=key;
    rear++;
    count++;
}

void Queue::circDeq(){
    if(count==0){
        cout<<"Underflow"<<endl;
        return;
    }
    front=(front+1)%max;
    count--;
}

int Queue::displayCount(){
    return count;
}

void Queue::showQueue(){
    for(int i=0;i<=count;i++){
        cout<<queue[i]<<" ";
    }
}

int main(){
    Queue q(5);
    q.enq(4);
    q.enq(3);
    q.enq(7);
    q.enq(10);
    q.enq(11);
    q.showQueue();
    cout<<endl;
    q.deq();
    q.showQueue();
    cout<<endl;
    q.circEnq(15);
    q.showQueue();
    q.circDeq();
    q.showQueue();
    q.circEnq(13);
    q.showQueue();
    return 0;
}