//WAP to implement reverse of integer using recurssion
#include<iostream>
using namespace std;
static int rev=0;
int i=0;

int rev_int(int n)
{
    i=n%10;
    rev=rev*10+i;
    n=n/10;
    if(n>0){
        rev_int(n);
    }
    else{
        cout<<rev;
    }
    rev=0;
}
int main()
{
    rev_int(456);
    cout<<endl;
    rev_int(675);
    cout<<endl;
    rev_int(123);
    cout<<endl;
    rev_int(894);
}
//helper func
