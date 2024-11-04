#include <stdio.h>
#include <math.h>

int main() {
    double value1;
    double value2 = 0;
    char opp;
    double answer;

    printf("Enter Calculations (e.g., 5 + 3 or 9 r for sqrt):\n");

    if (scanf("%lf %c %lf", &value1, &opp, &value2) < 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (opp == 'r') {
        answer = sqrt(value1);
        printf("sqrt(%.9g) = %.6g\n\n", value1, answer);
        return 0;
    }

    switch (opp) {
        case '+': answer = value1 + value2; break;
        case '-': answer = value1 - value2; break;
        case '/': answer = value1 / value2; break;
        case '*': answer = value1 * value2; break;
        case '^': answer = pow(value1, value2); break;
        default:
            printf("Failed. Unknown Operator\n");
            return 1;
    }

    printf("%.9g %c %.9g = %.6g\n\n", value1, opp, value2, answer);

    return 0;
}
