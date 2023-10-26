#include<iostream>
int main() {
    using namespace std;
    int row,col,n;
    cout<<"enter a no.";
    cin>>n;
    // 1st half
    for(row=0;row<n;row++) {
        // star
        for(col=0;col<row+1;col++) {
            cout<<"*";
        }
        // space
        for(col=0;col<2*n-2*row-2;col++) {
            cout<< " ";
        }
        // star
        for(col=0;col<row+1;col++) {
            cout<<"*";
        }
        cout<<endl;
    }
    // for(row=n;row>0;row--) {
    //     for(col=0;col<row+1;col++) {
    //         cout<<"*";
    //     }
    //     for(col=0;col<2*n-2*row-2;col++) {
    //         cout<< " ";
    //     }
    //     for(col=0;col<row+1;col++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

}