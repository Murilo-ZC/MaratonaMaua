#include <iostream>

using namespace std;

int main(){
    do{
        int N;
        cin >> N;
        if(!N) break;

        string nomePar, nomeImpar;
        cin>> nomePar;
        cin>> nomeImpar;

        for(int i = 0; i < N; i++){
            int v1, v2;
            cin >> v1 >> v2;
            if( (v1+v2) % 2)
                cout << nomeImpar << endl;
            else 
                cout << nomePar << endl;
        }
    }while (1); //Força um loop infinito
}