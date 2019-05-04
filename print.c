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
 /*-------------------------------------------------------------------*
 * GLOBAL VARIABLES *
 *--------------------------------------------------------------------*/
 /* Control flags */
/* Globaal constants */
/* Globaal variables */ /* Globaal structures */

/*-------------------------------------------------------------------* *
FUNCTION PROTOTYPES *
*--------------------------------------------------------------------*/

/********************************************************************* * 
MAIN
PROGRAM *
**********************************************************************/
/* end of main */
/********************************************************************* *
FUNCTIONS *
**********************************************************************/
/********************************************************************* ; F U N
C T I O N D E S C R I P T I O N
;--------------------------------------------------------------------- ;
\fn ask_product() ;
\brief kysyy tuotteet ja laittaa ne listalle ;
\param struct products product[] ;
Output: ;
Used global variables: ;
REMARKS
when using this function:
;*********************************************************************/

/********************************************************************* ; F U N
C T I O N D E S C R I P T I O N
;--------------------------------------------------------------------- ;
NAME:print_products() ; DESCRIPTION: tulostaa tuotelistan ; Input: struct
products product[] ; Output: ; Used global variables: ; REMARKS when using this
function:
;*********************************************************************/
#include "Header.h"

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
