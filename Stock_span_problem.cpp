#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespce std;

void stockSpanProblem(vector<int>stock,vector<int>span){
    stock<int>s;
    span[0]=1;
    
    for(int i=1; i<stock.size(); i++){
        int currPrice=stock[i];
        
        while(!s.empty() && currPrice>=stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;
        }
        else{
            int prevHigh = s.top();
            span[i]=i-prev;
        }
    }
    for(int i=0; i<span.size(); i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>stock={100,80,60,70,60,85,100};
       vector<int>stock={0,0,0,0,0,0,0};
       
       stockSpanProblem(stock,span);
       
       return 0;
}
