/***************************************************************************
 * Copyright (C) $YEAR$ by $AUTHOR$ *
 * $EMAIL$ *
 * *
 * This program is free software; you can redistribute it and/or modify *
 * it under the terms of the GNU General Public License as published by *
 * the Free Software Foundation; either version 2 of the License, or *
 * (at your option) any later version.  *
 * *
 * This program is distributed in the hope that it will be useful, *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the *
 * GNU General Public License for more details.  *
 * *
 * You should have received a copy of the GNU General Public License *
 * along with this program; if not, write to the *
 * Free Software Foundation, Inc., *
 * 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  *
 ***************************************************************************/
 /*********************************************************************
 *
 * 1.  NAME
 * $Source$
 * 2.  DESCRIPTION
 *
 * 6.  VERSIONS
 * Original:
 * $Date$ / $Author$
 *
 * Version history:
 * $Log$
 *
 **********************************************************************/
 /*-------------------------------------------------------------------*
 * HEADER FILES *
 *--------------------------------------------------------------------*/
#include <stdio.h>
 /*-------------------------------------------------------------------*
 * GLOBAL VARIABLES *
 *--------------------------------------------------------------------*/
 /* Control flags */
#define DEBUG
/* Globaal constants */
#define MAX_PRODUCTS 501
/* Globaal variables */ /* Globaal structures */
struct products
{
	int product_number;
	int amount;
	char product_name[10];
	float price;
	int barcode;
};
/*-------------------------------------------------------------------* * 
FUNCTION PROTOTYPES * 
*--------------------------------------------------------------------*/ void 
print_products(struct products product[]); void ask_product(struct products 
product[]); 
/********************************************************************* * MAIN 
PROGRAM * 
**********************************************************************/ int 
main(void) {
	struct products product[MAX_PRODUCTS] = { 0 }; /*luodaan structi taulukot*/

	ask_product(product);

	print_products(product);
} /* end of main */
/********************************************************************* * 
FUNCTIONS * 
**********************************************************************/ 
/********************************************************************* ; F U N 
C T I O N D E S C R I P T I O N 
;--------------------------------------------------------------------- ; 
NAME:ask_product() ; DESCRIPTION: kysyy tuotteet ja laittaa ne listalle ; 
Input:struct products product[] ; Output: ; Used global variables: ; REMARKS 
when using this function: 
;*********************************************************************/
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
		ok = sscanf(trash, "%d", &pronum);		/*tarkistetaan onko syöte int tyyppiä ja laitetaan se pronumin arvoksi*/



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
		fgets(trash, 20, stdin);
		ok = sscanf(trash, "%d", &product[pronum].barcode);

		while (ok != 1)
		{
			printf("Please use numbers and give me a new barcode\n");
			fgets(trash, 20, stdin);
			ok = sscanf(trash, "%d", &product[pronum].barcode);
		}

		prods++;		/*lisätään sytettyjen tuotteiden määrä puskuriin ... Mutta sehän ei olekaan pätevä enää tässä systeemissä :( */

		printf("press 1 to exit or press enter to give a next product\n");
		fgets(trash, 20, stdin);
		sscanf(trash, "%d", &exit);


		if (prods == MAX_PRODUCTS) /*jos prods on yhtä paljon kun MAX_PRODUCT poistutaan functiosta */
		{
			exit = 1;
		}
	}
}
/********************************************************************* ; F U N 
C T I O N D E S C R I P T I O N 
;--------------------------------------------------------------------- ; 
NAME:print_products() ; DESCRIPTION: tulostaa tuotelistan ; Input: struct 
products product[] ; Output: ; Used global variables: ; REMARKS when using this 
function: 
;*********************************************************************/
void print_products(struct products product[])
{
	for (int i = 1; i < MAX_PRODUCTS; i++)

	{
		if (product[i].product_number != 0)	/*tarkistetaan onko tuotenumeron kohdalle syötetty tuote ja tulostetaan jos on*/
		{
			printf("Product number #%d\n   Amount of product: %d\n   Name of product: %s\n   Price of product: %.3f\n   Barcode of product: %d\n", product[i].product_number, product[i].amount, product[i].product_name, product[i].price, product[i].barcode);
			printf("\n");
		}
	}
}
