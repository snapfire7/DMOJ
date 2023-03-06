#include <cstdio>
int main(){
    int x,cont=0,aux;
    scanf("%d",&x);

    for(int i=1;x>i; i++){
        scanf("%d",&aux);
        cont+=aux;
    }

    int aux = (x*(x+1))/2-cont;
    printf("%d", aux);
}