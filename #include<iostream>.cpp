#include<iostream>
#include<fstream>
using namespace std;
int main (){
    string names[3];
    int i=0;
    while(i<3){
        string name;
        cout<<"enter name:"<<endl;
        cin>>name;
        names[i]=name;
        i++;
    }
    cout<<names[1];
}
