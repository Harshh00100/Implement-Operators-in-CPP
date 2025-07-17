//Harsh kumar
//prn 24070123146
//B3
#include <iostream>
using namespace std ;
int main(){
    cout << "input the value of x " ;
    int n,m;
    cin >> n ;
    cout << "input the value of y " ;
    cin >> m ;
    if (n<0 && m<0){
        cout << "number is in third quadrant" ;
    }
    else if (n>0 && m>0)
    {
        cout << "number is in first quadrant" ;
    }
    else if (n<0 && m>0)
    {
        cout << "number is in second quadrant" ;
    }
    else if (n>0 && m<0)
    {
        cout << "number is in fourth quadrant" ;
    }
    else{
    cout << "number is on the line" ;}
return 0;
}
