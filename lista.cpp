#include<iostream>
#include<string>
#include<new>


struct nodolista{
    std::string info;
    nodolista *elo;
};

struct lista{
    nodolista *inicio = nullptr;
    nodolista *fim = nullptr;
    unsigned tamanho = 0;
};

bool insere_fim(lista &l, std::string valor){
    nodolista *novo;

    novo = new(std::nothrow) nodolista;

    if(!novo) return false;
    
    novo->info = valor;
    novo->elo = nullptr;
    if(l.inicio == nullptr){
       l.inicio = l.fim = novo;
    }
    else{
        l.fim->elo = novo;
        l.fim = novo;
    }
    tamanho++;
    return true;
}

bool insere_inicio(lista &l, std::string valor){
    nodolista *novo;

    novo = new(std::nothrow)nodolista;

    if(!novo) return false;

    novo->info = valor;
    novo->elo = l.inicio;
    l.inicio = novo;

    if(!l.fim) return true;
    l.tamanho++;
    return true;
}

bool lista_consulta(lista l, std::string s)
{
    nodolista *aux = l.inicio;
    while(aux != nullptr) {
        if(aux->info == s) return true;
        aux = aux->elo;
    }
    return false;
}

void lista_mostra(lista l)
{
    nodolista *p = l.inicio;
    while(p != nullptr) {
        std::cout << p->info << std::endl;
        p = p->elo;
    }
}

bool lista_igual(lista l1, lista l2){

    if(l1.tamanho != l2.tamanho) return false;

    nodolista *p = l1.inicio, *p2 = l2.inicio;

    while(p1 != null){
        if(p1->info != p2->info) return false;

        p1 = p1->elo;
        p2 = p2->elo;
    }
    return true;

}

bool lista_retira(lista l, std::string s){
    nodolista *atual = l.inicio, *aux = nullptr;

    while(atual != nullptr){
        if(atual->info == s){
            if(l.inicio == l.fim)
                l.inicio = l.fim = nullptr;
            else{
                if(atual == l.inicio)
                    l.inicio = l.inicio->elo;
            }
        }
        
    }



}








