#include <stdio.h>


#define MAX_PRODUCTS 500
//hei minää muutuin nyt



struct products
{
	int product_number;
	int amount;
	char product_name[10];
	float price;
	int barcode;
	int amount_of_products;
};

void print_products(struct products product[]);
void ask_product(struct products product[]);


int main(void) {

	struct products product[MAX_PRODUCTS] = {0};

		ask_product(product);

		print_products(product);
}


void ask_product(struct products product[])
{
	int num = 0;
	int ok;
	int exit = 0;
	char vali[20];
	int tuotteet = 0;
	int i = 0;

	while (exit != 1)
	{

		printf("give me products number: ");
		fgets(vali, 20, stdin);
		ok = sscanf(vali, "%d", &product[num].product_number);



		while (ok != 1)
			{
				printf("Please use numbers and give me a new number\n");
				fgets(vali, 20, stdin);
				ok = sscanf(vali, "%d", &product[num].product_number);
			}

		printf("give Amount of products: ");
		fgets(vali, 20, stdin);
		ok = sscanf(vali, "%d", &product[num].amount);



		while (ok != 1)
			{
				printf("Please use numbers and give me a new number\n");
				fgets(vali, 20, stdin);
				ok = sscanf(vali, "%d", &product[num].amount);
			}

		printf("give me products name: ");
		fgets(product[num].product_name, 10, stdin);

		printf("give me products price: ");
		fgets(vali, 20, stdin);
		ok = sscanf(vali, "%f", &product[num].price);

		while (ok != 1)
			{
				printf("Please use numbers and give me a new price\n");
				fgets(vali, 20, stdin);
				ok = sscanf(vali, "%f", &product[num].price);
			}

		printf("give me products barcode: ");
		fgets(vali, 20, stdin );
		ok = sscanf(vali, "%d", &product[num].barcode);

		while (ok != 1)
			{
				printf("Please use numbers and give me a new barcode\n");
				fgets(vali, 20, stdin);
				ok = sscanf(vali, "%f", &product[num].barcode);
			}

		printf("press 1 to exit or press enter to give a next product\n");
		fgets(vali, 20, stdin);
		sscanf(vali, "%d", &exit);

		num++;
		tuotteet++;
		product->amount_of_products++;

		if (tuotteet == MAX_PRODUCTS)
			{
				exit = 1;
			}
	}
}
	void print_products(struct products product[]) 
		{

		for (int i = 0; i < product->amount_of_products; i++)

			{
				printf("Product number #%d\n   Amount of product: %d\n   Name of product: %s\n   Price of product: %.3f\n   Barcode of product: %d\n", product[i].product_number, product[i].amount, product[i].product_name, product[i].price, product[i].barcode);
				printf("\n");
			}
		}


