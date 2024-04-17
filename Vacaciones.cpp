#include <iostream>
#include <map>
#include <set>

using namespace std;

set<string> agregarDestino();
void validarFecha();


int main(){

    

    return 0;
}


set<string> agregarDestino(){
    
    set<string> destinos;
    string destino;


    while (true)
    {
        cout << "Ingrese el destino";
        cin >> destino;

        auto itDestino = destinos.find(destino);
        
        if(itDestino != destinos.end()){

            cout << "El destino ya se encuentra registrado" << endl;

        }
        else{

            


        }
        

    }
    

}

void validarFecha(){


}

