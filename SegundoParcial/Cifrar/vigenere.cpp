#include <iostream>
#include <string>

#include "cifrado.h"
#include "vigenere.h"

using namespace std;


Vigenere::Vigenere(){}

Vigenere::Vigenere(string f, string fC): Cifrado(f)
{
   for (int i = 0; i < fraseCifrar.size(); ++i)
            {
                if (fraseCifrar[i] >= 'A' && fraseCifrar[i] <= 'Z')
                    this->fraseCifrar += fraseCifrar[i];
                else if (fraseCifrar[i] >= 'a' && fraseCifrar[i] <= 'z')
                    this->fraseCifrar += fraseCifrar[i] + 'A' - 'a';
            }
}

void Vigenere::cifrar(){
    string aux = Cifrado::frase;
    
    string out;
 
            for (int i = 0, j = 0; i < aux.length(); ++i)
            {
                char c = aux[i];
 
                if (c >= 'a' && c <= 'z')
                    c += 'A' - 'a';
                else if (c < 'A' || c > 'Z')
                continue;
 
                out += (c + fraseCifrar[j] - 2 * 'A') % 26 + 'A';
                j = (j + 1) % fraseCifrar.length();
            }
            
            cout <<"\n\tEl Cifrado Vigenere es: " << out;
            Cifrado::frase = out;
}


void Vigenere::descifrar(){
    string aux_inv = Cifrado::frase;
    string out;
 
            for (int i = 0, j = 0; i < aux_inv.length(); ++i)
            {
                char c = aux_inv[i];
 
                if (c >= 'a' && c <= 'z')
                    c += 'A' - 'a';
                else if (c < 'A' || c > 'Z')
                    continue;
 
                out += (c - fraseCifrar[j] + 26) % 26 + 'A';
                j = (j + 1) % fraseCifrar.length();
            }
 
    cout <<"\n\tEl Descifrado Vigenere es: " << out;
    cout <<"\n";
}


