#include <iostream>
using namespace std;
int main(){
    int number, modilo=0;
    cout <<"Enter any number"<<"\n";
    cin>>number;
    while(number!=0){
        modilo = modilo*10 +number%10;
        number =number/10;

    }
    cout<<modilo;
}