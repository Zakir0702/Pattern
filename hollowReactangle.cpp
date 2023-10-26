#include<iostream>
using namespace std;
int main() {
    // int row,col;
    // for(row=1;row<=5;row++) {
    //     for(col=1;col<=5;col++) {
    //         if(col==1 || col==5 || row==1 || row==5) {
    //             cout <<"* ";
    //         }
    //         else {
    //             cout <<" ";
    //         }
    //     }
    //     cout << endl;
    // }

    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==0 || i==n-1 || j==0 || j==n-1) {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}