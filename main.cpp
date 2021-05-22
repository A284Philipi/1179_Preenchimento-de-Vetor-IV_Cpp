#include <iostream>
#include <list>

using namespace std;

int main()
{
    int cont = 0, numero = 0, cont_casas = 0, tamanho_lista;
    list<int> lista_par;
    list<int> lista_impar;
    list<int>::iterator it;
    while (cont < 15){
        cin >> numero;
        if (numero % 2 == 0){
            lista_par.push_back(numero);
        }else{
            lista_impar.push_back(numero);
        }
        tamanho_lista = lista_par.size();
        if (tamanho_lista == 5){
            for(it = lista_par.begin(); it != lista_par.end(); it++){
                cout << "par[" << cont_casas << "] = " << *it <<endl;
                cont_casas++;
            }
            cont_casas = 0;
            lista_par.clear();
        }else{
            tamanho_lista = lista_impar.size();
            if (tamanho_lista == 5){
                for(it = lista_impar.begin(); it != lista_impar.end(); it++){
                cout << "impar[" << cont_casas << "] = " << *it <<endl;
                cont_casas++;
                }
                cont_casas = 0;
                lista_impar.clear();
            }
        }
        cont++;
    }
    for(it = lista_impar.begin(); it != lista_impar.end(); it++){
        cout << "impar[" << cont_casas << "] = " << *it <<endl;
        cont_casas++;
    }
    cont_casas = 0;
    lista_impar.clear();
    for(it = lista_par.begin(); it != lista_par.end(); it++){
        cout << "par[" << cont_casas << "] = " << *it <<endl;
        cont_casas++;
    }
    cont_casas = 0;
    lista_par.clear();
    return 0;
}
