#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    // for(i=0;i<=9;i++) {
    //     cout << "Zakir" <<endl;
    // }
    // for(i=0;i<=4;i++) {
    //     cout <<endl <<"outer loop" <<i <<endl;
    
    //     for(j=0;j<=5;j++) {
    //         cout << "inner loop" <<j <<endl;
    //     }
    // }

    // table of 17
    // int n;
    // cout << "enter a number" << endl;
    // cin >> n;
    // for(i=1;i<=10;i++) {
    //     cout << n*i << endl;
    // }

// print even number 1 to 100 using condition

    for(i=1;i<=100;i++) {
       if(i%2==0) {
        cout << i << endl;
       }
         
    }
        //  using loops only
        // for(i=2;i<=100;i=i+2) {
        //     cout <<"even is " <<i <<endl;
        // }


    return 0;
}