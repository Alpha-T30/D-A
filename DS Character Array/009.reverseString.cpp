#include <iostream>
#include <cstring>
using namespace std ;



int getlen (char inp[]) {
    int len =  0 ;
    for (int i=0 ;inp[i]!='\0'; i++ ) {
        len+=1;
    }
return len ; }

string doReverse (char inpp[]) {
    int s = 0 ;
    int e = getlen(inpp) - 1;
    while (s<e) {
        swap(inpp[s],inpp[e]) ;
        s++;
        e--;
    }
    return inpp; }


int main () {
    char a[100];

    cin.getline(a,100) ;
    cout<<doReverse(a) ;


return 0 ;
}
