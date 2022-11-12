#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int techar_stack;
	cin>>techar_stack;
	while(techar_stack--)
	{
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    stack<char>char_stack;
	    char_stack.push(s[0]);
	    for(int i=1;i<n;i++)
	    {
	        if(char_stack.top()==s[i])
	        {
	            char_stack.pop();
	            char_stack.push(0);
	        }
	        else
	        char_stack.push(s[i]);
	    }
	    if(s.size()==1)
	    cout<<"YES"<<endl;
	    else
	    {
	        char se=char_stack.top();
	        char_stack.pop();
	        while(char_stack.top()==se && !char_stack.empty())
	        {
	            char_stack.pop();
	        }
	        if(!char_stack.empty())
	        cout<<"NO"<<endl;
	        else
            {
                cout<<"YES"<<endl;
            }
	    }
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(s[i]==s[i+1])
	   //     {
	   //         s[i]=0;
	   //         s.erase(s.begin()+i+1,s.begin()+i+1);
	   //     }
	   // }
	   // if(s.empty())
	   // cout<<"YES"<<endl;
	   // else
	   // cout<<"NO"<<endl;
	    
	}
	return 0;
}
