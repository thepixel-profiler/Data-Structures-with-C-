//WAP to implement reverse of integer using recurssion
#include<iostream>
using namespace std;
int rev=0;
int i=0;

int rev_int(int n)
{
    i=n%10;
    n=n/10;
    rev_int(n);
}
int main()
{
    rev_int(123);
}