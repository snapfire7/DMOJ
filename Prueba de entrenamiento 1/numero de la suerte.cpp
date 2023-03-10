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
bool flag=0;
int main(){
    string arr;
    cin >> arr;
    string pedruco ="";
    int aux;
    if(arr.size()&1){
        for(int i=0; (arr.size()+1)/2>i; i++)
        cout << 4;
        for(int i=0; (arr.size()+1)/2>i; i++)
        cout << 7;
    flag=1;
    }if(arr.size()==2){
        if(stoi(arr)<=47)
        cout << 47;
        else if(stoi(arr)>=47 && stoi(arr)<=75)
        cout << 74;
        else
        cout << 4477;
    }else{
        int cont4=arr.size()/2;
        int cont7=arr.size()/2;
        for(int i=0; arr.size()>i; i++){
            if(arr[i]<='4'){
            if(cont4!=0){
            pedruco += '4';
            cont4--;
            }else{
            pedruco += '7';
            cont7--;
            }
            }
            else{
            if(cont7!=0){
            pedruco += '7';
            cont7--;
            }else{
                pedruco += '4';
                cont4--;
            }
            }
        }
    }
    if(!flag && pedruco>arr){
    cout << pedruco;
    } else{
        
    for(int i=0; arr.size()/2+1>i;i++)
    cout << 4;
    for(int i=0; arr.size()/2+1>i;i++)
    cout << 7;
    }


}