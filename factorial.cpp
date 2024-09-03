#include <iostream>
using namespace std;
int main(){
    int number =0, fact =1;
    cout <<"Enter any number"<<"\n";
    cin>>number;
     
    for(int i=1; i<=number; i++){
       
        fact = i*fact;
    }
    cout <<fact;
    return 0;
}