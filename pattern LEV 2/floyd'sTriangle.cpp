#include<iostream>
using namespace std;
int main() {
    int row,col,n;
    cout<<"enter a no.";
    cin>>n;
    int c=1;
    for(row=0;row<n;row++) {
        for(col=0;col<row+1;col++) {
          cout<<c;
          c++;
        }
        cout<<endl;
    }
} 