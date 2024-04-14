#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;

void add_text(){

}
int add_new_text(string a){
    ifstream fi;
    unsigned int f = 1;
    string name = to_string(f) + ".txt";
    fi.open(name);
    while(fi.is_open()){
        f++;
        fi.close();
        name = to_string(f) + ".txt";
        fi.open(name);
    }
    ofstream fout;
    fout.open(name);
    fout<<a;
    return 0;
}
int pars_text(string a, string b){
    int n1 = a.size();
    int n2 = b.size();
    int num = 0;
    for(int d = 0;d<n1;d++){
        if(a[d] == b[0]){
            for(int n3 = 0;n3<n2;n3++){
                if(a[d+n3] == b[n3]){
                    if(n3==n2 - 1){
                        num++;
                    }
                }else{break;}
            }
        }
    }
    return num;
}
class pars1{
        string n;
        string last_str;
        int a;
    public:
        void sr1(string txt, string text){
            ifstream read;
            read.open(txt);
            do{
                getline(read,last_str);
                int a = pars_text(text,last_str);
                cout<<last_str<<" = "<<a<<endl;
            }while(!read.eof());
        }
};