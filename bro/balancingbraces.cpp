/*#include <bits/stdc++.h>
using namespace std;
char findClosing(char c)
{
	if (c == '(')
		return ')';
	if (c == '{')
		return '}';
	if (c == '[')
		return ']';
	return -1;
}
int check(char str[], int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 0;
    if (n%2!=0)
        return 0;
	if (str[0] == ')' || str[0] == '}' || str[0] == ']')
		return 0;
	char closing = findClosing(str[0]);
	int i, count = 0;
	for (i = 1; i < n; i++) {
		if (str[i] == str[0])
			count++;
		if (str[i] == closing) {
			if (count == 0)
				break;
			count--;
		}
	}
	if (i == n)
		return 0;
	if (i == 1)
		return check(str + 2, n - 2);
	return check(str + 1, i - 1) && check(str + i + 1, n - i - 1);
}
int main()
{
	char str[100];
	cin>>str;
	int n = strlen(str);
	if (check(str, n))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string str)
{
	stack<char> s;
	char x;
	int n;
	n=str.length();
    for (int i=0; i<n; i++)
    {
        if (str[i]=='('||str[i]=='['||str[i]=='{')
        {
            s.push(str[i]);
            continue;
        }
        if (isalpha(str[i])){
            continue;
        }
        if (isdigit(str[i])){
            continue;
        }
        if (s.empty())
        return false;
        switch (str[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x=='{' || x=='[')
                return false;
            break;
        case '}':
            x = s.top();
            s.pop();
            if (x=='(' || x=='[')
                return false;
            break;
        case ']':
            x = s.top();
            s.pop();
            if (x =='(' || x == '{')
                return false;
            break;
        }
    }
	return (s.empty());
}
int main()
{
	string str ;
	cin>>str;
	if (isBalanced(str))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
