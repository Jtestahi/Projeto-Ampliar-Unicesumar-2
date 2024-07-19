/*
    Escreva um programa que receba o salário de um funcionário e
    calcule quanto ele precisa pagar de imposto de renda (aliquota 25%)
*/

int main() {
    float salario, result, result2;

    printf("Digite o valor do seu salario?: \n");
    scanf("%f", &salario);

    result = salario*25/100;

    result2 = salario - result;

    
    printf("O imposto de (aliquota 25 por cento) sobre o seu salario e de: %.2f \n", result);

    printf("O salario liquido e de: %.2f", result2);
    
    return 0;
}
