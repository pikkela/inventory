
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
*--------------------------------------------------------------------*/ 
void print_products(struct products product[]);
void ask_product(struct products product[]);
/********************************************************************* * MAIN
PROGRAM *
**********************************************************************/
 /* end of main */
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

/********************************************************************* ; F U N
C T I O N D E S C R I P T I O N
;--------------------------------------------------------------------- ;
NAME:print_products() ; DESCRIPTION: tulostaa tuotelistan ; Input: struct
products product[] ; Output: ; Used global variables: ; REMARKS when using this
function:
;*********************************************************************/

