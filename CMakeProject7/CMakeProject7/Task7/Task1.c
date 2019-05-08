#include < stdio.h >  
#include < string.h > 
#include < math.h > 
enum Zachet { Zachet = 5, Nezachet = 2 };
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
	char* *zch = "";
	int i = 0;
	printf("%s\n", zch);
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
				zch[0] = "2017-2018 god:";
				zch[1] = " VVP         Maksimov     22.12.17";
				zch[2] = "SEPIT        Korbleva     25.12.17";
				zch[3] = "English      Mashenskaya  25.12.17";
				zch[4] = "RYiKR        Beznosova    25.12.17";
				zch[5] = "Informatika  Zagvozdkina  26.12.17";
				printf("Zachety 1 semestr:\n\n");
				printf("%s \n", zch[0]);
				printf("Predmet     Prepodavatel   Data     Ocenka\n");
				for (i = 1; i < 6; i++) {
					printf("%s  %d\n", zch[i], z);
				}
				zch = 0;
				free(zch);
				system("pause");
				system("cls");
				goto m;
			case'2':
				zch[0] = "2017-2018 god:";
				zch[1] = "Phylosophy  Korableva    26.12.17";
				zch[2] = "AGiLA       Soliev       26.12.17";
				zch[3] = "High Math   Raycin       26.12.17 ";
				printf("Ekzameny 1 semestr:\n\n");
				printf("%s \n", zch[0]);
				printf("Predmet    Prepodavatel     Data     Ocenka\n");
				printf("%s    %d\n", zch[1], o);
				printf("%s    %d\n", zch[2], u);
				printf("%s    %d\n", zch[3], u);
				zch = 0;
				free(zch);
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
				zch[0] = "2017-2018 god:";
				zch[1] = "NPBDVI       Antipov      30.05.18";
				zch[2] = "TOE          Hatuceva     30.05.18";
				zch[3] = "KG           Ignatov      30.05.18";
				zch[4] = "Fiz-ra       Simkacheva   30.05.18";
				zch[5] = "Fizika       Zhilinsky     5.06.17";
				printf("Zachety 2 semestr:\n\n");
				printf("%s \n", zch[0]);
				printf("Predmet     Prepodavatel   Data     Ocenka\n");
				for (i = 1; i < 6; i++) {
					printf("%s  %d\n", zch[i], z);
				}
				zch = 0;
				free(zch);
				system("pause");
				system("cls");
				goto m;
			case'2':
				zch[0] = "2017-2018 god:";
				zch[1] = "Informatika        Zagvozdkina   15.06.18";
				zch[2] = "History            Kuznetscova   19.06.18";
				zch[3] = "English            Egorova       25.06.18";
				zch[4] = "High Math          Raycin        29.06.18";
				printf("Ekzameny 2 semestr:\n\n");
				printf("%s \n", zch[0]);
				printf("Predmet           Prepodavatel     Data     Ocenka\n");
				printf("%s     %d\n", zch[1], h);
				printf("%s     %d\n", zch[2], o);
				printf("%s     %d\n", zch[3], h);
				printf("%s     %d\n", zch[4], o);
				zch = 0;
				free(zch);
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
				zch[0] = "2018-2019 god:";
				zch[1] = "TFKP         Kuprin      24.12.18";
				zch[2] = "FOE          Vlasov      25.12.18";
				zch[3] = "IRSS         Vanushina   26.12.18";
				zch[4] = "VMPPP        Semenova    27.12.18";
				zch[5] = "TEClab       Frisk       28.12.18";
				zch[6] = "TECcr        Frisk       28.12.18";
				printf("Zachety 3 semestr:\n\n");
				printf("%s \n", zch[0]);
				printf("Predmet     Prepodavatel   Data     Ocenka\n");
				for (i = 1; i < 7; i++) {
					printf("%s  %d\n", zch[i], z);
				}
				zch = 0;
				free(zch);
				system("pause");
				system("cls");
				goto m;
			case'2':
				zch[0] = "2018-2019 god:";
				zch[1] = "Fizika             Zhilinsky     16.01.19";
				zch[2] = "TViMS              Demin         21.01.19";
				zch[3] = "VM                 Semenova      25.01.19";
				zch[4] = "Diskr.Math         Dubnov        31.01.19";
				printf("Ekzameny 3 semestr:\n\n");
				printf("2018/2019 god;\n");
				printf("Predmet           Prepodavatel     Data     Ocenka\n");
				printf("%s      %d\n", zch[1], h);
				printf("%s      %d\n", zch[2], h);
				printf("%s      %d\n", zch[3], o);
				printf("%s      %d\n", zch[4], o);
				zch = 0;
				free(zch);
				system("pause");
				system("cls");
				goto m;
			default:
				break;
			}break;
		}break;
	}
}
}
