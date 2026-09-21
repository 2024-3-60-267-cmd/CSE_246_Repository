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

int main(){
    stackPractice();
}
