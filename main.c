
#include <stdio.h>

int main(void)
{
    int input;
    long sum = 0;

    scanf("%d", &input);

    if (input < 0) {
        printf("NG");
        return 0;
    }

    // 1から入力値まで順番に調べる
    for (int number = 1; number <= input; number++) {

        // 3または5の倍数は合計に加えない
        if (number % 3 == 0 || number % 5 == 0) {
            continue;
        }

        sum += number;
    }

    printf("%ld", sum);

    return 0;
}
