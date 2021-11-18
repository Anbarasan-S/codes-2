#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    string all[]={"one","two","three","four","five","six","seven","eight","nine"};
    string val;
    if(num<=9&&num>=1)
    {
        val=all[num-1];
    }
    else if(num>9)
    {
        val="Greater than nine";
    }
    else
    {
        val="Lesser than one";
    }
    cout<<val;
}