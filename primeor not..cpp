#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=o;
    cin>>flag;
    for(int i=2 i<n; i++){
        if(n%i==0){
            cout<<"non prime"<<endl;
            flag=1;
            break;
            }
    }
if(flag==0){
    cout<<"prime"<<endl;
}
