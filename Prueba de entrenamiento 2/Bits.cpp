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
vector <ull> latixa;
void llenar(){
    ull num=1;
    ull multiplo=0;
    ull cont=0;
    while(1){
        if(cont>=10e18)
        break;
        num = (ull)pow(2,multiplo);
        cont+=num;
        multiplo++;
        latixa.PB(cont);
    }
}

ull binary_search(ull a)
{
    ull min = 0, max = latixa.size() - 1, flag;
    while (max >= min)
    {
        flag = min + (max - min) / 2;
        if (latixa[flag] == a)
            return flag;
        else if (latixa[flag] > a)
            max = flag - 1;
        else
            min = flag + 1;
    }
    return min;
}

int main(){
    ull x,aux1,aux2;
    cin >> x;
    llenar();
    for(int i=0; x>i; i++){
        cin >> aux1 >> aux2;
        if(aux1==aux2)
        cout << aux1 << sl;
        else if(binary_search(aux1)==binary_search(aux2+1) or (aux1==1 && aux2 == 2) ){
        if(aux2&1)
        cout << aux2 << sl;
        else
        cout << aux2-1 << sl;
        }else
        cout << latixa[binary_search(aux2+1)-1]  << sl;
    }
}