#include<iostream>
using namespace std;
int add(int, int);
int main()
{
    int m,n,sum;
    cout << "enter first number: ";
    cin >> m;
    cout<< "Enter second number: ";
    cin>> n;
    sum = add(m,n);
    cout << "sum is: "<< sum;
}
int add(int a,int b)
{
    return(a+b);
}