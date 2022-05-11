#include <iostream>
#include <cstring>
using namespace std ;
int main () {
char a[100] ;
cout<<"Enter a word:";
cin >> a;
int i = 0 ;



while (i<=strlen(a)) {

        for (int j=0 ; j<i;j++) {
            cout<<a[j];
        }
        cout<<""<<endl;
        i++;


}

return  0  ;  }

