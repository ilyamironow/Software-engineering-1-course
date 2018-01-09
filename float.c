#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define constnum 3
struct descriptionstruct {
    char *str;
    void (*function)(float x);
} description[constnum];

void initialdesription(char *str, void (*function)(float x), int num) { 
    description[num].str = str;
    description[num].function = function;
}


void printDescription(struct descriptionstruct str[], int sizestruct)
{
    for (int i = 0; i < sizestruct; i++) {
        printf("Method №%d: %s\n", i + 1, str[i].str);
    }

}

void mantissaPrint(int mantissa) {
    char str[24] = "";
    union {
        int mantissa:23;
        short bit:1;
    } bitField;
    bitField.mantissa = mantissa;

    int n = 23, i = 0;
    while (bitField.mantissa << i + 9 && i < 23) {
        bitField.mantissa = bitField.mantissa >> n - (i + 1);
        str[i] = (char) (abs(bitField.bit) + '0') ;
        bitField.mantissa = mantissa;
        i++;
    }
    str[i] = 0;

    if (strlen(str))printf(".%s", str);
}

void Result(int sign, int exponenta, int mantissa) {
    printf("    %d   %d\n", sign, exponenta - 127);
    printf("(-1) * 2 * 1");
    mantissaPrint(mantissa);
}

void first(float x) {
    union {
        float num;
        int intNum;
        int sign:1;
        int exponenta:8;
        int mantissa:23;
    } field;

    field.num = x;

    int mantissa = field.mantissa;
    field.intNum = field.intNum >> 23;
    int exponenta = field.exponenta;
    field.intNum = field.intNum >> 8;
    int sign = abs(field.sign);

    Result(sign, exponenta, mantissa);
}

void second(float x) {
    union {
        float num;
        int intNum;
    } field;

    field.num = x;

    int mantissa = field.intNum & 0x007fffff;
    int exponenta = (field.intNum & 0x7f000000) >> 23;
    int sign = abs((field.intNum & 0x80000000) >> 31);

    Result(sign, exponenta, mantissa);
}

void third(float x) {
    int *px = (int*) &x;
    int intx = *px;
    int mantissa = intx & 0x007fffff;
    int exponenta = (intx & 0x7f000000) >> 23;
    int sign = abs((intx & 0x80000000) >> 31);
    Result(sign, exponenta, mantissa);
}

void printer(int num, int x, int y) {
	if (y) {
		printf("%d\n", x / y);
		description[num - 1].function(x / y);
	} else {
		if (x) {
			if (x > 0){
				printf("+Inf");
			} else {
				printf("-Inf");
			}
		} else {
			printf("NaN");
		}
	}
	printf("\n");
}

int main() {
    if (sizeof(float) == 4) {
        int sizestruct = sizeof(description)/ sizeof(description[0]);
        initialdesription("union with int", first, 0);
        initialdesription("union with struct with bit fields", second, 1);
        initialdesription("taking an address and dereferencing a pointer", third, 2);
        printDescription(description, sizestruct);
        printf("Please, choose method: 1 to %d and input two floats:\n", constnum);
		int num;
        float x, y = 1;
        scanf("%d %f %f",&num, &x, &y);
		printer(num, x, y);
	}	
	else {
		printf("ERROR: floatSize != 4\n");
	}
    return 0;
}
