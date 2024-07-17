#include <stdio.h>

int main() {
    
    float num1, num2, media;
    char nome[50];

    printf("Calcule a media dos alunos. \n\n");

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &num1);

    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    
    media = (num1 + num2) / 2;

    printf("O aluno %s tem a media de: %f\n", nome, media);

    return 0;
}
