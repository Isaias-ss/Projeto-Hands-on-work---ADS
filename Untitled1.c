
//Bibliotecas
#include <stdio.h> // Biblioteca padrão do C
#include <math.h> // Biblioteca que armazena funções matematicas
#include <string.h> // Para manipulação de cadeias de caracteres e regiões de memória

//Chamadas das funções
int converterBin2Dec(long long valor_binario);
long long converterDec2Bin(int valor_decimal);

int main() {

	//Variáveis usadas
	char opc = ' ';
	long long valor_binario;
	int valor_decimal, cociente;
	int sequencial, valor_temp, tamanho_string;



	//Enquanto não for a opção 0 (Sair)
	while (opc != '0') {

		//Mostra o menu principal
		printf("\n----------------------\n");
		printf("Digite a Opcao\n");
		printf("1 - Binario para Decimal\n");
		printf("2 - Decimal para Binario\n");
		printf("0 - Sair\n");
		printf("Resposta: ");
		scanf("%c", &opc);
		getchar();

		//Opção 1 - Binário -> Decimal
		if (opc == '1') {
			printf("Digite numero binario: ");
			scanf("%lld", &valor_binario);
			printf("[%lld] em binario = [%d] em decimal\n", valor_binario, converterBin2Dec(valor_binario));
		}


		//Opção 2 - Decimal -> Binário
		else if (opc == '2') {
			printf("Digite o numero decimal: ");
			scanf("%d", &valor_decimal);
			printf("[%d] em decimal = [%lld] em binario\n", valor_decimal, converterDec2Bin(valor_decimal));
		}

		else if (opc == '0') {
            printf("sair\n");
		}

		 return 0;

}


}

//Função para converter Binário para Decimal
int converterBin2Dec(long long valor_binario) {

    int total = 0;
    int potenc = 1;


    //Enquanto existir valor no binário
    while (valor_binario > 0) {

		total += valor_binario % 10 * potenc;
		valor_binario = valor_binario / 10;
		potenc = potenc * 2;

		fprintf(stderr, "while\n");
    }

    return total;
}

//Função para converter Decimal para Binário
long long converterDec2Bin(int valor_decimal)
{
    long long valor_binario = 0;
    int resto, sequencial = 1;

	//Enquanto o valor decimal for diferente de zero
    while (valor_decimal != 0)
    {
		//Pega o resto da divisão
        resto = valor_decimal % 2;

        //Divide o valor decimal por 2
        valor_decimal /= 2;

        //Incrementa o valor binário, multiplicando o resto da divisão pelo sequencial
        valor_binario += resto * sequencial;

        //Multiplica o sequencial por 10
        sequencial *= 10;
    }

    return valor_binario;
}





