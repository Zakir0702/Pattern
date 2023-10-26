#include<iostream>
using namespace std;
int main() {
    int row,col,n;
    cout<<"enter a number :";
    cin>>n;

    // half - pyramid

    // for(row=0;row<n;row++) {
    //     for(col=0;col<row+1;col++) {
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }

    // inverted - pyramid

    for(row=0;row<n;row++) {
        for(col=0;col<n-row;col++) {
            // hollow inverted
            if(row==0 || row==n-row-1) {
                cout<<"* ";
            }
            else{
                if(col==0 ||col==n-row-1) {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            
        }
        cout<<endl;
    }

    // numeric half pyramid

    // for(row=0;row<n;row++) {
    //     for(col=0;col<row+1;col++) {
    //         cout<<col+1;
    //     }
    //     cout <<endl;
    // }

    // inverted  numeric half pyramid
    // for(row=0;row<n;row++) {
    //     for(col=0;col<n-row;col++) {
    //         cout<<col+1;
    //     }
    //     cout <<endl;
    // }
}