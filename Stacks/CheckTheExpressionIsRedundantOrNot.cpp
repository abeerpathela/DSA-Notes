// check expression is redundant or not
#include <iostream>
#include<stack>
using namespace std;
bool isRedundant(char str[]) {
	stack <char> s;
	
	for(int i=0; str[i]!='\0'; i++) {
		char topChar=str[i];
		if(topChar==')') {
		    bool hasOperator=false;
			if(s.empty()) {
				return true;
			}

			while(!s.empty()&&s.top()!='(') {
				char topValue=s.top();
				s.pop();
				if(topValue=='+' || topValue=='-' || topValue=='*' || topValue=='/') {
					hasOperator=true;
				}
			}
			if(!s.empty()) {
				s.pop();
			}
			if(!hasOperator) {
				return true;
			}
		}
		else {
			s.push(topChar);
		}
	}
	return false;

}
int main()
{
	char str[]="(((a+b)))";
	if(isRedundant(str)) {
		cout<<"Expression is redundant.";
	}
	else {
		cout<<"Expression is not redundant.";
	}
	return 0;
}