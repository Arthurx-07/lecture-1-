#include<iostream>
using namespace std ;

int main () {

    int n ;
    cin >> n ;
    int c ;

    if ( n == 0 || n == 1 ) {

        cout << n << endl;

    }else {
      
        int a = 0 ; // oth fibonacci number 
        int b = 1 ; // 1st fibonaaci number 
        
        int i = 2 ; // for fiboacci number 2 ..
        while ( i <= n ) {

            c  = a + b ;
            a = b ;
            b = c ;
            
            i = i + 1 ;

        }
    cout << c << endl; 
    }
    
    return 0 ;
}