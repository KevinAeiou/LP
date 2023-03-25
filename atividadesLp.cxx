#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void atividade1(){
    float n1=0,n2=0,resultado;
    printf('Digite o primeiro número:\n');
    scanf('%f',&n1);
    printf('Digite o segundo número:\n');
    scanf('%f',&n2);
    resultado=n1*n2;
    printf('O produto entre %.1f e %.1f é %.1f.',n1,n2,resultado);
}

void atividade2(){
    float n1=0,n2=0,n3=0,media;
    printf('Digite a primeira idade:\n');
    scanf('%f',&n1);
    printf('Digite a segunda idade:\n');
    scanf('%f',&n2);
    printf('Digite a terceira idade:\n');
    scanf('%f',&n3);
    media=(n1+n2+n3)/3;
    printf('A média entre as idades é: %.1f\n',media);    
}

void atividade3(){
    float n1=0,n2=0,soma,diferenca,multiplicacao,divisao;
    printf('Digite o primeiro número:\n');
    scanf('%f',&n1);
    printf('Digite o segundo número:\n');
    scanf('%f',&n2);
    soma=n1+n2;
    diferenca=n1+n2;
    multiplicacao=n1*n2;
    divisao=n1/n2;
    printf('A soma entre %.1f e %.1f é: %.1f',n1,n2,soma);
    printf('A diferença entre %.1f e %.1f é: %.1f',n1,n2,diferenca);
    printf('A multiplicação entre %.1f e %.1f é: %.1f',n1,n2,multiplicacao);
    printf('A divisão entre %.1f e %.1f é: %.1f',n1,n2,diferenca);
}

void atividade4(){
    

}
int main(){
    printf('Menu de atividades:\n');
    atividade1()
}