#include <iostream>
using namespace std ;

int main () {
    // cin stop in space , tab etc

      char b[100] ;
    cout<<"Enter something again:";
    cin.getline(b,100,'l');
    cout<<b<<endl;
return 0 ;  }
