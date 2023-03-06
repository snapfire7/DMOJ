#include <bits/stdc++.h>
using namespace std;
// Jose Miguel Frade IPVCE MH7 Artemisa
//================macros=====================
// Maximo
#define mx 10e7
// Optimizacion
#define fast     \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(0);
// Constantes
#define pi 3.141592
// salto de linea
#define sl "\n"
// varibales
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define qi queue<int>
#define sei set<int>
// Comandos vector
#define PB push_back
#define ins(a, b) insert(make_pair(a, b))
// Comandos queue
#define P push
#define Fr front()
#define PP pop()
// Comandos para set
#define IN insert
#define C count
// Comandos para string
#define str to_string
// Comandos Pair
#define F first
#define S second
//===========================================
//! el codigo se puede hacer por "segment descomposition" o por "Binary search"
int block=sqrt(mx)+1;
bitset<100000000>prim;
vector<int> sblock(block,0);

void criba(){ //sacando primos
    prim.set()
    prim[0]=prim[1]=false;
    for(int i=2; mx>i;i++)
    if(prim[i]){
        sblock[i/block]++;
        if(i<block-1)
            for(int j = i+i; mx>j; j+=i)
            prim[j]=false;
    }
}

int segment_descomposition(int min, int max){
    int minblock = min/block;
    int maxblock = max/block;
    int total = 0;
    if(minblock==maxblock)
        for (int i = min; i < max+1; i++)
        total += prim[i];
    else{
        for (int i = min; i < (minblock+1)*block ; i++)
        total+=prim[i];
        for (int i = minblock+1; i < maxblock; i++)
        total+=sblock[i];
        for(int i = maxblock*block; i<=max; i++)
        total+=prim[i];
    }
    return total;
}

int main(){
    criba();
    fast;
    int rep, aux1, aux2;
    cin >> rep;
    for(int i=1; i<=rep; i++)
    {
        cin >> aux1 >> aux2;
        cout << "Test Case #" << i << ": " << segment_descomposition(aux1, aux2) << sl;
    }
    

}