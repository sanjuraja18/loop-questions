#include <iostream>
using namespace std;
int main(){
    int number, modilo, palin=0;
    cout <<"Enter any number"<<"\n";
    cin>>number;
    palin=number;
    while(number!=0){
        modilo= modilo*10 + number%10;
        number = number/10;
    }
    if(palin==modilo){
        cout<<"number is palindrom ";
    }
    else{
        cout <<"number is not palindrom";
    }
    return 0;

}