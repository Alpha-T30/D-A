#include<iostream>
using namespace std ;

int main () {
    //swap
    int a= 5 , b=6;
    cout<<a<<"  "<<b<<endl;
    //method1
    swap(a,b) ;
     cout<<a<<"  "<<b<<endl;
    //method 2
    int c;
    c=a ;

    a=b ;
    b=c ;
     cout<<a<<"  "<<b<<endl;
     //method 3 jor
     a=a^b;
     b=a^b;
     a=a^b;
     cout<<a<<"  "<<b<<endl;
     cout<<"enter number:";

     int n ;
     cin>>n ;
     int arr[n] ;
     for (int i =0 ; i<n ; i++) {
        cout<<"enter hte "<<i<<"st number:"<<" ";
       cin>> arr[i] ;
     }
     for (int j = 0 ; j<n ; j++) {
        cout<< arr[j]<< " ";
     }
     for (int i = n ; i>0; i--) {
        cout<< arr[i-1] << " ";
     }
return 0 ;

}
