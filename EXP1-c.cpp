#include <iostream>
using namespace std ;
int main(){
    int count , n, n2 = 0;
 cout << "input the no.of subjcts :  " ;
 cin >> count ; 
    for (int i = 0; i < count; i++)
    { int n1;
        cout << "enter marks " << " subject  " << i+1  << "\n";
        cin >> n1 ;
        if (n1 <= 100 && n1 >= 0) {
        n2=n2+n1 ;
    } 
    else {
        cout << "invalid marks \n" ;
    } }
    n = n2/count ;
    if (n>=95 ){
        cout << "Grade O" ;
    }
    else if (n>80 && n<95)
    {
        cout << "GRADE A" ;
    }
    else if (n<=80 && n>65)
    {
        cout << "GRADE B"  ;
    }
    else if (n>=50 && n<60)
    {
        cout << "GRADE C"  ;
    }
    else{
    cout << "GRADE FAIL"  ;}
return 0;
}