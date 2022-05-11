#include <iostream>
using namespace std ;

int main () {
    cout<<"put the length of the array:"<<endl;
    int n ;
    cin>>n;
    int a[n] ;
    for (int i =0; i<n; i++) {
        cout<<"enter the "<<i+1<<"st item:"<<endl ;
        cin>>a[i] ;
    }
    int j =n-1;
    for (int i=0 ; i<n; i++) {
            swap(a[i],a[j]) ;

        j--;
        if (j<i){
            break ;
        }
    }
    for (int i =0 ; i<n ; i++) {
        cout<<a[i]<<" ";
    }

return 0 ; }
