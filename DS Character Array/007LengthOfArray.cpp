#include <iostream>
using namespace std;

int getLength (char arr[]) {
    int length = 0 ;
    for (int i =0  ; arr[i]!= '\0';i++) {
        length +=1 ;
    }

    return length ;
}

int main (){
    cout<<"Enter a word: ";
    char a[100] ;
    cin>>a;
  cout<<getLength(a) ;


return 0 ;  }

