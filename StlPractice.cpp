#include<bits/stdc++.h>
using namespace std;
///--- LIFO---> Last IN FIRST Out
void stackPractice()
{
    stack<int> stk1;
    stack<char> stk2;
    stk1.push(2);
    stk1.push(5);
    stk1.push(10);
    stk1.push(15);
    stk1.push(20);
    cout<<stk1.empty()<<endl;
    cout<<stk1.top()<<endl;
    cout<<stk1.size()<<endl;
    stk1.pop();
    cout<<stk1.top()<<endl;
    cout<<stk1.size()<<endl;
}
void queuePractice(){
    queue<string>Q1;
    Q1.push("CSE103");
    Q1.push("CSE106");
    Q1.push("CSE207");
    Q1.push("CSE246");
    cout<<Q1.front()<<endl;
    cout<<Q1.size()<<endl;
    Q1.pop();
    cout<<Q1.front()<<endl;
}

int main(){
    queuePractice();
}
