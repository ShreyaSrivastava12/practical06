#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a;
	cout << "Enter a string" << endl;
	getline(cin,a);
	cout<<"Reversed string"<<endl;
	for(int i=a.size()-1;i>=0;i--)
    {
         cout<<a[i];
    }
    cout<<endl;
    reverse(a.begin(),a.end());
    cout<<"Reversed string is: "<<endl<<a<<endl;
	return 0;
}
