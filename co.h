#include <iostream>
#include <map>
#include <string>
using namespace std;
class pizda{
    string text1;
    string sim_mass;
    int n_m_s = 0;
    map<char , unsigned int>ch;
    unsigned int num_mass;
    public:
    pizda(string c){
        this->text1 = c;
    }
        void anal1(){
            num_mass = text1.size();
            
            for(int a = 0;a<=num_mass;a++){
                ch[text1[a]] = ch[text1[a]] +1;
                if(ch[text1[a]] == 1){
                    sim_mass = sim_mass + text1[a];
                    n_m_s = n_m_s +1 ;
                }
            }
            if(1){
                bool p1 = false ;
                bool p2 = false;
                int per = 0;
                int buf;
                for(int a = 0;a<n_m_s;a++){
                    for(int b= 0;b<n_m_s;b++){
                        if(ch[sim_mass[a]]<ch[sim_mass[b]]){
                            per++;
                            buf = sim_mass[a];
                            sim_mass[a] = sim_mass[b];
                            sim_mass[b]= buf;
                        }
                    }
                    if(per == 0){
                            if(p1 == 1){
                                if(p2 == 1){
                                    cout<<"post_sort"<<endl;
                                    goto post_sort;
                                }
                                p2 = 1;
                            }else{
                                p1 = 1;
                            }
                    }else{
                        per = 0;
                    }
                }
            }
            post_sort:
            for(int a = 0;a<n_m_s;a++){
                cout<<sim_mass[a]<<" = "<<ch[sim_mass[a]]<<endl;
            }
        
        }
};