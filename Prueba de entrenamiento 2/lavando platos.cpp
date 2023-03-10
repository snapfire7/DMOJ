#include <bits/stdc++.h>
using namespace std;
//Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
//Maximo
#define MAX  
#define MAXINT
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
#define vvii vector<vector<ii>>
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
int main(){
stack <int> sucios,mojados,limpios;
int x,aux=0,time=0;
cin >> x;

    for(int i=x; 0<i; i--)
    sucios.P(i);

    while(!sucios.empty() or !mojados.empty()){
        cin >> aux >> time;
        if(aux==1)
        for(int i=0; time>i; i++){
            mojados.P(sucios.top());
            sucios.PP;
        }else
        for(int i=0; time>i; i++){
            limpios.P(mojados.top());
            mojados.PP;
        }
    }
    for(int i=0; x>i; i++){
    cout << limpios.top() << sl;
    limpios.PP;
    }

    return 0;
}