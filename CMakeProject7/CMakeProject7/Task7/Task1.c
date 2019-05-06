#include < stdio.h >  
#include < string.h > 
#include < math.h > 
enum Zachet { Zachet=5,Nezachet=2 };
enum Ekzamen { Neud = 2, Udv = 3, Hor = 4, Otl = 5 };
struct Person {
	char firstName[20];
	char lastName[20];
	char patronymic[20];
	char number[10];
	int sem;
};
enum zachet z = Zachet;
enum zachet n = Nezachet;
enum Ekzamen ne = Neud;
enum Ekzamen u = Udv;
enum Ekzamen h = Hor;
enum Ekzamen o = Otl;
void main() {

	struct Person p;
	const char firstName[] = "Alexander";
	const char lastName[] = "Tabiev";
	const char patronimic[] = "Albertovich";
	const char number[] = "1BIN17150";
	strcpy_s(p.firstName, 20, firstName);
	strcpy_s(p.lastName, 20, lastName);
	strcpy_s(p.patronymic, 20, patronimic);
	strcpy_s(p.number, 10, number);
	p.sem = 4;
m:
	printf("Number zachetki:%s\n", p.number);
	printf("Name:     %s\n", p.firstName);
	printf("Familia:  %s\n", p.lastName);
	printf("Otchestvo:%s\n", p.patronymic);
	printf("Semestr:  %i\n", p.sem);
	printf("\nChose semestr:\n1.Semestr\n2.Semestr\n3.Semestr\n4.Close");
	switch (_getch()) {
		{case '1':
			printf("\nChose zachet or ekzamen:\n1.Zachet\n2.Ekzamen\n\n");
			switch (_getch())
			{
			case'1':
				printf("Zachety 1 semestr:\n\n");
				printf("2017/2018 god;\n");
				printf("Predmet     Prepodavatel   Data     Ocenka\n");
				printf(" VVP         Maksimov     22.12.17   %d\n", z);
				printf("SEPIT        Korbleva     25.12.17   %d\n", z);
				printf("English      Mashenskaya  25.12.17   %d\n", z);
				printf("RYiKR        Beznosova    25.12.17   %d\n", z);
				printf("Informatika  Zagvozdkina  26.12.17   %d\n", z);
				system("pause");
				system("cls");
				goto m;
			case'2':
				printf("Ekzameny 1 semestr:\n\n");
				printf("2017/2018 god;\n");
				printf("Predmet    Prepodavatel     Data     Ocenka\n");
				printf("Phylosophy  Korableva    26.12.17    %d\n", o);
				printf("AGiLA       Soliev       26.12.17    %d\n", u);
				printf("High Math   Raycin       26.12.17    %d\n", u);
				system("pause");
				system("cls");
				goto m;

			default:
				printf("Error");
				system("pause");
				system("cls");
				goto m;

			}; break;
		case '2':
			printf("\nChose zachet or ekzamen:\n1.Zachet\n2.Ekzamen\n\n");
			switch (_getch())
			{
			case'1':
				printf("Zachety 2 semestr:\n\n");
				printf("2017/2018 god;\n");
				printf("Predmet     Prepodavatel   Data     Ocenka\n");
				printf("NPBDVI       Antipov      30.05.18   %d\n", z);
				printf("TOE          Hatuceva     30.05.18   %d\n", z);
				printf("KG           Ignatov      30.05.18   %d\n", z);
				printf("Fiz-ra       Simkacheva   30.05.18   %d\n", z);
				printf("Fizika       Zhilinsky     5.06.17   %d\n", z);
				system("pause");
				system("cls");
				goto m;
			case'2':
				printf("Ekzameny 2 semestr:\n\n");
				printf("2017/2018 god;\n");
				printf("Predmet           Prepodavatel     Data     Ocenka\n");
				printf("Informatika        Zagvozdkina   15.06.18     %d\n", h);
				printf("History            Kuznetscova   19.06.18     %d\n", o);
				printf("English            Egorova       25.06.18     %d\n", h);
				printf("High Math          Raycin        29.06.18     %d\n", o);
				system("pause");
				system("cls");
				goto m;
			default:
				printf("Error");
				system("pause");
				system("cls");
				goto m;
			}; break;
		case'3':
			printf("\nChose zachet or ekzamen:\n1.Zachet\n2.Ekzamen\n\n");
			switch (_getch())
			{
			case'1':
				printf("Zachety 3 semestr:\n\n");
				printf("2018/2019 god;\n");
				printf("Predmet     Prepodavatel   Data     Ocenka\n");
				printf("TFKP         Kuprin      24.12.18   %d\n", z);
				printf("FOE          Vlasov      25.12.18   %d\n", z);
				printf("IRSS         Vanushina   26.12.18   %d\n", z);
				printf("VMPPP        Semenova    27.12.18   %d\n", z);
				printf("TEClab       Frisk       28.12.18   %d\n", z);
				printf("TECcr        Frisk       28.12.18   %d\n", z);
				system("pause");
				system("cls");
				goto m;
			case'2':
				printf("Ekzameny 3 semestr:\n\n");
				printf("2018/2019 god;\n");
				printf("Predmet           Prepodavatel     Data     Ocenka\n");
				printf("Fizika             Zhilinsky     16.01.19      %d\n", h);
				printf("TViMS              Demin         21.01.19      %d\n", h);
				printf("VM                 Semenova      25.01.19      %d\n", o);
				printf("Diskr.Math         Dubnov        31.01.19      %d\n", o);
				system("pause");
				system("cls");
				goto m;
			default:
				break;
			}
		}
	}


}