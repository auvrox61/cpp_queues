#include<bits/stdc++.h>
using namespace std;

void enqueue(int queue[],int item,int &rear,int max){
    if(rear==max){
        cout<<"Overflow"<<endl;
    } else{
        queue[rear]=item;
        rear++;
    }
}

int main(){
    int max;
    cin>>max;
    int queue[max];
    int rear=0;
    int item;
    enqueue(queue,10,rear,max);
    enqueue(queue,20,rear,max);
    enqueue(queue,30,rear,max);
    enqueue(queue,40,rear,max);
    enqueue(queue,50,rear,max);
    enqueue(queue,60,rear,max);
    for(auto i:queue){
        cout<<i<<" ";
    }
    return 0;
}