#include<Windows.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void gotoxy(int x, int y) {
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}


int main()
{


	char Cquestions[][100] = { "1.C언어를 만든사람은?:",
							 "2.c언어가 만들어진 연도는?:",
							 "3.if가 무엇일까요?:",
							 "4.int num1=10,num2=20,num3=30,num4=40;\n  int * ptr1=&num2; \n printf(\"%d\",*ptr1) 출력값은?:",
							 "5.다음중 반복문은?:",
							 "6.char str[50]=\"i like C programming\"; \n   str[1]=\'\\0\'; \n printf(\"string: %s\",str);출력값은?:",
							 "7.int num1=10\n int *ptr1= &num1;\n (*ptr1)+=10;\n printf(\"%d\",*ptr1) 출력값은?:;",
							 "8.포인터에 대한 설명으로 옳은 것은?:",
							 "9.int a=0;\n if (a=0){ printf(\" 안녕 \")}출력값은?:",
							 "10.C프로그래밍 교수님은?"

	};//질문 최대 크기 100으로 지정

	char Coptions[][100] = { "1. Dennis Ritchie", "2. Nikola Tesla","3. Johm Carmack","4. John wash",
							"1. 1969", "2. 1927","3. 1975","3. 1999",
							"1. 조건문", "2. 반복문","3.실행문","4. 대문",
							"1. 10","2.20", "3.30","4.40",
							"1.whlie","2.if", "3.scanf","4.printf",
							"1.like","2.l like C", "3.i like","4.i",
							"1.40","2.30", "3.20","4.10",
							"1.주소값을 저장한다 ","2.문자를 출력한다", "3.정수를 입력받는다","4.변수를 초기화 한다",
							"1.안녕","2.잘기", "3.오류","4.Fales",
							"1.xxx교수님","2.aaa교수님", "3.bbb교수님","4.ccc교수님"

	};
	char pyquestions[][100] = { "1.values=[1,2,3,4,5,6] 일때 values(index(5))의 값은?:",
								"2.a=[1,2,3,4,5,6] len(a)은 무엇을 뜻하는것일가요:?",
								"3.for i in range(0,10,2):\n    print(i)에서 출력되는 결과는 무엇일끼요?(들여쓰기 무시하세요):",
								"4.for x in range(10):\n   if x > 5: continue;\n   if x > 8 : break;\n   priint(\"Hello world\"):",
								"5.수식 (10>20)and(20>10)의 결과값은 얼마인가?:",
								"6.age = 20\n  if age < 20:\n    print(\'20살 미만\')\n  else:\n    print(\'20살이상\'):",
								"7.\'apple\'*3:",
								"8.\'apple\'+\'grape\':",
								"9.1.0+int(1/2):",
								"10. aList = [10,20,30,40,50]\n print(aList[-2])"

	};
	char pyoptions[][100] = { "1. 1","2. 2","3. 3","4. 4",
							 "1. 2","2. 3","3. 5","4. 6",
							 "1. 1,2,3,4,5,6,7,8,9,10","2. 2,4,6,8","3. 2,4,6,8,10","4. 1,3,5,7,9",
							 "1. 4","2. 5","3. 6","4. 7",
							 "1. 0","2. 1","3. Ture","4. False",
							 "1. 20살이상","2. 20살미만","3. Ture","4. False",
							 "1. apple apple apple","2. apple+3","3. apple*3","4. apple apple apple * 3",
							 "1. applegrape","2. apple+grape","3. grape","4. apple",
							 "1. 1","2. 2","3. 3","4. 4",
							 "1. 10","2. 20","3. 30","4. 40"

	};



	int canswers[10] = { 1,2,1,2,1,4,3,1,1,2 };
	int pyanswers[10] = { 4,4,2,3,4,3,1,1,1,4 };

	int CnumOfQuestions = 10;
	int pynumOfQuestions = 10;
	int htnumOfQuestions = 10;
	int ans;
	int guess;
	int a;
	char clear;
	int score = 0;

	gotoxy(20, 9); printf("================================================================================\n");
	gotoxy(20, 10); printf("| 기말고사 대비 퀴즈                                                            |\n");
	gotoxy(20, 11); printf("|                                                                               |\n");
	gotoxy(20, 12); printf("| 1.C언어 퀴즈                                                                  |\n");
	gotoxy(20, 13); printf("| 2.파이썬 퀴즈                                                                 |\n");
	gotoxy(20, 14); printf("|                                                                               |\n");
	gotoxy(20, 15); printf("================================================================================\n");
	gotoxy(20, 16); scanf_s("%d", &ans);
	system("cls");
	if (ans == 1)
	{
		for (int i = 0; i < CnumOfQuestions; i++)
		{

			printf("=======================================================================\n");
			printf("%s \n", Cquestions[i]);
			printf("=======================================================================\n");

			for (int j = (i * 4); j < (i * 4) + 4; j++)
			{
				printf("%s\n", Coptions[j]);

			}
			printf("guess:");
			scanf_s("%d", &guess);


			if (guess == canswers[i]) {

				printf("정답입니다.!\n");
				score++;
				printf("=======================================================================\n");
				printf("1번을 눌러 다음으로 넘어가세요:\n");
				printf("=======================================================================\n");
				scanf_s("%d", &a);
				if (1 == a);
				{
					system("cls");
					a = 0;
				}
			}
			else
			{
				printf("=======================================================================\n");
				printf("틀렸습니다.!\n");
				printf("=======================================================================\n");
				printf("1번을 눌러 다음으로 넘어가세요:");
				scanf_s("%d", &a);
				if (1 == a); {
					system("cls");
					a = 0;

				}

			}



		}

	}
	if (ans == 2)
	{
		for (int i = 0; i < pynumOfQuestions; i++)
		{

			printf("=======================================================================\n");
			printf("%s \n", pyquestions[i]);
			printf("=======================================================================\n");

			for (int j = (i * 4); j < (i * 4) + 4; j++)
			{
				printf("%s\n", pyoptions[j]);

			}
			printf("guess:");
			scanf_s("%d", &guess);


			if (guess == pyanswers[i]) {

				printf("정답입니다.!\n");
				score++;
				printf("=======================================================================\n");
				printf("1번을 눌러 다음으로 넘어가세요:\n");
				printf("=======================================================================\n");
				scanf_s("%d", &a);
				if (1 == a);
				{
					system("cls");
					a = 0;
				}
			}
			else
			{
				printf("=======================================================================\n");
				printf("틀렸습니다.!\n");
				printf("=======================================================================\n");
				printf("1번을 눌러 다음으로 넘어가세요:");
				scanf_s("%d", &a);
				if (1 == a); {
					system("cls");
					a = 0;

				}

			}



		}
	}




	system("cls");
	gotoxy(15, 10); printf("===================================================================================\n");
	gotoxy(15, 11); printf("|                          FINAL SCORE: %d/%d                                      |\n", score, pynumOfQuestions);
	gotoxy(15, 12); printf("===================================================================================\n");
	return 0;
}
