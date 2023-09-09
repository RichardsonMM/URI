/* Biblioteca para lista simplesmente encadeada
 * Autor: Richardson Patrick Matos de Moraes
 * Data: 10-29-2018
 */ 

#include <string>
#include <iostream>
#include <new>


struct nodolista{
    std::string info;
    nodolista *elo;
};

struct lista{
    nodolista *inicio = nullptr;
    nodolista *fim = nullptr;
    unsigned tamanho = 0;
};

bool lista_insere_inicio(lista &li, std::string valor){
    nodolista *novo;

    novo = new (std::nothrow) nodolista;
    if(!novo) return false;

    novo->elo = li.inicio;
    li.inicio = novo;
    novo->info = valor;

    if(!li.fim) li.fim = novo;
    li.tamanho++;

    return true;
}

bool lista_insere_fim(lista &l, std::string s){
    nodolista *novo = new(std::nothrow) nodolista;
    if(novo == nullptr) return false;

    novo->info = s;
    novo->elo = nullptr;
    if(l.inicio == nullptr){
        l.inicio = l.fim = novo;
    }else{
        l.fim->elo = novo;
        l.fim = novo;
    }
    l.tamanho++;
    return true;
}

bool lista_consulta(lista l, std::){
    nodolista *aux = l.inicio;
    while(aux != nullptr){
        if(aux->info == s) return true;
        aux = aux->elo;
    }
    return false;
}

void lista_mostra(lista l){
    nodolista *p = l.inicio;
    while(p != nullptr){
        std::cout << p->info << std:: endl;
        p = p->elo;
    }
}



