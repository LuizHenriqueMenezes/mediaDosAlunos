#include <iostream>

int main() {
    float N1, N2, N3, ME, MA;
    
    // Solicitar as notas do aluno
    std::cout << "Digite a primeira nota: ";
    std::cin >> N1;
    
    std::cout << "Digite a segunda nota: ";
    std::cin >> N2;
    
    std::cout << "Digite a terceira nota: ";
    std::cin >> N3;
    
    std::cout << "Digite a média dos exercícios: ";
    std::cin >> ME;
    
    // Calcular a média de aproveitamento
    MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7;
    
    // Determinar o conceito
    char conceito;
    if (MA >= 9) {
        conceito = 'A';
    } else if (MA >= 7.5) {
        conceito = 'B';
    } else if (MA >= 6) {
        conceito = 'C';
    } else if (MA >= 4) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }
    
    // Imprimir o conceito
    std::cout << "O conceito do aluno é: " << conceito << std::endl;
    
    return 0;
}
