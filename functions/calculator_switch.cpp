#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,answer;
    char op;
    cin >> a >> op >> b;
    
    switch (op)
    {
    case '+':
        answer = a+b;
        cout << answer <<endl;
        break;
    
    case '-':
        answer = a-b;
        cout << answer <<endl;
        break;
    
    case '*':
        answer = a*b;
        cout << answer <<endl;
        break;
    
    case '/':
        answer = a/b;
        cout << answer <<endl;
        break;
    
    case '%':
        answer = a%b;
        cout << answer <<endl;
        break;
    
    default: 
        cout << "Inavalid Operation!" <<endl;
        break;
    }

    return 0;
}
