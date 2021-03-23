#include<iostream>
using namespace std;
string fibonaciword(int n)
{
    if(n==0) return "a";
    if (n==1) return "b";
    return fibonaciword(n-1)+fibonaciword(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibonaciword(n);
    return 0;
}
