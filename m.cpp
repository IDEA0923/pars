//this programm was created by IDEA
#include <iostream>
#include "co.h"
#include "pars_text1.h"
using namespace std;

int main(){
    int v;
    string text;
    cout<<"f*ck you , but input text : "<<endl;
    getline(cin,text);
    cout<<"what you wand do:"<<endl;
    cout<<"     1.frequency analysis"<<endl;
    cout<<"     2.text parsing"<<endl;
    cout<<"$ : ";
    cin>>v;
    for(int a = 0;a<10;a++){
        cout<<"-";
    }cout<<"-"<<endl;
    pizda pzd(text);
    pars1 p;
    switch(v){
        case 1: 
                pzd.anal1();
                break;
        case 2:
                string txt;
                cout<<"input name file:"<<endl;
                cin>>txt;
                p.sr1(txt,text);
                break;
    }
    return 0;
}