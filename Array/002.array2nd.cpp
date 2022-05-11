#include <iostream>
using namespace std ;

int main() {
    int n ;
    cout<<"Enter the amount of number you want to add:";
    cin>>n;
     int a[n] ;

    for (int i = 0; i<n; i++){
        cout<<"Enter the " << i+1<<"st number:" ;
         cin>>a[i] ;
    }

    int sum = 0 ;

    for (int i =0 ; i<n; i++) {
        sum += a[i] ;
    }
    cout<<sum << "" ;
return  0 ; }
