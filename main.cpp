//this programm was created by IDEA0923
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
    cout<<"     3.pars about punctuation marks"<<endl;
    cout<<"$ : ";
    cin>>v;
    dash(10);
    pizda pzd(text);
    pars1 p;
    pars_with_punctuation_marks pars_pm;
    switch(v){
        case 1:{ 
                pzd.anal1();
                break;}
        case 2:{
                string txt;
                cout<<"input name file:"<<endl;
                cin>>txt;
                p.sr1(txt,text);
                break;}
        case 3:{
                pars_pm.pars(text);
                break;}
    }
    return 0;
}