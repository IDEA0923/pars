#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;
void dash(int a){
    for(int b = 1;b<a;b++){
        cout<<"-";
    }
    cout<<"-"<<endl;
}
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
class text{
    public:
    string txt;
    int weigh;
    text(string a){
        this->txt = a;
        this->weigh = a.size();
    }
};
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
class pars_with_punctuation_marks{
        string p_m = ",.?!^*()-+";
        int p_w = p_m.size();
        int * num_p1 = new int [p_w];
        int * num_p2 = new int [p_w];
        int * num_p3 = new int [p_w];
        int * num_p4 = new int [p_w];
        char space = ' ';
        int sum4(){
            int y;
            for (int a = 0;a<p_w;a++){
                y = y+ num_p4[a];
            }
            return y;
        }
        int sum3(){
            int y;
            for (int a = 0;a<p_w;a++){
                y = y+ num_p3[a];
            }
            return y;
        }
        int sum2(){
            int y;
            for (int a = 0;a<p_w;a++){
                y = y+ num_p2[a];
            }
            return y;
        }
        int sum1(){
            int y;
            for (int a = 0;a<p_w;a++){
                y = y+ num_p1[a];
            }
            return y;
        }

    public:

        void pars(string a){
            text t(a);
            
            for(int b = 0;b<t.weigh;b++){
                for(int c = 0 ;c<p_w;c++){
                    if(t.txt[b]==p_m[c]){
                        if(t.txt[b-1] == space &&t.txt[b+1] == space){num_p1[c] =num_p1[c] +1;
                        }else if(t.txt[b-1] != space &&t.txt[b+1] == space){num_p2[c] =num_p2[c] +1;
                        }else if(t.txt[b-1] == space &&t.txt[b+1] != space){num_p3[c] =num_p3[c] +1;
                        }else if(t.txt[b-1] != space &&t.txt[b+1] != space){num_p4[c] =num_p4[c] +1;
                        }else{cout<<"ERROR:invalid pars 84"<<endl;}
                    }
                }
                
            }
            dash(5);
            cout<<"conclusion"<<endl;
            dash(5);
            cout<<"User used :";
            cout<<"     doesn't space punctuation marks "<<sum4()<<endl;
            cout<<"     space before puncruation marks : "<<sum3()<<endl;
            cout<<"     space after punctuation marks : "<<sum2()<<endl;
            cout<<"     space before and after punctuation mark : "<<sum1()<<endl;
        }
        ~pars_with_punctuation_marks(){
            delete [] num_p1;
            delete [] num_p2;
            delete [] num_p3;
            delete [] num_p4;
        }
};