#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
* Kullanicidan alinan sayiyi alip o kadar ic ice kare olusturunuz.
* Ornek: 5

	5 5 5 5 5 5 5 5 5
	5 4 4 4 4 4 4 4 5
	5 4 3 3 3 3 3 4 5
	5 4 3 2 2 2 3 4 5
	5 4 3 2 1 2 3 4 5
	5 4 3 2 2 2 3 4 5
	5 4 3 3 3 3 3 4 5
	5 4 4 4 4 4 4 4 5
	5 5 5 5 5 5 5 5 5

*/


void print(int num) {
	
	int num_length = (2 * num) - 1; //Kenar sayısını bulma formülü
	int x, y;

	for (int i = 1; i <= num_length; i++) //y ekseninde dolaşan döngü
	{
		for (int j = 1; j <= num_length; j++) //x ekseninde dolaşan döngü
		{
			x = num - i; //Kenara yakınlık ve uzaklığı bulmak için kullanılan değişkenler
			y = num - j;

			if (abs(x) > abs(y)) //Yakın olan konumu yazdırmaya yarayan koşul.
				printf("%d ", abs(x) +1);
			else
				printf("%d ", abs(y) +1);
		}
		printf("\n");
	}

}

int main() {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	print(number);
}