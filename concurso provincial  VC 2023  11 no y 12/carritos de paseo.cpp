#include <bits/stdc++.h>
using namespace std;


pair<bool,int> fin(int opa[],int y){
    int minimo=9999999;
    for(int i=0;y>i; i++)
    minimo=min(minimo,opa[i]);
    if(minimo==0){
    return pair <int,int>(1,minimo);
    }

    return pair <int,int>(0,minimo);
}

int main(){
    cin.tie(0);  
    cout.tie(0); 
    ios_base::sync_with_stdio(0);
    int x,y,cont=0;
    cin >> x >> y;
    vector<int> carros(y);
    int opa[y];

    for(int i=0; y>i;i++)
    cin >> carros[i];
    
    memset(opa,0,sizeof(opa));
    if(y>x)
    cout << x;
    else
    while(1)
    {
        while(1){
        pair <int,int> p = fin(opa,y);
        if(!p.first){
            for(int k=0; y>k; k++)
            opa[k]-=p.second;
        } else {
        for(int k=0; y>k; k++){
        if(opa[k]==0){
        opa[k]=carros[k];
        x--;
        cont=k;
        if(!x)
        goto pako;
        }
        }
        }
        }
    }
    pako:
    cout << cont+1;
}