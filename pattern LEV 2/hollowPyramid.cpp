#include<iostream>
using namespace std;
int main() {
    int row,col,n;
    cout<< "enter a number";
    cin>> n;
    // hollow pyramid

    
    for(row=0;row<n;row++) {
        for(col=0;col<n-row-1;col++) {
            cout<< " ";
        }
        for(col=0;col<row+1;col++) {
            if(col==0|| col==row){
                cout<< "* ";
            }
            else{
                cout<< "  ";
            }
            
        }
        cout<< endl;
    }

    // inverted hollow pyramid
    // for(row=0;row<n;row++) {
    //     for(col=0;col<row;col++) {
    //         cout<< " ";
    //     }
    //     for(col=0;col<n-row;col++) {
    //         if(col==0 || col==n-row-1) {
    //             cout<< "* ";
    //         }
    //         else{
    //             cout<< "  ";
    //         }
    //     }
    //     cout<< endl;
    // }
}