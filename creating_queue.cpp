#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>cars;
    cars.push("Mercedes-Benz");
    cars.push("BMW");
    cars.push("Hyundai");
    cars.front()="Suzuki";
    cars.back()="Volkswagen";
    cout<<cars.size();
    cout<<endl;
    while(!(cars.empty())){
        cout<<cars.front()<<" ";
        cars.pop();
    }
    cout<<endl;
    cout<<cars.size();
    return 0;
}