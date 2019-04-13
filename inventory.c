#include <stdio.h>

//hei minää muutuin nyt
struct products
{
	char product_name[20];
	int price;
	int barcode;
};

void ask_product(struct product table[]);
void print_products(struct product table[]);


int main(void) {

	struct products product[100] = {0};


	void ask_product(struct product table[]);
	void print_products(struct product table[]);

	getche();
}
void ask_product(struct product table[]) {

	for (int i = 0; i < 3; i++) {
		int product;
		table[1] = product;
		printf("give me product");
		scan_s("%", &product);
		
	}
}
