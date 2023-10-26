#include <iostream>
using namespace std;
int main () {
    // int i,j,n;
    // cout<<"enter a no." << endl;
    // cin >> n;
    // square
    // for(i=0;i<=n;i++) {
    //     for(j=0;j<n;j++) {
    //         cout << "*" ;
    //     }
    //     cout <<endl;
    // }

    // reactangle
    //  for(i=0;i<=3;i++) {
    //     for(j=0;j<5;j++) {
    //         cout<< "* ";
    //     }
    //     cout << endl;
    //  }

    // hollow reactangle
    int row,col;
    for(row=0;row<=4;row++) {
        for(col=0;col<=5;col++) {
            if (row==0 || row ==3) {
                cout <<"* ";
            }
            else {
                if(col ==0 || col==4) {
                    cout << "* ";
                }
                else{
                    cout << " ";
                }
            }
            
        }
        cout <<endl;
    }


    return 0;
}