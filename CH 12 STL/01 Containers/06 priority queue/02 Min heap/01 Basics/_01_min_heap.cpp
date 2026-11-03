#include <bits/stdc++.h>

using namespace std;

int main() {
//  min-heap:
//  min
priority_queue<int, vector<int>, greater<int>> pq;

pq.push(100);
pq.push(50);
//50 , 100
pq.push(25);
//25,50,100
pq.push(75);
//25,75,50,100
cout<<pq.top()<<endl;


return 0; }
