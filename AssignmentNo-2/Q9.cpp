/*
9. Write a program to print multiplication table of any number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,a=1;
    cout<<"Enter the number: ";
    cin>>n;
    while(a<=n){
        cout<<n<<" * "<<a<<" : "<<n*a<<endl;
        a++;
    }
}

/*
Enter the number: 12
12 * 1 : 12
12 * 2 : 24
12 * 3 : 36
12 * 4 : 48
12 * 5 : 60
12 * 6 : 72
12 * 7 : 84
12 * 8 : 96
12 * 9 : 108
12 * 10 : 120
12 * 11 : 132
12 * 12 : 144
*/