#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int d;
        long med=0;
        int size;
        cin>>size;
        priority_queue<int>leftheap;
        priority_queue<int,vector<int>,greater<int>>rightheap;
        while(size--){
            cin>>d;
            if(leftheap.size()>rightheap.size()){
                if(d<med){
                    rightheap.push(leftheap.top());
                    leftheap.pop();
                    leftheap.push(d);
                }
                else{
                    rightheap.push(d);
                }
                med = (leftheap.top()+rightheap.top())/2.0;
            }
            else if(leftheap.size()==rightheap.size()){
                if(d<med){
                    leftheap.push(d);
                    med = leftheap.top();
                }
                else{
                    rightheap.push(d);
                    med=rightheap.top();
                }
            }
            else{
                if(d>med){
                    leftheap.push(rightheap.top());
                    rightheap.pop();
                    rightheap.push(d);
                }
                else{
                    leftheap.push(d);
                }
                med = (leftheap.top()+rightheap.top())/2.0;
            }
            cout<<med<<" ";

        }
        cout<<endl;

    }

    return 0;
}