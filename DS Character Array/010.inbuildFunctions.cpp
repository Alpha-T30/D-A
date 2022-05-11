#include <iostream>
#include <cstring>
using namespace std ;

int customstrcmp (char a[],char b[]) {
    if(strlen(a)!=strlen(b)) {
        return -1 ;
    } else{

    for (int i=0 ; i<strlen(a); i++){
        if ((a[i]-b[i])!=0){
                return (a[i]-b[i]);

        }

    }
    return 0 ;
    }


}

string exchange(char a[], char b[]) {
    int lena=strlen(a) ;
    int lenb=strlen(b) ;
    if (lena>=lenb){
         for (int i=0 ;i<=lena;i++)  {
            a[i]=b[i] ;
         }
         return a ;
    } else if (lena<lenb) {
            a[lenb] ;
        for (int i=0; i<=lenb; i++) {

            a[i] =b[i] ;
        }
        return a;

    }

  }

  string customStrNcpy(char a[], char b [],int  n ) {
      int lena=strlen(a) ;
    int lenb=strlen(b) ;
    if (lena>=lenb){
         for (int i=0 ;i<n;i++)  {
            a[i]=b[i] ;
         }
         return a ;
    } else if (lena<lenb) {
            a[lenb] ;
        for (int i=0; i<n; i++) {

            a[i] =b[i] ;
        }
        return a;

    }





  }


string customConcat(char a[], char b[]) {
    int lena =strlen(a) ;
    int lenb =strlen(b)  ;
    int lensum = lena+lenb ;
    a[lensum] ;
    char temp [lena] ;
    exchange(temp,a) ;
    for (int i=0 ; i<lensum; i++) {

                a[i+lenb] =temp[i] ;




    }
for (int i =0 ; i<lenb; i++) {
    a[i]=b[i] ;
}


return a; }

int main () {

    char c[100];
    char d[100] ;
    cin>>c>>d;
    customConcat(c,d) ;
    cout<<"this is c>>>>>>"<<c;





    return  0 ; }

