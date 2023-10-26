#include<iostream>
using namespace std;
int main() {
    int row,col,n;
    cout<< "enter a no. :";
    cin>> n;
    for(row=0;row<n;row++) {
        char ch;
        for(col=0;col<row+1;col++) {
            int number=col+1;
            ch= number+'A'-1;
            cout<<ch;
        }
        // printing char backward direction until we reach 'a'
        for(char alphabet=ch;alphabet>'A';) {
            alphabet=alphabet-1;
            cout<<alphabet;
        }
        cout<<endl;
    }
}