#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i,j,k;
    string s,p="/",t;
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="cd"){
            cin>>s;
            s+='/';
            for(j=0;j<s.length();j++){
                t+=s[j];
                if(s[j]=='/'){
                    if(t=="/"){
                        p=t;
                    }
                    else if(t=="../"){
                        for(k=p.length()-1;p[k-1]!='/';k--);
                            p.resize(k);
                        }
                    else{
                        p+=t;
                    }
                    t="";
                }
            }
        }
        else{
            cout<<p<<endl;
        }
    }
    return 0;
}
