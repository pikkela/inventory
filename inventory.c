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
};
void print_products(struct product table[]);
void ask_product(struct products table[]);


int main(void) {

	struct products product[MAX_PRODUCTS] = {0};
	int exit = 0;
	char vali[20];
	int tuotteet = 0;
	int i = 0;

	while(exit != 1)
		{

		ask_product(&product, i);

		printf("press 1 to exit or press enter to give a next product\n");
		gets(vali);
		sscanf_s(vali, "%d", &exit);

		i++;
		tuotteet++;

		if (tuotteet == MAX_PRODUCTS)
			{
				exit = 1;
			}
		}

	for (int i = 0; i < tuotteet; i++)
			{
				print_products(&product, i);
			}
	
	
		gets();
}


void ask_product(struct products *product, int num)
{
	int i = 0;
	int ok;
	char vali[20];


	printf("give me products number: ");
	gets(vali);
	ok = sscanf_s(vali, "%d", &product[num].product_number);



	while (ok != 1)
	{
		printf("Please use numbers and give me a new number\n");
		gets(vali);
		ok = sscanf_s(vali, "%d", &product[num].product_number);
	}

	printf(" give Amount of products: ");
	gets(vali);
	ok = sscanf_s(vali, "%d", &product[num].amount);



	while (ok != 1)
	{
		printf("Please use numbers and give me a new amount\n");
		gets(vali);
		ok = sscanf_s(vali, "%d", &product[num].amount);
	}

	printf("give me products name: ");
	gets(product[num].product_name);

	printf("give me products price: ");
	gets(vali);
	ok = sscanf_s(vali, "%f", &product[num].price);

	while (ok != 1)
	{
		printf("Please use numbers and give me a new price\n");
		gets(vali);
		ok = sscanf_s(vali, "%f", &product[num].price);
	}

	printf("give me products barcode: ");
	gets(vali);
	ok = sscanf_s(vali, "%d", &product[num].barcode);

	while (ok != 1)
	{
		printf("Please use numbers and give me a new barcode\n");
		gets(vali);
		ok = sscanf_s(vali, "%f", &product[num].barcode);
	}

}
	void print_products(struct products *product, int  i) 
		{
			printf("Product number #%d\n   Name of product: %s\n   Price of product: %.3f\n   Barcode of product: %d\n", product[i].product_number, product[i].product_name, product[i].price, product[i].barcode);
		}




	

