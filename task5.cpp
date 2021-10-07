#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    char a='A';
    char b='B';
    
    string s1="DDN";
    string s2="dDN";
    int x=int(a-b);
    int y=s1.compare(s2);
    cout<<"Comparison of 'A' and 'B': "<<x<<endl;
    cout<<"Comparison of 'DDN' and 'dDN': ";
    if (y==0)
    { 
       cout<<"Equal"<<endl;
    }
    if (y>0)
    { 
       cout<<"String s1 is greater than s2"<<endl;
    }
    if (y<0)
    { 
       cout<<"String s2 is greater than s1"<<endl;
    }
    return 0;
}

