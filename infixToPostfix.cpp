#include<iostream>
#include<string>
#include<stack>
using namespace std;

int precedence(char a){
    if(a=='^'){
        return 3;
    }
    else if(a=='*'||a=='/'){
        return 2;
    }
    else if(a=='+'||a=='-'){
        return 1;
    }

    return -1;
}
string infixToPostfix(string str){

    string ans;
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')){
            ans+=str[i];
        }
        else if(str[i]=='('){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }    
        }
        else{
            while(!st.empty() && (precedence(st.top())>precedence(str[i]))){
                ans += st.top();
                st.pop();
            }     
            st.push(str[i]);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    string equation;
    cout<<"Enter Infix Expression: ";
    cin>>equation;
    cout<<infixToPostfix(equation)<<endl;
    return 0;
}