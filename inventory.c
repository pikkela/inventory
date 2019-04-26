#include <stdio.h>


#define MAX_PRODUCTS 501



struct products
{
	int product_number;
	int amount;
	char product_name[10];
	float price;
	int barcode;
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
	int ok;
	int exit = 0;
	char trash[20];
	int prods = 0;
	int pronum = 0;

	while (exit != 1)
	{

		printf("give me products number: ");
		fgets(trash, 20, stdin);
		ok = sscanf(trash, "%d", &pronum);



		while (ok != 1)
			{
				printf("Please use numbers and give me a new number\n");
				fgets(trash, 20, stdin);
				ok = sscanf(trash, "%d", &pronum);
			}

		product[pronum].product_number = pronum;



		printf("give Amount of products: ");
		fgets(trash, 20, stdin);
		ok = sscanf(trash, "%d", &product[pronum].amount);



		while (ok != 1)
			{
				printf("Please use numbers and give me a new number\n");
				fgets(trash, 20, stdin);
				ok = sscanf(trash, "%d", &product[pronum].amount);
			}


		printf("give me products name: ");
		fgets(product[pronum].product_name, 10, stdin);

		printf("give me products price: ");
		fgets(trash, 20, stdin);
		ok = sscanf(trash, "%f", &product[pronum].price);

		while (ok != 1)
			{
				printf("Please use numbers and give me a new price\n");
				fgets(trash, 20, stdin);
				ok = sscanf(trash, "%f", &product[pronum].price);
			}

		printf("give me products barcode: ");
		fgets(trash, 20, stdin );
		ok = sscanf(trash, "%d", &product[pronum].barcode);

		while (ok != 1)
			{
				printf("Please use numbers and give me a new barcode\n");
				fgets(trash, 20, stdin);
				ok = sscanf(trash, "%d", &product[pronum].barcode);
			}

		prods++;

		printf("press 1 to exit or press enter to give a next product\n");
		fgets(trash, 20, stdin);
		sscanf(trash, "%d", &exit);


		if (prods == MAX_PRODUCTS)
			{
				exit = 1;
			}
	}
}
	void print_products(struct products product[]) 
		{

		for (int i = 1; i < MAX_PRODUCTS; i++)

			{
				if(product[i].product_number != 0)
				{
					printf("Product number #%d\n   Amount of product: %d\n   Name of product: %s\n   Price of product: %.3f\n   Barcode of product: %d\n", product[i].product_number, product[i].amount, product[i].product_name, product[i].price, product[i].barcode);
					printf("\n");
				}
			}
		}


