#include <iostream>
using namespace std;
void space(){
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the no. of rows: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            int a=1;
            for(int j=1;j<=i;j++){
                cout<<a<<" ";
                a+=2;
            }
            cout<<endl;
        }
        cout<<"do you want to continue(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    space();
    cout<<"exit.........";
}
