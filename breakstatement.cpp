#include<iostream>

using namespace std ;


int main ( ) {

    // we are taking non negative value and as soon as we get negtaive value our loop will be stop and give t
    // of the non negative number 

    int count = 0 ;
    int data ;

    while ( true ) {

        cin >> data ;
        
        if ( data < 0 ) {
            break ;
        }
        count ++ ;
    }

    cout << " count = " << count << endl ;

    return 0 ; 
}