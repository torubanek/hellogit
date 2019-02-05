//Lab 1, a simple program on the first lecture
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s0;
	string s1="hello";
	string s2=s1 + "	world";
	
	cout<<"s0="<<s0<<endl;
	cout<<"s1="<<s1<<endl;
	cout<<"s1 has "<<s1.size()<<"characters"<<endl;
	if (s1=="hello")
		cout<<"Hi there!"<<endl;
	if (s2!="world")
		cout<<"Out of this world!"<<endl;
}
