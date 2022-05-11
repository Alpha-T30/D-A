#include <iostream>
using namespace std ;

int main () {
     int n ;
     int largest;
     cout<<"Enter the number of element you want to compare:";
     cin>>n;
     int a[n] ;
     for (int i =0 ; i<n ; i++) {
             cout<<"Enter the " << i+1<<"st number:" ;
        cin>>a[i] ;

     }
     int j =1 ;
     for (int i=0;i<n;i++){
        if (a[i]<a[n-j]){
            largest=a[n-j];
        }
        j++ ;
     }
     cout<<largest;
return 4 ; }
