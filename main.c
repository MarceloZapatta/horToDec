#include <stdio.h>
#include <winuser.h>

int main() {
    char horario[5];

    // Horario convertido para decimal
    float decimal;
    printf("Digite o horario a ser convertido: \n");
    scanf("%s", horario);

    decimal = (((horario[0] - '0') * 10) + (horario[1] - '0')) + 
        ((((horario[3] - '0') * 10) + (horario[4] - '0')) / 60.00);
    
    // Abre o clipboard
    if(OpenClipboard()) {
        SetClipboardData('teste');
    }
    
    printf("%.2f\n", decimal);
}