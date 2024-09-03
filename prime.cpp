#include <iostream>
using namespace std;
int main(){
    int number =0;
    int count = 0;
    
    cout << "Enter a number "<<"\n";
    cin >>number;
    for( int a=1; a<=number; a++){
        if(number%a==0)
        count++;
        
    }
    if (count == 2){
        cout <<" this is prime number " ;

    }
    else{
        cout <<"this is not prime number";
    }
    return 0;

}