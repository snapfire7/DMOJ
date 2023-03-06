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
vector <int> padre;
vector <int> grafo[3001];
void init(int n){
    for(int i=0; n>=i; i++)
    padre.PB(i);
}

int FIND(int x){
    if(padre[x]==x)
        return x;
    else
        return padre[x]=FIND(padre[x]);
    

}

void UNION(int x, int y){
    int rx = FIND(x);
    int ry = FIND(y);
    padre[rx] = ry;
}

int main(){
    fast
    int x,y,de,hasta,aux,marcador=0;
    cin >> x >> y;
    bitset<3001>nodos;
    pair<stack <int>, stack <int>> origen;
    init(x);
    for(int i=0; y>i; i++){
        cin >> de >> hasta;
        grafo[de].PB(hasta);
        grafo[hasta].PB(de);
    }

    for(int i=0; x>i; i++){
        cin >> aux;
        origen.F.P(aux);
    }

    while(!origen.F.empty()){
        int candela = origen.F.top();
        origen.F.PP;
        nodos[candela]=1;
        marcador++;
        for(int i=0; grafo[candela].size()>i; i++){
            if(!nodos[grafo[candela][i]])
            continue;
            
            if(FIND(grafo[candela][i])!=FIND(candela)){
                marcador--;
                UNION(grafo[candela][i],candela);
            }
        }
        origen.S.P(marcador);
    }
    while(!origen.S.empty()){
        if(origen.S.top()==1)
        cout << "YES\n";
        else
        cout << "NO\n";
        origen.S.PP;
    }



}