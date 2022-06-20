#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

COORD c={0,0};
void setxy(int x,int y)
{
	c.X = x;c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void printHz()
{
	int i;	
	for(i=0;i<51;i++)
	{
		printf("%c",223);
	}
}

void printV()
{
	int i;
	for(i=0;i<11;i++)
	{
	setxy(50,3+i);
	printf("%c",219);
	}

	for(i=0;i<11;i++){
	
		setxy(100,3+i);
		printf("%c",219);
	}
	}	
	
	void help(){
		
		printf("maulik");
	}
int main()
{
int choice,i,j,point,h,upper=15,lower=1,array[15],ARRAY[15];

char name[20],ch1,ch2;

for(i=0;i<=15;i++)
{
	array[i]=0;
}
for(i=0;i<=15;i++)
{
	ARRAY[i]=0;
}

mainmenu:
setxy(50,3);
printHz();
setxy(65,5);
system("color 09");
printf("Welcome To Quiz Game");
setxy(50,7);
printHz();
printV();
setxy(50,14);
printHz();

setxy(52,8);
printf("> [1] start the game");
setxy(52,9);
printf("> [2] view the highest score  ");
setxy(52,10);
printf("> [3] reset score");
setxy(52,11);
printf("> [4] for help");
setxy(52,12);
printf("> [5] for Quit");
setxy(50,16);
system("color 09");
printf("Enter Your Choice---->");
scanf("%d",&choice);

switch(choice)
{
	case 1:
	system("cls");
	system("color 0C");	
	setxy(62,10);
	printf("\n\n\n\t\t\t\tPlease Wait Loading");
	for(i=1;i<=3;i++)
	{
	printf("%c",46);
	sleep(1);
	}
	if(i>3)
	{
	system("cls");
	goto round1;
	}	
	break;
	case 4:
	case 5:
		printf("Are you sure to want to exit? Press Y for Yes and N for No");
		choice=toupper(getch());
		
		
		system("cls");
		
		help();
		printf("Press Any Key To Continue....");
		ch1=getch();
		ch2=0;
		goto mainmenu;
	
	default:
		system("color 0C");
		setxy(50,22);
		printf("\aInvalid Choice");
		setxy(50,24);
		printf("\aPlease select Valid Choice");
		sleep(3);
		goto mainmenu;
		break;
}

round1:	
	setxy(52,4);
	system("color 0A");
	printf("Enter your Name---->");
	scanf("%s",&name);
	system("cls");
	setxy(52,4);
	system("color 0A");
	printf("Welcome to the Quiz Game... %s",name);
	sleep(2);
	system("cls");
	
void printHz()
{
	int i;	
	for(i=0;i<51;i++)
	{
		printf("%c",223);
	}
}

void printV()
{
	int i;
	for(i=0;i<11;i++)
	{
	setxy(50,3+i);
	printf("%c",219);
	}

	for(i=0;i<11;i++)
	{
		setxy(100,3+i);
		printf("%c",219);
	}
}
	
setxy(50,3);
printHz();
setxy(70,5);
system("color 09");
printf("Subject");
setxy(50,7);
printHz();
printV();
setxy(50,14);
printHz();	

	setxy(70,8);
	system("color 09");
	printf("[1]Sports");
	setxy(70,10);
	printf("[2]Politics");
	setxy(70,12);
	printf("[3]Films");
	setxy(52,18);
	printf("Enter Your Subject---->");
	scanf("%d",&choice);
	
	switch(choice)
{	
	case 1:
	for(i=1;i<=7;i++)
	{
		random:
		srand(time(0));
		h=((rand()%(upper-lower)))+lower;
		system("cls");
		system("color 0F");
		if(h==1 && array[0]==0)
		{
			printf("Who among the following cricketer has been chosen for ICC ODI cricketer of the year for 2019?\n\n\t\t");
			printf("\n\nA.Virat Kohli\t\tB.Ben Stokes\n\nC.Rohit Sharma\t\tD.Kane Williomson\n");
			array[0]=array[0]+1;
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}
			else
			{
				printf("\t\t\n\nInCorrect");
				printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==2 && array[1]==0)
		{
			printf("Of which country is bull fighting the national game?\n\n\t\t");
			printf("\n\nA.Poland\t\tB.Hungary\n\nC.Portugal\t\tD.Spain\n");
			array[1]=array[1]+1;
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
		else if(h==3 && array[2]==0)
		{
			printf("\nWhich of the following is correctly matched?\n\n\t\t");
			printf("\n\nA.Tennis : Smass\t\tB.Chess : Checkmate\n\nC.Cricket : Bogey\t\tD.Tennis : Bully");
			array[2]=array[2]+1;			
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==4 && array[3]==0)
		{
			printf("\nHow many gold medals did P.T.Usha win in the 1986 Seoul Asian Games? \n\n\t\t");
			printf("\n\nA.1\t\tB.2\n\nC.3\t\tD.4");
			array[3]=array[3]+1;			
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
			else if(h==5 && array[4]==0)
		{
			printf("\nIn which sports is the participant called pugilist?\n\n\t\t");
			printf("\n\nA. Sprinter\t\tB.Boxing\n\nC.Wrestling\t\tD.Javelin throw");
			array[4]=array[4]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==6&& array[5]==0)
		{
			printf("\nThe maximum number of Gold medals in Olympics 2008 was won by ? \n\n\t\t");
			printf("\n\nA.China\t\t\tB.France\n\nC.U.S.A.\t\tD.S.korea");
			array[5]=array[5]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==7 && array[6]==0)
		{
			printf("\n2010 Commonwealth Games held in ?\n\n\t\t");
			printf("\n\nA.Canada\t\tB.India\n\nC.Britian\t\tD.Malaysia");
			array[6]=array[6]+1;
			if(toupper(getch())=='B')
			{
			printf("\t\t\n\nCorrect!!");
			point++;
			}
			else
			{
			printf("\t\t\n\nIncorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		}
		else if(h==8&& array[7]==0)
		{
			printf(" Aga Khan Cup is awarded to ? \n\n\t\t");
			printf("\n\nA.International Hockey\t\t\t\tB.Asian Hockey\n\nC.National Hockey in India\t\t\tD. None of these\n");
			array[7]=array[7]+1;	
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}
			else
			{
			printf("\t\t\n\nIncorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==9 && array[8]==0)
		{
			printf("\nKrishna Poonia is associated with ? \n\n\t\t");
			printf("\n\nA.Football\t\tB.Hockey\n\nC.Chess\t\t\tD.Athletics");
			array[8]=array[8]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==10 && array[9]==0)
		{
			printf("\nRanji Trophy is associated with ? \n\n\t\t");
			printf("\n\nA.Football\t\tB.Hockey\n\nC.Cricket\t\tD.Tennis");
			array[9]=array[9]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==11 && array[10]==0)
		{
			printf("\nThe game of hockey originated in ?\n\n\t\t");
			printf("\n\nA.France\t\tB.Canada\n\nC.England\t\tD.Germany");
			array[10]=array[10]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
			else if(h==12 && array[11]==0)
		{
			printf("\nThe head quarters of International Olympic Committee is at ?\n\n\t\t");
			printf("\n\nA.Los Angles\t\tB.NewYork\n\nC.Moscow\t\tD.Lausanne(Switzerland)");
			array[11]=array[11]+1;			
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
			else if(h==13 && array[12]==0)
		{
			printf("\n Santhosh Trophy is associated with?\n\n\t\t");
			printf("\n\nA.Cricket\t\tB.Hockey\n\nC.Football\t\tD.Weight–lifting");
			array[12]=array[12]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
			else if(h==14 && array[13]==0)
		{
			printf("\nWho has won the 2016 Laureus World Sportsman of the Year Award?\n\n\t\t");
			printf("\n\nA.Lewis Hamilton\t\tB.Usain Bolt\n\nC.Novak Djokovic\t\tD.Lionel Messi");
			array[13]=array[13];			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
			else if(h==15 && array[14]==0)
		{
			printf("\nWhich is the national sport of Canada?\n\n\t\t");
			printf("\n\nA.Lacrosse/Ice hockey\t\tB.Cricket\n\nC.Field hockey\t\tD.Volleyball");
			array[14]=array[14]+1;			
			if(toupper(getch())=='A')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:A");
			}
			sleep(1);
			system("cls");
		}
			else
			{
				goto random;
			}
}
			if(point>=4)
			{	
			setxy(56,6);
			printf("Your point Is--->%d",point);	
			setxy(56,10);
			printf("Congratulation You Are Eligible For Round 2");
			sleep(3);
			system("cls");
			goto round2;
			break;
			}
	case 2:
	for(i=1;i<=7;i++)
		{
		random1:
		srand(time(0));
		h=((rand()%(upper-lower)))+lower;
		system("cls");
		if(h==1 && array[0]==0)
		{	printf("The members of the Rajya Sabha are elected by?\n\n\t\t");
			printf("\n\nA.The people \t\t\t\t\t\tB.Lok Sabha\n\nC.elected members of the legislative assembly\t\tD.elected members of the legislative council\n");
			array[0]=array[0]+1;
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect");
				point++;
			}
			else
				{
					printf("\t\t\n\nInCorrect!!");
					printf("\t\t\n\nCorrect Answer Is:C");
				}
			sleep(1);
			system("cls");
		}
		else if(h==2 && array[1]==0)
		{
			printf("The power to decide an election petition is vested in the?\n\n\t\t");
			printf("\n\nA.Parliament\t\t\tB.Supreme court\n\nC.Election Commission\t\tD.High courts\n");
			array[1]=array[1]+1;
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
		else if(h==3 && array[2]==0)
		{
			printf("\nThe present Lok Sabha is the?\n\n\t\t");
			printf("\n\nA.14th\t\tB.15th\n\nC.16th\t\tD.17th");
			array[2]=array[2]+1;			
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
		else if(h==4 && array[3]==0)
		{
			printf("\nminimum age of the voter in India is? \n\n\t\t");
			printf("\n\nA.21\t\tB.22\n\nC.18\t\tD.25");
			array[3]=array[3]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==5 && array[4]==0)
		{
			printf("\nThe members of the Rajya Sabha are elected for a term?\n\n\t\t");
			printf("\n\nA.Of four year\t\t\t\t\t\t\t\tB.of six years\n\nC.determined by the state legislative assembly of a state\t\tD.None of the above");
			array[4]=array[4]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		}
		else if(h==6&& array[5]==0)
		{
			printf("\nThe office of the president can fall vacant due to? \n\n\t\t");
			printf("\n\nA.resigntion\t\t\tB.death\n\nC.removal\t\t\tD.All of above");
			array[5]=array[5]+1;			
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
		else if(h==7 && array[6]==0)
		{
			printf("\nThe only person who has defeated indira gandhi in lok sabha elction-1977?\n\n\t\t");
			printf("\n\na.Morarji Desai\t\t\tb.Ram Manohar\n\nc.Lal Bahadur shastri\t\td.Raj Narin");
			array[6]=array[6]+1;
			if(toupper(getch())=='D')
			{
			printf("\t\t\n\nCorrect!!");
			point++;
			}
			else
			{
			printf("\t\t\n\nIncorrect");
			printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
		else if(h==8 && array[7]==0)
		{
			printf("\nWho is the longest serving chief minister in India?\n\n\t\t");
			printf("\n\na.Pawan Kumar Chamling\t\tb.M Karunanidhi\n\nc.Jyoti Basu\t\t\td.Manik Sarkar");
			array[7]=array[7]+1;	
			if(toupper(getch())=='A')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}
			else
			{
			printf("\t\t\n\nIncorrect");
			printf("\t\t\n\nCorrect Answer Is:A");
			}
			sleep(1);
			system("cls");
		}
		else if(h==9 && array[8]==0)
		{
			printf("\nMinimum age required to contest for lok sabha election?\n\n\t\t");
			printf("\n\na.28\t\tb.25\n\nc.18\t\td.35");
			array[8]=array[8]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		}
		else if(h==10 && array[9]==0)
		{
			printf("\nConstitution of India was adopted by constituent assembly on?\n\n\t\t");
			printf("\n\na.25 January 1948\t\tb.25 January 1949\n\nc.26 January 1950\t\td.26 November 1949");
			array[9]=array[9]+1;			
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
		else if(h==11 && array[10]==0)
		{
			printf("\nUnion budget is always presented first in___?\n\n\t\t");
			printf("\n\na.The Rajya Sabha\t\tb.The Lok Sabha\n\nc.Joint session of the parliament\t\td.Meeting of the union cabinet");
			array[10]=array[10]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		}
			else if(h==12 && array[11]==0)
		{
			printf("\nArticle 1 of the constitution declares India as?\n\n\t\t");
			printf("\n\na.Quasi Fedaral state\t\tb.Fedaral state\n\nc.Unitary state\t\t\td.Union of States");
			array[11]=array[11]+1;			
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
			else if(h==13 && array[12]==0)
		{
			printf("\nThe president can dismiss a member of the council of ministers?\n\n\t\t");
			printf("\n\nA.ON his own\t\t\t\t\tB.on the recommendation of the prime ministers\n\nC.only under emergency conditions\t\tD.with the consent of the speaker");
			array[12]=array[12]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		}
			else if(h==13 && array[12]==0)
		{
			printf("\nThe office of the prime minister of India?\n\n\t\t");
			printf("\n\nA.has a constitutional basis\t\tB.has a statutory basis\n\nC.has a conventional basis\t\tD.None of the above");
			array[12]=array[12]+1;			
			if(toupper(getch())=='A')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:A");
			}
			sleep(1);
			system("cls");
		}
			else if(h==14 && array[13]==0)
		{
			printf("\nThe members of Lok Sabha are?\n\n\t\t");
			printf("\n\nA.directly elected by the people\t\tB.Indirectly elected\n\nC.nominated\t\t\t\t\tD.partly elected and partly nominated");
			array[13]=array[13]+1;			
			if(toupper(getch())=='A')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:A");
			}
			sleep(1);
			system("cls");
		}
			else
			{
			goto random1;
			}
}
			if(point>=4)
			{		
			setxy(56,6);
			printf("Your point Is--->%d",point);	
			setxy(56,10);
			printf("Congratulation You Are Eligible For Round 2");
			sleep(3);
			system("cls");
			goto round2;
			break;
			}
	case 3:
		for(i=1;i<=7;i++)
		{
		random2:
		srand(time(0));
		h=((rand()%(upper-lower)))+lower;
		system("cls");
		if(h==1 && array[0]==0)
		{
			printf("In India first film was screened at which place?\n\n\t\t");
			printf("\n\nA.Taj Hotel, Mumbai\t\tB.Oberoi Hotel, Pune\n\nC.Film City, Mumbai\t\tD.Watson Hotel, Mumbai\n");
			array[0]=array[0]+1;
			if(toupper(getch())=='D')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}
			else
			{
				printf("\t\t\n\nInCorrect");
				printf("\t\t\n\nCorrect Answer Is:D");
			}
			sleep(1);
			system("cls");
		}
		else if(h==2 && array[1]==0)
		{
			printf("What was the name of first Marathi film produced in India?\n\n\t\t");
			printf("\n\nA.Vittal\t\tB.Shwans\n\nC.Vilasi Ishvar\t\tD.Natrang\n");
			array[1]=array[1]+1;
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==3 && array[2]==0)
		{
			printf("\nFirst Punjabi film produced in India:?\n\n\t\t");
			printf("\n\nA.jinhen mera dil lutiyaan\t\tB.Sheela\n\nC.Dharti\t\t\t\tD.Dil apna Punjabi");
			array[2]=array[2]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		}
		else if(h==4 && array[3]==0)
		{
			printf("\nFirst English film produced in India:? \n\n\t\t");
			printf("\n\nA.A Passage of India\t\tB.English\n\nC.Noorjahan\t\t\tD.Heaven on Earth");
			array[3]=array[3]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
			else if(h==5 && array[4]==0)
		{
			printf("\n What was the name of first Cinema hall of India?\n\n\t\t");
			printf("\n\nA.Capital Cinema Hall, Mumbai\t\tB.Edward Theater, Mumbai\n\nC.Elphinstone Picture Palace, Calcutta\t\tD.Odene Cinema Hall, Delhi");
			array[4]=array[4]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==6&& array[5]==0)
		{
			printf("\nFirst movie which celebrate Golden Jubilee in India ? \n\n\t\t");
			printf("\n\nA.Kapal Kundala, Bengali\t\t\tB.Tukaram, Marathi\n\nC.Prem Sagar, Hindi\t\t\t\tD.Balan, Malayalam");
			array[5]=array[5]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		}
		else if(h==7 && array[6]==0)
		{
			printf("\n First foreigner who awarded with Filmfare Award ?\n\n\t\t");
			printf("\n\nA.Nazia Hassan\t\tB.Noorjahan\n\nC.Reshma\t\tD.Salma Aga");
			array[6]=array[6]+1;
			if(toupper(getch())=='A')
			{
			printf("\t\t\n\nCorrect!!");
			point++;
			}
			else
			{
			printf("\t\t\n\nIncorrect");
			printf("\t\t\n\nCorrect Answer Is:A");
			}
			sleep(1);
			system("cls");
		}
		else if(h==8 && array[7]==0)
		{
			printf("  Name the popular folk song of Uttar Pradesh ? \n\n\t\t");
			printf("\n\nA.Maang\t\t\t\tB.Kajri\n\nC.Baul\t\t\t\tD.Boli\n");
			array[7]=array[7]+1;	
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}
			else
			{
			printf("\t\t\n\nIncorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		}
		else if(h==9 && array[8]==0)
		{
			printf("\nFirst indian movie submitted for oscar?\n\n\t\t");
			printf("\n\nA.Newton\t\tB.The Guide\n\nC.Mother India\t\tD.Amrapali\n");
			array[8]=array[8]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==10 && array[9]==0)
		{
		printf("\nFilmfare awards started from the year?\n\n\t\t");
		printf("\n\nA.1954\t\tB.1964\n\nC.1952\t\tD.1960\n");
			array[9]=array[9]+1;			
			if(toupper(getch())=='A')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:A");
			}
			sleep(1);
			system("cls");
		}
		else if(h==11 && array[10]==0)
		{
			printf("\nFilms and Television Institute of India located at?\n\n\t\t");
			printf("\n\nA.Mumbai\t\tB.Pune\n\nC.Kolkata\t\tD.Delhi\n");
			array[10]=array[10]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
		    }
		else if(h==12 && array[11]==0)
	    {
			printf("\nFirst 3D animated film from india is?\n\n\t\t");
			printf("\n\nA.Roadside Romeo\t\tB.Mr.India\n\nC.Hanuman\t\t\tD.Bal Ganesh\n");
			array[11]=array[11]+1;			
			if(toupper(getch())=='A')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:A");
			}
			sleep(1);
			system("cls");
	    }
		else if(h==13 && array[12]==0)
	    {
            printf("\nWho is known as the father of indian cinema?\n\n\t\t");
			printf("\n\nA.Amitabh Bachchan\t\tB.Dada Saheb Phalke\n\nC.Shah Rukh Khan(SRK)\t\tD.Satyajit Rey\n");
			array[12]=array[12]+1;			
			if(toupper(getch())=='B')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:B");
			}
			sleep(1);
			system("cls");
	   	}
		else if(h==14 && array[13]==0)
		{
			printf("\nWhich film wins the best film award in Oscar,2013?\n\n\t\t");
			printf("\n\nA.Life of pi\t\tB.Lincoln\n\nC.Argo\t\t\tD.Brave\n");
			array[13]=array[13]+1;			
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:C");
			}
			sleep(1);
			system("cls");
		}
		else if(h==15 && array[15]==0)
		{
			printf("\nWhich is the national sport of Canada?\n\n\t\t");
			printf("\n\nA.Lacrosse/Ice hockey\t\tB.Cricket\n\nC.Field hockey\t\tD.Volleyball");
			array[15]=array[15]+1;			
			if(toupper(getch())=='A')
			{
				printf("\t\t\n\nCorrect!!");
				point++;
			}		
			else
			{
			printf("\t\t\n\nInCorrect");
			printf("\t\t\n\nCorrect Answer Is:A");
			}
			sleep(1);
			system("cls");
		}
			
			else
			{
			goto random2;
			}
}
		if(point>=4)
		{
		setxy(56,6);
		printf("Your point Is--->%d",point);	
		setxy(56,10);
		printf("Congratulation You Are Eligible For Round 2");
		sleep(3);
		system("cls");
		goto round2;
		break;
		}

round2:
	
		setxy(56,4);
		system("color 0D");
		printf("Welcome to the round 2");
		setxy(52,14);
		printf("\n\n\n\tDo you want to continue playing round2? \n\n\n\tpress'Y'for yes and Press'N' for no\n\n");
		choice=toupper(getch());
		
		if(choice=='N')
		{
			system("cls");
			goto mainmenu;
		}
		
		for(i=1;i<=10;i++)
	{	
		random3:
		srand(time(0));
		h=((rand()%(upper-lower)))+lower;
		system("cls");
		
		if(h==1 && ARRAY[0]==0)
		{
			printf("The 2017 Indian Premier League (IPL 2017) first match on 5 April, 2017 was held in ?\n\n\t\t");
			printf("\n\nA.Banglore\t\tB.Mumbai\n\nC.Hyderabad\t\tD.Kolkata\n");
			ARRAY[0]=ARRAY[0]+1;
			if(toupper(getch())=='C')
			{
				printf("\t\t\n\ncorrect!!");
				point++;
			}
			else
			{
				printf("\t\t\n\nInCorrect");
				printf("\t\t\n\norrect Answer Is:C");
			}
			sleep(2);
			system("cls");
		}
			else if(h==2 && ARRAY[1]==0)
		{
				printf("In what year was Rajiv Gandhi assassinated?\n\n\t\t");
				printf("\n\nA.1990\t\tB.1993\n\nC.1992\t\tD.1991\n");
				ARRAY[1]=ARRAY[1]+1;	
				if(toupper(getch())=='D')
				{
					printf("\t\t\n\ncorrect!!");
					point++;
				}
				else
				{
					printf("\t\t\n\nInCorrect");
					printf("\t\t\n\nCorrect Answer Is:D");
				}
				sleep(2);
				system("cls");
		}
				else if(h==3 && ARRAY[2]==0)
		{
				printf("Union Budget of India is presented by whom and in which house/ houses of the Parliament?\n\n\t\t");
				printf("\n\nA.Finance Minister of India; Lok Sabha\t\t\t\tB.Prime Minister of India; Rajya Sabha\n\nC.Cabinet Secretary; Both Lok Sabha and Rajya Sabha\t\tD.President of India; in joint session of Parliamnet\n");
				ARRAY[2]=ARRAY[2]+1;
				if(toupper(getch())=='A')
				{
					printf("\t\t\n\nCorrect!!");
					point++;
				}
				else
				{
					printf("\t\t\n\nIncorrect");
					printf("\t\t\n\nCorrect Answer Is:A");
				}
				sleep(2);
				system("cls");
		}
				else if(h==4 && ARRAY[3]==0)
		{
				printf("Hitler party which came into power in 1933 is known as\n\n\t\t");
				printf("\n\nA.Labour Party\t\t\tB.Nazi Party\n\nC.Ku-Klux-Klan\t\t\tD.Democratic Party");
				ARRAY[3]=ARRAY[3]+1;	
				if(toupper(getch())=='B')
				{				
					printf("\t\t\n\nCorrect!!");
					point++;
				}
				else					{
					printf("\t\t\n\nIncorrect");
					printf("\t\t\n\nCorrect Answer Is:B");
				}
				sleep(2);
				system("cls");
		}
		else if(h==5 && ARRAY[4]==0)
		{
				printf("First human heart transplant operation conducted by Dr. Christiaan Barnard on Louis Washkansky, was conducted in?\n\n\t\t");
				printf("\n\nA.1968\t\tB.1967\n\nC.1972\t\tD.1975\n");
				ARRAY[4]=ARRAY[4]+1;
				if(toupper(getch())=='B')
				{		printf("\t\t\n\nCorrect!!");
						point++;
				}
				else
				{
					printf("\t\t\n\nIncorrect");
					printf("\t\t\n\nCorrect Answer Is:B");
				}				
				sleep(2);
				system("cls");
		}
			else if(h==6 && ARRAY[5]==0)
		{
					printf("The World Largest desert is ?\n\n\t\t");
					printf("\n\nA.Thar\t\t\tB.Sahara\n\nC.Kalhari\t\tD.Sonoran\n");
					ARRAY[5]=ARRAY[5]+1;
					if(toupper(getch())=='B')
					{
						printf("\t\t\n\nCorrect!!");
						point++;
					}
					else
					{
						printf("\t\t\n\nIncorrect");
						printf("\t\t\n\nCorrect Answer Is:B");
					}
					sleep(2);
					system("cls");
		}
			else if(h==7 && ARRAY[6]==0)
		{
				printf("The 2006 World Cup Football Tournament held in?\n\n\t\t");
				printf("\n\nA.France\t\tB.Germany\n\nC.Spain\t\t\tD.Brazil\n");
				ARRAY[6]=ARRAY[6]+1;	
				if(toupper(getch())=='B')
				{
					printf("\t\t\n\nCorrect!!");
					point++;
				}
				else
				{
					printf("\t\t\n\nIncorrect");
					printf("\t\t\n\nCorrect Answer Is:B");
				}
				sleep(2);
				system("cls");
		}
			else if(h==8 && ARRAY[7]==0)
		{
				printf("Satellite launching station is located at?\n\n\t\t");
				printf("\n\nA.Solapur (Maharashtra)\t\t\tB.Salem (Tamilnadu)\n\nC.Sriharikotta (Andhra Pradesh)\t\tD.Warangal (Andhra Pradesh)\n");
				ARRAY[7]=ARRAY[7]+1;	
				if(toupper(getch())=='C')
				{
					printf("\t\t\n\nCorrect!!");
					point++;
				}
				else
				{
				printf("\t\t\n\nIncorrect");
				printf("\t\t\n\nCorrect Answer Is:C");
				}
				sleep(2);
				system("cls");
		}
			else if(h==9 && ARRAY[8]==0)
		{
				printf("The Central Rice Research Station is situated in ?\n\n\t\t");
				printf("\n\nA.Chennai\t\t\tB.Cuttack\n\nC.Bangalore\t\t\tD.Quilon\n");
				ARRAY[8]=ARRAY[8]+1;	
				if(toupper(getch())=='B')
				{
					printf("\t\t\n\nCorrect!!");
					point++;
				}
				else
				{
				printf("\t\t\n\nIncorrect");
				printf("\t\t\n\nCorrect Answer Is:B");
				}
				sleep(2);
				system("cls");
		}
		else if(h==10 && ARRAY[9]==0)
		{
				printf("Study of life in outer space is known as?\n\n\t\t");
				printf("\n\nA.enterbiology\t\tB.endbiology\n\nC.neobiology\t\tD.exobiology\n");
				ARRAY[9]=ARRAY[9]+1;	
				if(toupper(getch())=='D')
				{
					printf("\t\t\n\nCorrect!!");
					point++;
				}
				else
				{
					printf("\t\t\n\nIncorrect");
					printf("\t\t\n\nCorrect Answer Is:D");
				}
					sleep(2);
					system("cls");
		}
			else if(h==11 && ARRAY[10]==0)
		{
				printf("Oscar Awards were instituted in?\n\n\t\t");
				printf("\n\nA.1968\t\tB.1929\n\nC.1901\t\tD.1965\n");
				ARRAY[10]=ARRAY[10]+1;	
				if(toupper(getch())=='B')
				{
				printf("\t\t\n\nCorrect!!");
				point++;
				}
				else
				{
				printf("\t\t\n\nIncorrect");
				printf("\t\t\n\nCorrect Answer Is:B");
				}
				sleep(2);
				system("cls");
       	}	
        
        else
        {
        	goto random3;
		}
	}
}

getch();
return 0;
}

