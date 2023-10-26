#include<iostream>
using namespace std;
int main() {
    int row,col,n;
    cout <<"enter a no.";
    cin>>n;
    for(row=0;row<n;row++) {
        for(col=0;col<2*row+1;col++) {
            if(col%2==0) {
                cout<< row+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(row=0;row<n;row++) {
        for(col=0;col<2*n-2*row-3;col++) {
            if(col%2==0) {
                cout<<n-row-1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}