#include<iostream>
#include<climits>

using namespace std ;

int main () {

    int n ;
    cin >> n ;
    int i = 1 ;

    int lsf = INT_MIN ;
    int ssf = INT_MAX ;

    while ( i <= n  ) {

        int x ;
        cin >> x ;
        

        if ( x > lsf ) {
           
            lsf = x ;

        }
        if ( x < ssf ) {

            ssf = x ;

        }

        i = i + 1 ;
    
    }
    cout << lsf << " " << ssf << endl;
    
    return 0 ;
}