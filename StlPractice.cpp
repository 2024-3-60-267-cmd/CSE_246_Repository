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
void setPractice(){
    set<char> s1;
    s1.insert('a');
    s1.insert('b');
    s1.insert('c');
    cout<<s1.size()<<endl;

    set<char>::iterator it1;
    for(it1 = s1.begin();it1!=s1.end();it1++){
        cout<< *it1<<" ";
    }
    cout<<endl;
}


void mapPractice(){
    /// map<key,value>
    map<string , int > courseList;
    courseList["CSE103"] = 25;
    courseList["CSE106"] = 40;
    courseList["CSE246"] = 30;
    cout<<courseList.size()<<endl;
    string s = "CSE246";
    if(courseList.count(s)==0) cout<<"Course "<<s<<" does not exist!"<<endl;
    else cout<<"Course "<<s<<" Total students "<<courseList[s]<<endl;
}
int main(){
    //stackPractice();
    //queuePractice();
    //setPractice();
    mapPractice();
}
