#include<iostream>
using namespace std;

int main (){
    char Ch;
    cin>>Ch;
    if((Ch >='a'&& Ch<='z')){
        cout<<"lowercase";
    }
    else if((Ch>='A' && Ch<='Z')){
        cout<<"UPPERCASE";
    }
    else if((Ch>='0' && Ch<='9')){
        cout<<"NUMERIC";
    }
    else {
        cout<<"special character"<<endl;
    }

    return 0;
}