#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
/*
:::::::::::::::::::::::::::::::::::::::::::::::::: MUHAMMAD SALMAN 16557 ::::::::::::::::::::::::::::::::::::::::::::::::::
*/
struct CARTDATA
{
	int select;
	float totalbill;
	char name[30];	
}
cart;

//:::::::::::::::::::::::::::::::::::::::::::::::::: GLOBAL VARIABLES START ::::::::::::::::::::::::::::::::::::::::::::::::::
char opt;
char Vegs[5][20] = {{"Onions  "},{"Ginger  "},{"Potatoes"},{"Tomatoes"},{"Cauliflower"}};
char Fruts[5][20] = {{"Mangoes"},{"Oranges"},{"Apricot"},{"Apples"},{"Peaches"}};
char Meat[3][20] = {{"Beef   "},{"Chicken"},{"Mutton"}};
char Bake[3][20] = {{"Rusk   "},{"Bread"},{"Pan Cake"}};
char Groc[5][20] = {{"Rice"},{"Salt"},{"Sugar"},{"Flour"},{"Pulse"}};
int veggi, voptn; float vwei[10], vcount[10];
int frut, foptn; float fwei[10], fcount[10];
int mtit, mtoptn; float mtwei[10], mtcount[10];
int bkit, bkoptn; float bkwei[10], bkcount[10];
int gc, goptn; float gcwei[10], gccount[10];
int triesleft=5; int value;
int onie=500,gine=500,pote=500,tomte=500,caufe=500;
int mngoe=500,orane=500,apre=500,appe=500,pche=500;
int chicke=500,beefe=500,mutte=500;
int ruske=500,breade=500,pancakee=500;
int ricee=500,salte=500,sugare=500,floure=500,pulsee=500;

//:::::::::::::::::::::::::::::::::::::::::::::::::: GLOBAL VARIABLES END ::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::: FUNCTIONS START ::::::::::::::::::::::::::::::::::::::::::::::::::
void admin(void);
void title(void);
void mainmenu(void);
void invalidmainmenu(void);
void GroceryCarts(void);
void invemenu(void);
void auth(void);
void oos(void);
void checkout(void);

void editveg(void);
void VegOptn(void);
void vegetableOptn(void);
void VegC_BM(void);
void vegCart(void);
void oni(void);
void gin(void);
void pot(void);
void tomt(void);
void cauf(void);

void editfrut(void);
void FruOptn(void);
void FruC_BM(void);
void fruitOptn(void);
void fruCart(void);
void mngo(void);
void oran(void);
void apri(void);
void app(void);
void pch(void);

void editmeat(void);
void MtOptn(void);
void MtC_BM(void);
void meatitemOptn(void);
void mtitCart(void);
void chick(void);
void beef(void);
void mutt(void);

void editbake(void);
void BkOptn(void);
void BkC_BM(void);
void bakeditemOptn(void);
void bkitCart(void);
void rusk(void);
void bread(void);
void pancake(void);

void editgc(void);
void GcOptn(void);
void GcC_BM(void);
void groceryOptn(void);
void gcCart(void);
void rice(void);
void salt(void);
void sugar(void);
void flour(void);
void pulse(void);

void case1(void);
void case2(void);
void case3(void);
void case4(void);
void case5(void);
void case6(void);
void casec(void);
void casee (void);

//:::::::::::::::::::::::::::::::::::::::::::::::::: FUNCTIONS END ::::::::::::::::::::::::::::::::::::::::::::::::::

int main()
{	
   title();
	printf("\n\n\n\t 1.CUSTOMER \t\t 2.ADMIN \t\t 3.INFO \t\t 4.QUIT\n");
	printf("\n\t Select Option: ");
	opt = getche();
	switch(opt)
	{
		case'1':
			system("cls");
			mainmenu();
		
		case'2':
		    system("cls");
			admin();
		
		
		case '3':
			system("cls");
			printf("\n\n The project is coded by Muhammad Salman \n This project is submitted to Miss Rida Fatima. \n This project is our semester project.\n Main purpose of making this project is to get good cGPA. ");
			printf("\n\n");
			main();
			
		case'4':
			exit(1);

		default:
			system("cls");
			invemenu();
			main();		
    }
}
void title(void)
{
	printf("\n\t\t\t **************************************");
	printf("\n\t\t\t S A L M A N - S U P E R - M A R T");
	printf("\n\t\t\t **************************************");
}
void mainmenu(void)
{
	printf("\n\t\t\t\t    === M E N U ===");
	printf("\n\t\t\t\t    ***************\n");
	printf("\n\n 1.VEGETABLES \t\t 2.FRUITS \t\t 3.MEAT ITEMS \n\n 4.BAKED ITEMS \t\t 5.GROCERY \t\t 6.VIEW CART \n\n 7.LOGOUT \t\t 8.EXIT");
	printf("\n\n Select Menu Item: ");
	opt = getche();
	
	switch(opt)
	{
		case '1':
			system("cls");
			VegOptn();
			case1();
			break;
		
		case '2':
			system("cls");
			FruOptn();
			case2();
			break;
			
		case '3':
			system("cls");
			MtOptn();
			case3();
			break;
		
		case '4':
			system("cls");
			BkOptn();
			case4();
			break;
		
		case '5':
			system("cls");
			GcOptn();
			case5();
			break;
			
		case '6':
			system("cls");
			case6();
			break;
		
		case '7':
			system("cls");
			main();
			
		case'8':
			exit(1);
		    
				
		default:	
	 		invemenu();
			mainmenu();	
			break;	
	}
}
void case6(void)
{
	printf("\n\n Y O U R   C A R T \n :::::::::::::::::\n");
	GroceryCarts();
	printf("\n\n 1.Checkout \t\t\t\t 2.Main Menu");
	printf("\n\n Select Option: ");
	scanf("%d",&cart.select);
	if(cart.select == 1)
	{
		checkout();
	}
	else
		system("cls");
		title();
		mainmenu();
}
void checkout(void)
{
	printf("\n\n Enter your name: ");
	scanf("%s",cart.name);
	for(int c=0; c<5; c++)
	{
		if(vcount[c] != 0 || fcount[c] != 0 || mtcount[c] != 0 || bkcount != 0 || gccount != 0)
		{
			cart.totalbill += vcount[c] + fcount[c] + mtcount[c] + bkcount[c] + gccount[c];
		}
	}
	if(cart.totalbill != 0)
	{
	printf("\n\n %s",cart.name);
	printf("\n\n Your Total Bill: %0.1f",cart.totalbill);
	}
	else
		system("cls");
		mainmenu();
}
void invalidmainmenu()
{
	for(int m=0; m<opt; m++)
	{
	if(opt != 1 || opt !=2 || opt != 3 || opt != 4 || opt != 5 || opt != 6)
		{
			printf("\n\n Invalid Menu Selection");
			mainmenu();
		}
	}
}
void case1(void)
{
	if(veggi == 1)
	{
		oni();	
	}
	else if(veggi == 2)
	{
		gin();	
	}
	else if(veggi == 3)
	{
		pot();	
	}
	else if(veggi == 4)
	{
		tomt();	
	}
	else if(veggi == 5)
	{
		cauf();	
	}
	else
	{
		for(int a=0; a<veggi; a++)
		{
		VegOptn();
		case1();
		}
	}
	vegetableOptn();
}
void oni(void)
{
	printf("\n Vegetable Selected: %s",Vegs[0]);
	printf("\n\n Enter Weight: ");
	float vtemp;
	scanf("%f",&vtemp);
	if (vtemp > onie)
	{
		oos();
		VegOptn();
	}
	else
	{
	onie=onie-vtemp;
	vwei[0] += vtemp;
	vcount[0] = vwei[0] *30;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",vwei[0],Vegs[0],vcount[0]);	
    }
}
void gin(void)
{
	printf("\n Vegetable Selected: %s",Vegs[1]);
	printf("\n\n Enter Weight: ");
	float vtemp;
	scanf("%f",&vtemp);
	if (vtemp > gine)
	{
		oos();
		VegOptn();
	}
	else
	{
	gine=gine-vtemp;
	vwei[1] += vtemp;
	vcount[1] = vwei[1] *40;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",vwei[1],Vegs[1],vcount[1]);	
	}
}
void pot(void)
{
	printf("\n Vegetable Selected: %s",Vegs[2]);
	printf("\n\n Enter Weight: ");
	float vtemp;
	scanf("%f",&vtemp);
	if (vtemp > pote)
	{
		oos();
		VegOptn();
	}
	else
	{
	pote=pote-vtemp;
	vwei[2] += vtemp;
	vcount[2] = vwei[2] *20;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",vwei[2],Vegs[2],vcount[2]);	
	}
}
void tomt(void)
{
	printf("\n Vegetable Selected: %s",Vegs[3]);
	printf("\n\n Enter Weight: ");
	float vtemp;
	scanf("%f",&vtemp);
	if (vtemp > tomte)
	{
		oos();
		VegOptn();
	}
	else
	{
	tomte=tomte-vtemp;
	vwei[3] += vtemp;
	vcount[3] = vwei[3] *60;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",vwei[3],Vegs[3],vcount[3]);	
	}
}
void cauf(void)
{
	printf("\n Vegetable Selected: %s",Vegs[4]);
	printf("\n\n Enter Weight: ");
	float vtemp;
	scanf("%f",&vtemp);
	if (vtemp > caufe)
	{
		oos();
		VegOptn();
	}
	else
	{
	caufe=caufe-vtemp;
	vwei[4] += vtemp;
	vcount[4] = vwei[4] *50;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",vwei[4],Vegs[4],vcount[4]);	
	}
}
void VegOptn(void)
{
	printf("\n\n V E G E T A B L E S \n *******************");
	vegCart();
	printf("\n\n 1.Onions\t\t\t\t Rs.30 per KG \n\n 2.Ginger\t\t\t\t Rs.40 per KG \n\n 3.Potatoes\t\t\t\t Rs.20 per KG \n\n 4.Tomatoes\t\t\t\t Rs.60 per KG \n\n 5.Cauliflower\t\t\t\t Rs.50 per KG ");
	printf("\n\n Select Vegetable: ");
	scanf("%d",&veggi);
}
void VegC_BM(void)
{
	printf("\n\n Press 1 to Continue Shopping Vegetables \n Press 2 to go back to Main Menu");
	printf("\n\n Option Selected: ");
	scanf("%d",&voptn);
}
void vegetableOptn(void)
{
	VegC_BM();
	if(voptn == 1)
		{
			system("cls");
			VegOptn();
			case1();	
		}
	else if(voptn == 2)
		{
			system("cls");
			title();
			printf("\n\n C A R T \n ********");
			GroceryCarts();
			printf("\n\n");
			mainmenu();
		}
	else
		{
			vegetableOptn();
		}
}
void vegCart(void)
{
	for(int i=0;i<5;i++)
	{
		if(vwei[i]!=0)
		{
			printf("\n *In Cart %0.1f KG %s \t\t Price: Rs.%0.1f",vwei[i],Vegs[i],vcount[i]);
		}
	}
}
void case2(void)
{
	if(frut == 1)
	{
		mngo();	
	}
	else if(frut == 2)
	{
		oran();
	}
	else if(frut == 3)
	{
		apri();
	}
	else if(frut == 4)
	{
		app();
	}
	else if(frut == 5)
	{
		pch();
	}
	else
	{
		for(int b=0; b<frut; b++)
		{
		FruOptn();
		case2();
		}
	}
	fruitOptn();
}
void mngo(void)
{
	printf("\n Fruit Selected: %s",Fruts[0]);
	printf("\n\n Enter Weight In KG: ");
	float ftemp;
	scanf("%f",&ftemp);
	if (ftemp > mngoe)
	{
		oos();
		FruOptn();
	}
	else
	{
	mngoe=mngoe-ftemp;
	fwei[0] += ftemp;
	fcount[0] = fwei[0] *120;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",fwei[0],Fruts[0],fcount[0]);	
	}
}
void oran(void)
{
	printf("\n Fruit Selected: %s",Fruts[1]);
	printf("\n\n Enter Weight In KG: ");
	float ftemp;
	scanf("%f",&ftemp);
	if (ftemp > orane)
	{
		oos();
		FruOptn();
	}
	else
	{
	mngoe=mngoe-ftemp;
	fwei[1] += ftemp;
	fcount[1] = fwei[1] *70;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",fwei[1],Fruts[1],fcount[1]);		
	}
}
void apri(void)
{
	printf("\n Fruit Selected: %s",Fruts[2]);
	printf("\n\n Enter Weight In KG: ");
	float ftemp;
	scanf("%f",&ftemp);
	if (ftemp > apre)
	{
		oos();
		FruOptn();
	}
	else
	{
	apre=apre-ftemp;
	fwei[2] += ftemp;
	fcount[2] = fwei[2] *80;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",fwei[2],Fruts[2],fcount[2]);	
	}
}
void app(void)
{
	printf("\n Fruit Selected: %s",Fruts[3]);
	printf("\n\n Enter Weight In KG: ");
	float ftemp;
	scanf("%f",&ftemp);
	if (ftemp > appe)
	{
		oos();
		FruOptn();
	}
	else
	{
	appe=appe-ftemp;
	fwei[3] += ftemp;
	fcount[3] = fwei[3] *140;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",fwei[3],Fruts[3],fcount[3]);	
	}
}
void pch(void)
{
	printf("\n Fruit Selected: %s",Fruts[4]);
	printf("\n\n Enter Weight In KG: ");
	float ftemp;
	scanf("%f",&ftemp);
	if (ftemp > pche)
	{
		oos();
		FruOptn();
	}
	else
	{
	pche=pche-ftemp;
	fwei[4] += ftemp;
	fcount[4] = fwei[4] *100;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",fwei[4],Fruts[4],fcount[4]);	
	}
}
void FruOptn(void)
{
	printf("\n\n F R U I T S \n ***********");
	fruCart();
	printf("\n\n 1.Mangoes\t\t\t\t Rs.120 per KG \n\n 2.Oranges\t\t\t\t Rs.70 per KG \n\n 3.Apricot\t\t\t\t Rs.80 per KG \n\n 4.Apple\t\t\t\t Rs.140 per KG \n\n 5.Peach\t\t\t\t Rs.100 per KG ");
	printf("\n\n Select Fruit: ");
	scanf("%d",&frut);
}
void fruitOptn(void)
{
	FruC_BM();	
	if(foptn == 1)
	{
		system("cls");
		FruOptn();
		case2();
	}
	else if(foptn == 2)
	{
		system("cls");
		title();
		printf("\n\n C A R T \n ********");
		GroceryCarts();
		printf("\n\n");
		mainmenu();
	}
	else
	{
		fruitOptn();
	}
}
void FruC_BM(void)
{
	printf("\n\n Press 1 to Continue Shopping Grocery \n Press 2 to go back to Main Menu");
	printf("\n\n Option Selected: ");
	scanf("%d",&foptn);
}
void fruCart(void)
{
	for(int i=0;i<5;i++)
	{
		if(fwei[i]!=0)
		{
			printf("\n *In Cart %0.1f KG %s \t\t Price: Rs.%0.1f",fwei[i],Fruts[i],fcount[i]);
		}
	}
}
void case3(void)
{
	if(mtit == 1)
	{
		beef();
	}
	else if(mtit == 2)
	{
		chick();	
	}
	else if(mtit == 3)
	{
		mutt();
	}
	else
	{
		for(int c=0; c<mtit; c++)
		{
		MtOptn();
		case3();
		}
	}
	meatitemOptn();	
}
void beef(void)
{
	printf("\n Meat Item Selected: %s ",Meat[0]);	
	printf("\n\n Enter Weight In KG: ");
	float mttemp;
	scanf("%f",&mttemp);
	if (mttemp > beefe)
	{
		oos();
		MtOptn();
	}
	else
	{
	beefe=beefe-mttemp;
	mtwei[0] += mttemp;
	mtcount[0] = mtwei[0] *600;
	printf("\n Price of %0.1f KG %s: Rs.%0.2f",mtwei[0],Meat[0],mtcount[0]);
	}
}
void chick(void)
{
	printf("\n Meat Item Selected: %s ",Meat[1]);
	printf("\n\n Enter Weight In KG: ");
	float mttemp;
	scanf("%f",&mttemp);
	if (mttemp > chicke)
	{
		oos();
		MtOptn();
	}
	else
	{
	chicke=chicke-mttemp;
	mtwei[1] += mttemp;
	mtcount[1] = mtwei[1] *350;
	printf("\n Price of %0.1f KG %s: Rs.%0.2f",mtwei[1],Meat[1],mtcount[1]);	
	}
}
void mutt(void)
{
	printf("\n Meat Item Selected: %s ",Meat[2]);	
	printf("\n\n Enter Weight In KG: ");
	float mttemp;
	scanf("%f",&mttemp);
	if (mttemp > mutte)
	{
		oos();
		MtOptn();
	}
	else
	{
	mutte=mutte-mttemp;
	mtwei[2] += mttemp;
	mtcount[2] = mtwei[2] *1100;
	printf("\n Price of %0.1f KG %s: Rs.%0.2f",mtwei[2],Meat[2],mtcount[2]);
	}
}
void MtOptn(void)
{
	printf("\n\n M E A T  I T E M S \n ******************");
	mtitCart();
	printf("\n\n 1.Beef\t\t\t\t\t Rs.600 per KG \n\n 2.Chicken\t\t\t\t Rs.350 per KG \n\n 3.Mutton\t\t\t\t Rs.1100 per KG");
	printf("\n\n Select: ");
	scanf("%d",&mtit);
}
void MtC_BM(void)
{
	printf("\n\n Press 1 to Continue Shopping Grocery \n Press 2 to go back to Main Menu");
	printf("\n\n Option Selected: ");
	scanf("%d",&mtoptn);
}
void meatitemOptn(void)
{
	MtC_BM();
	if(mtoptn == 1)
	{
		system("cls");
		MtOptn();
		case3();
	}
	else if(mtoptn == 2)
	{
		system("cls");
		title();
		printf("\n\n C A R T \n ********");
		GroceryCarts();
		printf("\n\n");
		mainmenu();
	}
	else
	{
		meatitemOptn();
	}
}
void mtitCart(void)
{
	for(int i=0;i<5;i++)
	{
		if(mtwei[i]!=0)
		{
			printf("\n *In Cart %0.1f KG %s \t\t Price: Rs.%0.2f",mtwei[i],Meat[i],mtcount[i]);
		}
	}
}
void case4(void)
{
	if(bkit == 1)
	{
		rusk();
	}
	else if(bkit == 2)
	{
		bread();	
	}
	else if(bkit == 3)
	{
		pancake();
	}
	else
	{
		for(int d=0; d<bkit; d++)
		{
		BkOptn();
		case4();
		}
	}	
	bakeditemOptn();
}
void rusk(void)
{
	printf("\n Baked Item Selected: %s ",Bake[0]);	
	printf("\n\n Enter Pack(s): ");
	float bktemp;
	scanf("%f",&bktemp);
	if (bktemp > ruske)
	{
		oos();
		BkOptn();
	}
	else
	{
	ruske=ruske-bktemp;
	bkwei[0] += bktemp;
	bkcount[0] = bkwei[0] *110;
	printf("\n Price of %0.0f Pack(s) %s: Rs.%0.1f",bkwei[0],Bake[0],bkcount[0]);
	}
}
void bread(void)
{
	printf("\n Baked Item Selected: %s ",Bake[1]);
	printf("\n\n Enter Pack(s): ");
	float bktemp;
	scanf("%f",&bktemp);
	if (bktemp > breade)
	{
		oos();
		BkOptn();
	}
	else
	{
	breade=breade-bktemp;
	bkwei[1] += bktemp;
	bkcount[1] = bkwei[1] *50;
	printf("\n Price of %0.0f Packt(s) %s: Rs.%0.1f",bkwei[1],Bake[1],bkcount[1]);	
	}
}
void pancake(void)
{
	printf("\n Baked Item Selected: %s ",Bake[2]);	
	printf("\n\n Enter Pack(s): ");
	float bktemp;
	scanf("%f",&bktemp);
	if (bktemp > pancakee)
	{
		oos();
		BkOptn();
	}
	else
	{
	pancakee=pancakee-bktemp;
	bkwei[2]+= bktemp;
	bkcount[2] = bkwei[2] *200;
	printf("\n Price of %0.0f Pack(s) %s: Rs.%0.1f",bkwei[2],Bake[2],bkcount[2]);
	}
}
void BkOptn(void)
{
	printf("\n\n B A K E D  I T E M S \n ******************");
	bkitCart();
	printf("\n\n 1.Rusk\t\t\t\t\t Rs.110 per Pack \n\n 2.Bread\t\t\t\t Rs.50 per Pack \n\n 3.Pan Cake\t\t\t\t Rs.200 per Pack");
	printf("\n\n Select: ");
	scanf("%d",&bkit);
}
void BkC_BM(void)
{
	printf("\n\n Press 1 to Continue Shopping Grocery \n Press 2 to go back to Main Menu");
	printf("\n\n Option Selected: ");
	scanf("%d",&bkoptn);
}
void bakeditemOptn(void)
{
	BkC_BM();
	if(bkoptn == 1)
	{
			system("cls");
			BkOptn();
			case4();
	}
	else if(bkoptn == 2)
	{
			system("cls");
			title();
			printf("\n\n C A R T \n ********");
			GroceryCarts();
			printf("\n\n");
			mainmenu();	
	}
	else
	{
		bakeditemOptn();
	}
}
void bkitCart(void)
{
	for(int i=0;i<5;i++)
	{
		if(bkwei[i]!=0)
		{
			printf("\n *In Cart %0.0f Pack(s) %s \t\t Price: Rs.%0.1f",bkwei[i],Bake[i],bkcount[i]);
		}
	}
}
void case5(void)
{
	if(gc == 1)
	{
		rice();	
	}
	else if(gc == 2)
	{
		salt();
	}
	else if(gc == 3)
	{
		sugar();
	}
	else if(gc == 4)
	{
		flour();
	}
	else if(gc == 5)
	{
		pulse();
	}	
	else
	{
		for(int e=0; e<gc; e++)
		{
		GcOptn();
		case5();
		}
	}
	groceryOptn();
}
void rice(void)
{
	printf("\n Item Selected: %s",Groc[0]);
	printf("\n\n Enter Weight In KG: ");
	float gctemp;
	scanf("%f",&gctemp);
	if (gctemp > ricee)
	{
		oos();
		GcOptn();
	}
	else
	{
	ricee=ricee-gctemp;
	gcwei[0] += gctemp;
	gccount[0] = gcwei[0] *90;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",gcwei[0],Groc[0],gccount[0]);	
	}
}
void salt(void)
{
	printf("\n Item Selected: %s",Groc[1]);
	printf("\n\n Enter Weight In KG: ");
	float gctemp;
	scanf("%f",&gctemp);
	if (gctemp > salte)
	{
		oos();
		GcOptn();
	}
	else
	{
	salte=salte-gctemp;
	gcwei[1] += gctemp;
	gccount[1] = gcwei[1] *20;
	printf("\n Price of %0.1f KG %s: Rs.%0.f",gcwei[1],Groc[1],gccount[1]);	
	}
}
void sugar(void)
{
	printf("\n Item Selected: %s",Groc[2]);
	printf("\n\n Enter Weight In KG: ");
	float gctemp;
	scanf("%f",&gctemp);
	if (gctemp > sugare)
	{
		oos();
		GcOptn();
	}
	else
	{
	sugare=sugare-gctemp;
	gcwei[2] += gctemp;
	gccount[2] = gcwei[2] *65;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",gcwei[2],Groc[2],gccount[2]);
	}
}
void flour(void)
{
	printf("\n Item Selected: %s",Groc[3]);
	printf("\n\n Enter Weight In KG: ");
	float gctemp;
	scanf("%f",&gctemp);
	if (gctemp > floure)
	{
		oos();
		GcOptn();
	}
	else
	{
	floure=floure-gctemp;
	gcwei[3] += gctemp;
	gccount[3] = gcwei[3] *50;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",gcwei[3],Groc[3],gccount[3]);	
	}
}
void pulse(void)
{
	printf("\n Item Selected: %s",Groc[4]);
	printf("\n\n Enter Weight In KG: ");
	float gctemp;
	scanf("%f",&gctemp);
	if (gctemp > pulsee)
	{
		oos();
		GcOptn();
	}
	else
	{
	pulsee=pulsee-gctemp;
	gcwei[4] += gctemp;
	gccount[4] = gcwei[4] *75;
	printf("\n Price of %0.1f KG %s: Rs.%0.1f",gcwei[4],Groc[4],gccount[4]);	
	}
}
void GcOptn(void)
{
	printf("\n\n G R O C E R Y \n *************");
	gcCart();
	printf("\n\n 1.Rice\t\t\t\t\t Rs.90 per KG \n\n 2.Salt\t\t\t\t\t Rs.20 per KG \n\n 3.Sugar\t\t\t\t Rs.65 per KG \n\n 4.Flour\t\t\t\t Rs.50 per KG \n\n 5.Pulse\t\t\t\t Rs.55 per KG ");
	printf("\n\n Select Menu Item: ");
	scanf("%d",&gc);
}
void GcC_BM(void)
{
	printf("\n\n Press 1 to Continue Shopping Grocery \n Press 2 to go back to Main Menu");
	printf("\n\n Option Selected: ");
	scanf("%d",&goptn);
}
void groceryOptn(void)
{
	GcC_BM();
	if(goptn == 1)
	{
			system("cls");
			GcOptn();
			case5();	
	}
	else if(goptn == 2)
	{
			system("cls");
			title();
			printf("\n\n C A R T \n ********");
			GroceryCarts();
			printf("\n\n");
			mainmenu();
	}
	else
	{
		groceryOptn();
	}
}
void gcCart(void)
{
	for(int i=0;i<5;i++)
	{
		if(gcwei[i]!=0)
		{
			printf("\n *In Cart %0.1f KG %s \t\t Price: Rs.%0.1f",gcwei[i],Groc[i],gccount[i]);
		}
	}
}
void GroceryCarts(void)
{
	vegCart();
	fruCart();
	mtitCart();
	bkitCart();	
	gcCart();
}

//:::::::::::::::::::::::::::::::::::::::::::::::::: ADMIN CODE STARTS ::::::::::::::::::::::::::::::::::::::::::::::::::
void casec(void)
{
	printf("\n");
	printf("\n\t\t\t    === C H E C K - S T O C K S - M E N U ===");
	printf("\n\t\t\t        *********************************\n\n");
	printf("\n\n 1.VEGETABLES \t\t 2.FRUITS \t\t 3.MEAT ITEMS \n\n 4.BAKED ITEMS \t\t 5.GROCERY   \t\t 6.BACK");
	printf("\n\n Select Menu Item: ");
	opt = getche();
	switch(opt)
	{
		case '1':
			system("cls");
			printf("\t\t\t\t1.Onions: %d KG \n\t\t\t\t2.Gingers: %d KG\n\t\t\t\t3.Potatoes: %d KG\n\t\t\t\t4.Tomatoes: %d KG\n\t\t\t\t5.Cauliflowers: %d KG\n\n\n",onie,gine,pote,tomte,caufe);
			casec();
			
		
		case '2':
			system("cls");
            printf("\t\t\t\t1.Mangoes: %d KG \n\t\t\t\t2.Oranges: %d KG \n\t\t\t\t3.Apricot: %d KG \n\t\t\t\t4.Apples: %d KG \n\t\t\t\t5.Peaches: %d KG\n\n\n",mngoe,orane,apre,appe,pche);
            casec();
			
			
		case '3':
			system("cls");
            printf("\t\t\t\t1.Chicken: %d KG \n\t\t\t\t2.Beef: %d KG \n\t\t\t\t3.Mutton: %d KG\n\n\n", chicke,beefe,mutte);
            casec();
		
		
		case '4':
			system("cls");
            printf("\t\t\t\t1.Rusks: %d Packs \n\t\t\t\t2.Breads: %d Packs \n\t\t\t\t3.PanCakes: %d Packs\n\n\n ",ruske,breade,pancakee);
            casec();
		
		
		case '5':
			system("cls");
            printf("\t\t\t\t1.Rice: %d KG \n\t\t\t\t2.Salt: %d KG \n\t\t\t\t3.Sugar: %d KG\n\t\t\t\t4.Flour: %d KG \n\t\t\t\t5.Pulse: %d KG\n\n\n",ricee,salte,sugare,floure,pulsee);
            casec();
		
		
		case '6':
			system("cls");
			auth();
		
		default:
			invemenu();
	 		casec();	
		
	}
}
void casee(void)
{
    title();
	printf("\n");
	printf("\n\t\t    === E D I T  - S T O C K S - M E N U ===");
	printf("\n\t\t       ********************************\n\n");
	printf("\n\n 1.VEGETABLES \t\t 2.FRUITS \t\t 3.MEAT ITEMS \n\n 4.BAKED ITEMS \t\t 5.GROCERY \t\t 6.BACK");
	printf("\n\n Select Menu Item: ");
	opt = getche();
	switch(opt)
	{
		case '1':
			system("cls");
			editveg();
				
		case '2':
			system("cls");
            editfrut();
			
		case '3':
			system("cls");
            editmeat();
		
		case '4':
			system("cls");
            editbake();
		
		case '5':
			system("cls");
            editgc();
			
		case '6':
			system("cls");
			auth();
		
		default:
            invemenu();
	 		casee();	

	}
}
void admin(void)
{
	int admpwd;
	
	title();
	printf("\n\n Enter Password : ");
	scanf("%d",&admpwd);
	if (admpwd == 16557)
	{
		printf("\n\n Hello Muhammad Salman Welcome to Stocks ");
		auth();
	}
	else if (admpwd == 3020012)
	{
		printf("\n\n Hello Course Instructor Welcome to Stocks ");
		auth();	
	}
	else
	while(triesleft>0)
	{
	system("cls");
	printf("\t\t\t\t\nWrong Password! Try again Tries left = %d Program will Exit on Tries Left 0\n",triesleft);	
		while (triesleft >5 )
		{
		exit(1);
		}
	triesleft--;		
	admin();
    }
	
}
void auth (void)
{     
      printf("\n\n\t\t\t What do You Want to Do ?");
      printf("\n\n\t\t 1.Check stocks\t\t 2.Edit Stocks\n\n\t\t 3.LogOut\t\t 4.Quit\n");
      opt = getche();
      	
	switch(opt)
	{
		case '1':
			system("cls");
			casec();
		
		case '2':
			system("cls");
			casee();
		
		case '3':
			system("cls");
			main();
		
		case'4':
		    exit(1);	

		default:
            invemenu();
	 		auth();		
				
	}
}
void editveg (void)
{
		printf("\n\n 1.Onion\t\t 2.Ginger \t\t 3.Potato \n\n 4.Tomato \t\t 5.Cauliflower \t\t6.BACK");
	    printf("\n\n Select Item: ");
	    opt = getche();
		switch(opt)
			{
				case '1':
					printf("\nINFO : You have %d Onions in Stock Press 1 to add Press 2 to remove",onie);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Onions Added Now You have %d KG Onions in Stock\n",value,onie+value);
							onie=onie+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > onie )
							{
								printf("INFO : You dont have Enough amount of Onions You can Only Remove %d KG Onions\n",onie);
								editveg();
							}
							else
							printf("\nINFO : %d KG Onions Removed Now You have %d KG Onions in Stock\n",value,onie-value);
							onie=onie-value;
							casee();
				        default:
				            invemenu();
							editveg();
							
					}
				case '2':
					printf("\nINFO : You have %d Gingers in Stock Press 1 to add Press 2 to remove",gine);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Gingers Added Now You have %d KG Gingers in Stock\n",value,gine+value);
							gine=gine+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > gine )
							{
								printf("INFO : You dont have Enough amount of Gingers You can Only Remove %d KG Gingers\n",gine);
								editveg();
							}
							else
							printf("\nINFO : %d KG Gingers Removed Now You have %d KG Gingers in Stock\n",value,gine-value);
							gine=gine-value;
							casee();
							
				        default:
				            invemenu();
							editveg();		
							
					}
				case '3':
					printf("\nINFO : You have %d KG Potatoes in Stock Press 1 to add Press 2 to remove",pote);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Potatoes Added Now You have %d KG Potatoes in Stock\n",value,pote+value);
							pote=pote+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > pote )
							{
								printf("INFO : You dont have Enough amount of Potatoes You can Only Remove %d KG Potatoes\n",pote);
								editveg();
							}
							else
							printf("\nINFO : %d KG Potatoes Removed Now You have %d KG Potatoes in Stock\n",value,pote-value);
							pote=pote-value;
							casee();
				        default:
				            invemenu();
							editveg();		
							
					}					
				case '4':
					printf("\nINFO : You have %d KG Tomatoes in Stock Press 1 to add Press 2 to remove",tomte);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Tomatoes Added Now You have %d KG Tomatoes in Stock\n",value,tomte+value);
							tomte=tomte+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > tomte )
							{
								printf("INFO : You dont have Enough amount of Tomatoes You can Only Remove %d KG Tomatoes\n",tomte);
								editveg();
							}
							else							
							printf("\nINFO : %d KG Tomatoes Removed Now You have %d KG Tomatoes in Stock\n",value,tomte-value);
							tomte=tomte-value;
							casee();
				        default:
				            invemenu();
							editveg();		
							
					}	
				case '5':
					printf("\nINFO : You have %d KG Cauliflowers in Stock Press 1 to add Press 2 to remove",caufe);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Cauliflowers Added Now You have %d KG Cauliflowers in Stock\n",value,caufe+value);
							caufe=caufe+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > caufe )
							{
								printf("INFO : You dont have Enough amount of Cauliflowers You can Only Remove %d KG CauliFlowers\n",caufe);
								editveg();
							}
							printf("\nINFO : %d KG Cauliflowers Removed Now You have %d KG Cauliflowers in Stock\n",value,caufe-value);
							caufe=caufe-value;
							casee();
				        default:
				            invemenu();
							editveg();	
				    }
				    
				case '6':
				system("cls");
				casee();
				
				default:
	                invemenu();
	                editveg(); 
			}
}
void editfrut(void)
{
		printf("\n\n 1.Mango\t\t 2.Orange \t\t 3.Apricot \n\n 4.Apple \t\t 5.Peach \t\t6.BACK ");
	    printf("\n\n Select Item: ");
	    opt = getche();
		switch(opt)
			{
				case '1':
					printf("\nINFO : You have %d Mangoes in Stock Press 1 to add Press 2 to remove",mngoe);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Mangoes Added Now You have %d KG Mangoes in Stock\n",value,mngoe+value);
							mngoe=mngoe+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > mngoe )
							{
								printf("INFO : You dont have Enough amount of Mangoes You can Only Remove %d KG Mangoes\n",mngoe);
								editfrut();
							}
							else
							printf("\nINFO : %d KG Mangoes Removed Now You have %d KG Mangoes in Stock\n",value,mngoe-value);
							mngoe=mngoe-value;
							casee();
				        default:
				            invemenu();
							editfrut();	
							
					}
				case '2':
					printf("\nINFO : You have %d Oranges in Stock Press 1 to add Press 2 to remove",orane);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Oranges Added Now You have %d KG Oranges in Stock\n",value,orane+value);
							orane=orane+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > orane )
							{
								printf("INFO : You dont have Enough amount of Oranges You can Only Remove %d KG Oranges\n",orane);
								editfrut();
							}
							else
							printf("\nINFO : %d KG Oranges Removed Now You have %d KG Oranges in Stock\n",value,orane-value);
							orane=orane-value;
							casee();
							
				        default:
				            invemenu();
							editfrut();		
							
					}
				case '3':
					printf("\nINFO : You have %d KG Apricots in Stock Press 1 to add Press 2 to remove",apre);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Apricots Added Now You have %d KG Apricots in Stock\n",value,apre+value);
							apre=apre+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > apre )
							{
								printf("INFO : You dont have Enough amount of Apricots You can Only Remove %d KG Apricots\n",apre);
								editfrut();
							}
							else
							printf("\nINFO : %d KG Apricots Removed Now You have %d KG Apricots in Stock\n",value,apre-value);
							apre=apre-value;
							casee();
				        default:
				            invemenu();
							editfrut();		
							
					}					
				case '4':
					printf("\nINFO : You have %d KG Apples in Stock Press 1 to add Press 2 to remove",appe);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Apples Added Now You have %d KG Apples in Stock\n",value,appe+value);
							appe=appe+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > appe )
							{
								printf("INFO : You dont have Enough amount of Apples You can Only Remove %d KG Apples\n",appe);
								editfrut();
							}
							else							
							printf("\nINFO : %d KG Apples Removed Now You have %d KG Apples in Stock\n",value,appe-value);
							appe=appe-value;
							casee();
				        default:
				            invemenu();
							editfrut();		
							
					}	
				case '5':
					printf("\nINFO : You have %d KG Peaches in Stock Press 1 to add Press 2 to remove",pche);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Peaches Added Now You have %d KG Peaches in Stock\n",value,pche+value);
							pche=pche+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > pche )
							{
								printf("INFO : You dont have Enough amount of Peaches You can Only Remove %d KG Peaches\n",pche);
								editfrut();
							}
							printf("\nINFO : %d KG Peaches Removed Now You have %d KG Peaches in Stock\n",value,pche-value);
							pche=pche-value;
							casee();
				        default:
				            invemenu();
							editfrut();	
				    }
				    
				case '6':
				system("cls");
				casee();
					    
				default:
	                invemenu();
	                editfrut(); 
			}
}
void editmeat(void)
{
		printf("\n\n 1.Chicken\t\t 2.Beef \t\t 3.Mutton\n\n 4.BACK");
	    printf("\n\n Select Item: ");
	    opt = getche();
		switch(opt)
			{
				case '1':
					printf("\nINFO : You have %d KG Chicken in Stock Press 1 to add Press 2 to remove",chicke);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Chicken Added Now You have %d KG Chicken in Stock\n",value,chicke+value);
							chicke=chicke+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > chicke )
							{
								printf("INFO : You dont have Enough amount of Chicken You can Only Remove %d KG Chicken\n",chicke);
								editmeat();
							}
							else
							printf("\nINFO : %d KG Chicken Removed Now You have %d KG Chicken in Stock\n",value,chicke-value);
							chicke=chicke-value;
							casee();
				        default:
				            invemenu();
							editmeat();	
							
					}
				case '2':
					printf("\nINFO : You have %d Beef in Stock Press 1 to add Press 2 to remove",beefe);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Beef  Added Now You have %d KG Beef  in Stock\n",value,beefe+value);
							beefe=beefe+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > beefe )
							{
								printf("INFO : You dont have Enough amount of Beef  You can Only Remove %d KG Beef\n ",beefe);
								editmeat();
							}
							else
							printf("\nINFO : %d KG Beef Removed Now You have %d KG Beef  in Stock\n",value,beefe-value);
							beefe=beefe-value;
							casee();
							
				        default:
				            invemenu();
							editmeat();		
							
					}
				case '3':
					printf("\nINFO : You have %d KG Mutton in Stock Press 1 to add Press 2 to remove",mutte);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Mutton Added Now You have %d KG Mutton in Stock\n",value,mutte+value);
							mutte=mutte+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > mutte )
							{
								printf("INFO : You dont have Enough amount of Mutton You can Only Remove %d KG Mutton\n",mutte);
								editmeat();
							}
							else
							printf("\nINFO : %d KG Mutton Removed Now You have %d KG Mutton in Stock\n",value,mutte-value);
							mutte=mutte-value;
							casee();
				        default:
				            invemenu();
							editmeat();		
							
					}	
									
				case '4':
					system("cls");
				    casee();
					
				default:
	                invemenu();
	                editmeat(); 
			}	
}
void editbake(void)
{
		printf("\n\n 1.Rusk\t\t 2.Bread \t\t 3.Pancake\n\n 4.BACK ");
	    printf("\n\n Select Item: ");
	    opt = getche();
		switch(opt)
			{
				case '1':
					printf("\nINFO : You have %d Packs of Rusk in Stock Press 1 to add Press 2 to remove",ruske);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d Packs of Rusk Added Now You have %d Packs of Rusk in Stock\n",value,ruske+value);
							ruske=ruske+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > ruske )
							{
								printf("INFO : You dont have Enough Packs of Rusk You can Only Remove %d Packs of Rusk\n",ruske);
								editbake();
							}
							else
							printf("\nINFO : %d Packs of Rusk Removed Now You have %d Packs of Rusk in Stock\n",value,ruske-value);
							ruske=ruske-value;
							casee();
				        default:
				            invemenu();
							editbake();	
							
					}
				case '2':
					printf("\nINFO : You have %d Packs of Bread in Stock Press 1 to add Press 2 to remove",breade);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d Packs of Bread Added Now You have %d Packs of Bread in Stock\n",value,breade+value);
							breade=breade+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > breade )
							{
								printf("INFO : You dont have Enough Packs of Bread You can Only Remove %d Packs of Bread\n",breade);
								editbake();
							}
							else
							printf("\nINFO : %d Packs of Bread Removed Now You have %d Packs of Bread in Stock\n",value,breade-value);
							breade=breade-value;
							casee();
							
				        default:
				            invemenu();
							editbake();		
							
					}
				case '3':
					printf("\nINFO : You have %d Packs of Pancake in Stock Press 1 to add Press 2 to remove",pancakee);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d Packs of Pancake Added Now You have %d Packs of Pancake in Stock\n",value,pancakee+value);
							pancakee=pancakee+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > pancakee )
							{
								printf("INFO : You dont have Enough Packs of Pancake You can Only Remove %d Packs of Pancake\n",pancakee);
								editbake();
							}
							else
							printf("\nINFO : %d Packs of Pancake Removed Now You have %d Packs of Pancake in Stock\n",value,pancakee-value);
							pancakee=pancakee-value;
							casee();
				        default:
				            invemenu();
							editbake();	
							
					}
					
				case '4':
					system("cls");
				    casee();
											
				default:
	                invemenu();
	                editbake(); 
			}	
}
void editgc(void)
{
		printf("\n\n 1.Rice\t\t 2.Salt \t\t 3.Sugar  \n\n 4.Flour \t 5.Pulse \t\t6.BACK");
	    printf("\n\n Select Item: ");
	    opt = getche();
		switch(opt)
			{
				case '1':
					printf("\nINFO : You have %d Rice in Stock Press 1 to add Press 2 to remove",ricee);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Rice Added Now You have %d KG Rice in Stock\n",value,ricee+value);
							ricee=ricee+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > ricee )
							{
								printf("INFO : You dont have Enough amount of Rice You can Only Remove %d KG Rice\n",ricee);
								editgc();
							}
							else
							printf("\nINFO : %d KG Rice Removed Now You have %d KG Rice in Stock\n",value,ricee-value);
							ricee=ricee-value;
							casee();
				        default:
				            invemenu();
							editgc();
							
					}
				case '2':
					printf("\nINFO : You have %d Salt in Stock Press 1 to add Press 2 to remove",salte);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Salt Added Now You have %d KG Salt in Stock\n",value,salte+value);
							salte=salte+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > salte )
							{
								printf("INFO : You dont have Enough amount of Salt You can Only Remove %d KG Salt\n",salte);
								editgc();
							}
							else
							printf("\nINFO : %d KG Salt Removed Now You have %d KG Salt in Stock\n",value,salte-value);
							salte=salte-value;
							casee();
							
				        default:
				            invemenu();
							editgc();		
							
					}
				case '3':
					printf("\nINFO : You have %d KG Sugar in Stock Press 1 to add Press 2 to remove",sugare);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Sugar Added Now You have %d KG Sugar in Stock\n",value,sugare+value);
							sugare=sugare+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > sugare )
							{
								printf("INFO : You dont have Enough amount of Sugar You can Only Remove %d KG Sugar\n",sugare);
								editgc();
							}
							else
							printf("\nINFO : %d KG Sugar Removed Now You have %d KG Sugar in Stock\n",value,sugare-value);
							sugare=sugare-value;
							casee();
				        default:
				            invemenu();
							editgc();		
							
					}					
				case '4':
					printf("\nINFO : You have %d KG Flour in Stock Press 1 to add Press 2 to remove",floure);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Flour Added Now You have %d KG Flour in Stock\n",value,floure+value);
							floure=floure+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > floure )
							{
								printf("INFO : You dont have Enough amount of Flour You can Only Remove %d KG Flour\n",floure);
								editgc();
							}
							else							
							printf("\nINFO : %d KG Flour Removed Now You have %d KG Flour in Stock\n",value,floure-value);
							floure=floure-value;
							casee();
						default:
							invemenu();
							editgc();	
							
					}	
				case '5':
					printf("\nINFO : You have %d KG Pulse in Stock Press 1 to add Press 2 to remove",pulsee);
					opt = getche();
					switch(opt)
					{
						case '1':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							printf("\nINFO : %d KG Pulse Added Now You have %d KG Pulse in Stock\n",value,pulsee+value);
							pulsee=pulsee+value;
							casee();
						case '2':
							printf("\nEnter Value:");
							scanf("%d",&value);
							system("cls");
							if (value > pulsee )
							{
								printf("INFO : You dont have Enough amount of Pulse You can Only Remove %d KG Pulse\n",pulsee);
								editgc();
							}
							printf("\nINFO : %d KG Pulse Removed Now You have %d KG Pulse in Stock\n",value,pulsee-value);
							pulsee=pulsee-value;
							casee();
				        default:
				            invemenu();
							editgc();	
				    }
				case '6':
					system("cls");
				    casee();
					    
				default:
	                invemenu();
	                editgc();    
			}	
}
void invemenu(void)
{
	system("cls");
	printf("\t\t\t*********************************");
	printf("\n\t\t\tALERT!!!!! Invalid Menu Selection");
	printf("\n\t\t\t*********************************");
}
void oos (void)
{
	system("cls");
	printf("\n\n OUT OF STOCKS!!!");
}
