#include <bits/stdc++.h>
using namespace std;
//Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
//Maximo
#define mx 10000000
//Optimizacion
#define fast     \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(0);
//Constantes
#define pi 3.141592
//salto de linea
#define sl "\n"
//varibales
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define qi queue<int>
#define sei set<int>
//Comandos vector
#define PB push_back
#define ins(a,b) insert(make_pair(a,b))
//Comandos queue
#define P push
#define FR front()
#define PP pop()
//Comandos para set
#define IN insert
#define C count
//Comandos para string
#define str to_string
//Comandos Pair
#define F first
#define S second
//===========================================
vector <pair <pair<ull,ull>, ull> > input;
ull main(){
    fast
    ull x,aux1,aux2,aux3,cont=0,time=0;
    pair <ull,ull> aux;
    cin >> x;
    for(ull i=0; x>i; i++){
    cin >>aux1>>aux2>>aux3;
    input.PB(make_pair(make_pair(aux3,aux2),aux1));
    }
    sort(input.begin(),input.end());
    for(ull i=0; x>i; i++){
        if(input[i].F.F==input[i+1].F.F)
            for(ull j=0; x>j; j++)
            if(input[i].F.S>input[i+1].F.S){
                aux=input[i].F;
                input[i].F=input[i+1].F;
                input[i+1].F=aux;
            }
    }


    for(ull i=0; x>i; i++){
        time+= input[i].F.F;
        cont+= input[i].S-(time*input[i].F.S);
    }
    cout << cont;
}