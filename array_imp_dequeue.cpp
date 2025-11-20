#include<bits/stdc++.h>
using namespace std;

void dequeue(int queue[],int &front,int rear){
    if(front==rear){
        cout<<"Underflow"<<endl;
    } else{
        queue[front]=-1;
        front++;
    }
}

int main(){
    int max;
    cin>>max;
    int queue[max];
    for(int i=0;i<max;i++){
        cin>>queue[i];
    }
    int front=0;
    int rear=max;
    dequeue(queue,front,rear);
    dequeue(queue,front,rear);
    dequeue(queue,front,rear);
    for(auto j:queue){
        cout<<j<<" ";
    }
    return 0;
}