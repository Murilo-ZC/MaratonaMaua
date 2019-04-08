#include <iostream>

using namespace std;

int main(){
    for(int numeroTeste = 1; ; numeroTeste++){
        int N;
        cin >> N;
        if(!N) break;

        string nomePar, nomeImpar;
        cin>> nomePar;
        cin>> nomeImpar;

        char saidas[N];

        for(int i = 0; i < N; i++){
            int v1, v2;
            cin >> v1 >> v2;
            saidas[i] = (v1+v2) % 2;
        }

        //exibe a saída
        cout << "Teste " << numeroTeste << endl;
        for(int i = 0 ; i < N ; i++)
            if(saidas[i])
                cout << nomeImpar << endl;
            else 
                cout << nomePar << endl; 
    }
}