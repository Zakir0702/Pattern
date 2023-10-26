#include<iostream>
using namespace std;
int main() {
    int n,row,col;
    cout<< "enter a number :";
    int num;
    cin >>num;
    n= num / 2;
   
    // Full pyramid
    for(row=0;row<n;row++) {
        for(col=0;col<n-row-1;col++) {
            cout<< " ";
            }
            for(col=0;col<row+1;col++) {
                cout<< "* ";
            }
        
        cout<< endl;
    }
    // inverted full pyramid
    for(row=0;row<n;row++) {
        for(col=0;col<row;col++) {
            cout<<" ";
        }
        for(col=0;col<n-row;col++) {
            cout<< "* ";
        }
        cout<< endl;
    }

    

}