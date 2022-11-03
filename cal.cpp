#include <iostream>
using namespace std;

int cal(int a, char b, int c)
{
    switch (b)
    {
    case '+':
        return (a + c);
        break;
    case '-' : 
        return (a - c);
        break;
    case '*':
        return (a * c);
        break;
    case '/':
        return (a / c);
        break;

    default:
        return 0;
        break;
    }
}

int main()
{
    cout << "Hello......" << endl;
    int a , c , result = 0;
    char b;
    cin>>a;
    cin>>b;
    cin>>c;
    result = cal(a , b , c);
    cout<<"------"<<endl;
    cout<<result<<endl;
    while (1)
    {
        cin>>b;
        cin>>c;
        result = cal(result , b , c);
        cout<<"------"<<endl;
        cout<<result<<endl;

    }
    
}