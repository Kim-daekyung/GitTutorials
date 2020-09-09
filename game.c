/*pianocat 레벨키우기이다. cat을 입력시 하트 출력+1, hun을 입력시 참치캔 출력
참치캔을 주면 +3 안준다면 -1
gym입력시 행복 출력+5,*입력시 골반♥출력,-3 !입력시 종료
doge를 입력하면 도구를 소환한다 단 조건이 있는데 그조건은 플레이하며 찾아보자
만약 레벨이 0이하로 떨어지면 게임오버가된다.
룰렛 시스템 추가!(캣형한테 물어보기-완료-
그랜절
애교
참치캔
스키비디팝
프로틴(카페에 물어보기)

레벨에따라 피아노캣의 행동은 달라지는 부분도 있다.
그리고 레벨이 100레벨이 된다면 엔딩이 나오며 끝이난다.*/


#pragma warning(disable:4996)
#include<stdio.h>
#include<Windows.h>
#include <stdlib.h>
#include <time.h>

 /*num() {
	printf("             *                       *  *                        * \n");
	printf("************ *          ***********  *  *                        *  \n");
	printf("  *       *  *                    *  ****           **********   *           \n");
	printf("  *       *  *             ********  *  *                    *   *  \n");
	printf("  *       *  *                    *  ****             ********   *  \n");
	printf("************ *                    *  *  *                    *   *  \n");
	printf("             *                     *                         *   *  \n");
	printf("                                 *    *                          * \n");
	printf("                               *        *                          \n");
	printf("                            \n");
	
	return 0;
	
}*/
num1() {
	printf("\n\n\n\n");
	printf("■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■   \n");
	printf("□  ######### #    #########  #   #     #########  #        # # #        ####### #        □   \n");
	printf("□    #   #   #           #   #####            #   #       #      #           #  #        □   \n");
	printf("□    #   #   #     ######    #####      ######    #       #      #          #   #        □   \n");
	printf("□  ######### #         #     #   #          #     #        # # #           #    #        □   \n");
	printf("□                          #                             ##########                      □   \n");
	printf("□                         #  #                               #                           □   \n");
	printf("□                       #      #                             #                           □   \n");
	printf("■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■   \n");
	printf("\n\n\n\n\n");
	return 0;
 }
main() {
	int arry[20] = { 1,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
	int ban;
	char pianocat[100] = { 0, };
	int level = 1;
	int exit = 0;
	char answer = 0;
	char coue = 0;
	char gm = 0;
	char koe;
	char oie;
	int gaca = 0;
	int ango = 0;
	int end = 1;
	int surnung;
	int monpong;
	int cancze = 1;
	int back = 0;
	int hidden = 0;
	int ending = 0;
	int wering = 0;
	int day = 15;
	int mon = 6;
	int year = 2019;
	int ead = 0;
	int zingun = 0;
	int disday = 0;
	//변수들 선언
	num1();//타이틀
	Sleep(1000);
	
	printf("플레이하기 앞서 설명을 들으시겠습니까?\n\n");
	Sleep(2000);
	printf("듣는다면 1를 입력해주시고 듣지 않는다면 0을 입력해주세요.\n\n");
	scanf("%d", &surnung);//1를 입력하면 설명시작.아니면 넘어가기
	
	if (surnung == 1){
		while (1) {
			printf("이 게임을 하는 당신은 집사입니다! 당신의 행동으로 피아노캣을 키워보세요!\n\n");
			Sleep(2000);
			printf("위 게임에는 룰렛회수,참치캔,날수,레벨이 있습니다.\n\n");
			Sleep(2000);
			printf("룰렛회수는 처음 지급회수는 1회이며 룰렛을 돌리지 않은 모든 행동에 룰렛 1번의기회를 얻습니다.\n\n");
			printf("참치캔는 룰렛와 같이 지급회수는 1회이며, cat을 입력하거나 골반을 입력하시면 참치캔을 각 1개,3개 얻을수있습니다.\n\n");
			Sleep(2000);
			printf("day=날 또한 중요하며  각 행동에따라 날수가 증가합니다!!\n\n");
			Sleep(2000);
			printf("잘관리하면서 플레이해주세요!\n\n");
			Sleep(2000);
			printf("마지막은 레벨입니다!\n\n");
			Sleep(2000);
			printf("레벨은 호감도와 피아노캣의 기본스탯등으로 생각하시면 편하실꺼같습니다!\n\n");
			Sleep(2000);
			printf("그리고 행동에따라 레벨이 증감을 합니다 잘관리해야겠죠!\n\n");
			Sleep(2000);
			printf("레벨에따라 피아노캣의 행동범위가 증가하며 최종레벨 100레벨을 찍으시면 엔딩이 나옵니다!\n\n");
			Sleep(2000);
			printf(" 그리고 행동을 살펴보면 ('cat,hun,*,!,dogo,gym,random,$')이 있습니다.\n\n");
			Sleep(2000);
			printf("cat을 입력하면 피아노캣은 하트를 날리며 레벨1이 올라갑니다!\n\n 그리고 참치캔을 1개 얻습니다!\n\n"); 
			Sleep(2000);
			printf("hun을 입력하면 피아노캣이 참치캔을 요청합니다!.\n\n");
			Sleep(2000);
			printf("참치캔을 주면 레벨이 증가하겠죠?     안준다면 음.. 화이팅해요!\n\n");
			Sleep(2000);
			printf("gym입력시 헬스장을갑니다! 헬스장을 가다보니 좀 오래거리겠죠?\n\n");
			Sleep(2000);
			printf("*를 입력한다면 골반♥을 춥니다! 그러나 행동에따라 많이달라져요!!입력시 종료됩니다.\n\n");
			Sleep(2000);
			printf("doge를 입력하면 도구를 소환합니다. 단 조건이 있는데 그조건은 플레이하며 찾아봐용!\n\n");
			Sleep(2000);
			printf("$을 입력하시면 룰렛기회와참치캔 갯수가 나옵니다!!\n\n");
			Sleep(2000);
			printf("마지막으로 입력후 그 행동을 하기싫다 하면 0을 입력해주세요!\n\n");
			Sleep(2000);
			printf("단 0을 입력안한후 넘어간다면 뒤로 갈수없습니다! 주의해주세요\n\n");
			Sleep(2000);
			printf("레벨에따라 피아노캣의 행동은 달라지는 부분이 엄청많습니다\n\n");
			Sleep(2000);
			printf("그리고 ?를 입력하시면 행동이 머가있는지 설명을 해줍니다! 처음하시면 한번은 눌러주시면 감사해요\n\n");
			Sleep(2000);
			printf("엔딩은 각각의 행동에따라 빨리 끝날지도, 늦게끝날지도 모릅니다.\n\n화이팅!! \n\n");
			Sleep(2000);
			printf("진짜 마지막으로 명령을 너무 많이 이상하게 치시면... 어덯게될지는 아실꺼라 믿습니다!!\n\n");
			printf("다시 들으시겠습니까?\n\n");
			Sleep(2000);
			printf("다시 듣는다면 1을 입력해주세요.  안듣는다면 0을 입력해주세요\n\n");
			scanf("%d", &surnung);
			printf("\n\n\n\n\n\n\n");
			if (surnung != 1) {
				break;
			}
		}
	}//설명
	
	   
	printf("시작하기 앞서 위 제작자는 처음 게임을 만든것이며 베타버전이라 추후 바꿀 수 있는 요소가 많습니다.\n\n");
	Sleep(2000);
		printf("오타,오류등이 많을수있습니다. 그점 양해를 구하며 플레이 해주서셔 감사합니다.(제보:네이버 캣타워=>사튜링\n\n");
		Sleep(2000);
		printf("로딩중");
		for (int i = 3;i > 0;i--) {
			
				printf(".");
				Sleep(500);
			}
		printf("\n\n");

		    //카운터 다운
		
		printf("게임을 시작합니다\n\n");
		for (int i = 3;i>0;i--) {
			printf("%d",i);
			for (int j = 0;j < 5;j++) {
				printf(".");
				Sleep(500);
			}
			printf("\n");
			
		}      //카운터 다운
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	

		
	
	Sleep(1500);
	//코드등
	printf("첫방송!\n\n\n\n");
	while (exit != 100) {
		
		for (int i = 0;;i++) {
			if (mon > 12) {
				year += 1;
				mon %=12;
				
			}
			if (day > 30) {
				mon += 1;
				day %= 30;
			}
			if (day <= 30 && year >= 12) {
				break;
			}
			}
		
		//랜덤함수
		srand(time(NULL));
		int random = 0;
		//엔딩
		random = rand() % 5;
		if (zingun == 5) {
			printf("피아노캣이 당신의 오타를 보고 극대노합니다!!!!!!!!\n\n");
			Sleep(2000);
			printf("지건");
			for (int i = 1000;i >0;i--) {
				printf("!");
				Sleep(i);
				i -= 100;
			}
		
			printf("\n\n피아노캣의 레벨이 %d만큼 내려갑니다...\n\n", 20);
			Sleep(2000);
			printf("하루가 지났습니다.\n\n\n\n");
			Sleep(2000);
			level -= 20;
			day++;
			
		}
		if ((level < 0 || day == 200)||ending==2) {
			for (int i = 0;i < 20;i++) {
				printf("\n\n");
				Sleep(200);
			}
			printf("피아노캣이 당신한테 실망을 하였습니다.\n\n");
			Sleep(2000);
			printf("당신은 마음의 준비를 합니다.\n\n");
			Sleep(2000);
			printf("야 집사 왜 울고 있는거야?\n\n");
			Sleep(2000);
			printf("소난다");
			for (int i = 0;i < 5;i++) {
				printf(".");
				Sleep(300);
			}
			printf("\n\n");
			printf("지건 넣을께~\n\n");
			Sleep(2000);
			printf("당신은 지건을 맞고 쓰러지고 말았다.\n\n");
			Sleep(2000);
			printf("배드엔딩\n\n");
			printf("\n \n\n\n\n");
			Sleep(2000);
			printf("");
			printf("               -지건행-               ");
			Sleep(2000);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nGame over");
			Sleep(4000);
			return 1;


		}
		if (end < 0||ending==1) {
			for (int i = 0;i < 20;i++) {
				printf("\n\n");
				Sleep(200);
			}
			printf("피아노캣이 청산목록을 보았습니다.\n\n");
			Sleep(2000);
			printf("피아노캣이 당신의 룰렛 회수를 보았습니다.\n\n");

			Sleep(2000);
			printf("당신은 짐작하였습니다.\n\n ");
			Sleep(2000);
			printf("피아노캣이 지건을 날립니다....!!!\n\n");
			Sleep(2000);
			printf("지건!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			Sleep(2000);
			printf("배드엔딩\n\n");
			Sleep(2000);
			printf("\n\n\n\n");
			Sleep(2000);
			printf("룰렛 중독자\n\n");
			Sleep(2000);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nGame over\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(4000);
			return 0;
		}
		if (level >= 25 && level < 50) {
			printf("피아노캣이 당신한테 흥미를 가집니다.\n");
			printf("%d년 %d월 %d일 \n\n피아노캣%d레벨\n", year, mon, day, level);


		}
		if (level >= 75 && level < 100) {
			printf("피아노캣이 행복해합니다!\n");
			printf("%d년 %d월 %d일 \n\n피아노캣%d레벨\n", year, mon, day, level);
		}
		if (level >= 50 && level < 75) {
			printf("피아노캣은 강해졌다!\n\n");
			printf("%d년 %d월 %d일 \n\n피아노캣%d레벨\n", year, mon, day, level);
		}
		if (level > 100||ending==3) {
			for (int i = 0;i < 20;i++) {
				printf("\n\n");
				Sleep(200);
			}
			printf("피아노캣이 이제 대기업스트리머로 되었습니다!\n\n");
			Sleep(3000);
			printf("피아노캣이 당신을 기억할껍니다!\n\n");
			Sleep(3000);
			printf("\"노말엔딩\"");
			printf("\n\n\n\n\n");
			Sleep(3000);
			printf("                     ---충신---                       \n\n\n\n  ");
			Sleep(3000);
			printf("다음에 도전할때는 일수를 신경써보세요!\n\n");
			Sleep(3000);
			return 0;

		}
		if ((level > 100 && day == 100)||ending==4) {
			for (int i = 0;i < 20;i++) {
				printf("\n\n");
				Sleep(200);
			}
			Sleep(1800);
			printf("피아노캣이 당신한테 많은 의지를했습니다!!\n");
			Sleep(2000);
			printf("언제나 있어준 집사한테 감사를 표합니다!\n\n");
				Sleep(2000);
			printf("피아노캣이 당신을 영원히 기억할껍니다!!\n\n");
			Sleep(2000);
			printf("히든엔딩\n\n");
			Sleep(2000);
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			printf("\"----명품집사---\"");
			printf("\n\n\n\n\n");
			printf("플레이해주셔서 너무 감사해요! 앞으로 차기작 기대해주세용!\n\n");
		}
	    if (level < 50) {
			printf("%d년 %d월 %d일 \n\n피아노캣%d레벨\n",year,mon,day, level);

		}
		if (mon == 10 && day == 18) {
			printf("오늘은 피캣형 생일!!\n\n");
			Sleep(2000);
			printf("와!! 생일선물로 머하지만 참치캔이랑 룰렛기회를 드립니다!\n\n");
			Sleep(2000);
			printf("%d와%d를 드립니다!", cancze, random);
			Sleep(2000);
		}
		
		//명령어 반복문
		for (int i = 0;1;i++) {
			pianocat[i] = 0;
			printf("\n");
			scanf("%s",&pianocat);
			printf("\n");
			Sleep(1000);
			//각 명령어
			if (pianocat[i] == 'c') {
				
				if (pianocat[i + 1] == 'a') {
					
					if (pianocat[i + 2] == 't') {
						
						zingun = 0;
						printf("뒤로 가시겠습니까?\n\n");
						scanf("%d", &back);
						if (back == 0) {
							printf("뒤로 갑니다.\n\n\n\n");
							Sleep(1000);
							pianocat[i] = 0;
							break;
						}
						else{
							for (int s = 0;s < 6;s++) {
								printf(".");
								Sleep(400);
							}

							printf("♥\n\n");
							Sleep(2000);
							printf("피아노캣%d레벨 올랐습니다!!\n\n", 1);
							Sleep(2000);
							level++;
							disday++;
							day++;
							cancze++;
							end++;
							pianocat[i] = 0;
							printf("하루가 지났습니다.\n\n");
							Sleep(2000);
							break;
						}
					}
				}
			}//cat 입력시 하트출력
			else if (pianocat[i] == 'h') {
				zingun = 0;
				printf("뒤로 가시겠습니까?\n\n");
				scanf("%d", &back);
				if (back == 0) {
					printf("뒤로 갑니다.\n\n\n\n");
					Sleep(1000);
					pianocat[i] = 0;
					break;
				}
				else {
					printf("참치캔!\n\n");
					if (cancze > 0) {
						Sleep(2000);
						printf("참치캔을 주시겠습니까?\n\n");
						Sleep(1000);
						printf("Y        N\n\n");
						scanf("%S", &answer);
						if (answer == 'Y') {
							printf("참치캔을 한개주었습니다\n\n");
							Sleep(200);
							printf("피아노캣%d레벨이올랐습니다!!\n\n", 3);
							Sleep(2000);
							level += 3;
							pianocat[i] = 0;
							printf("3일이 지났습니다.\n\n");
							Sleep(2000);
							day += 3;
							disday += 3;
							cancze--;
							end++;
							pianocat[i] = 0;
							break;
						}
						if (answer == 'N') {
							printf("참치캔을 주지않았습니다.\n\n");
							Sleep(2000);
							printf("피아노캣은 조금 화가 나지만 진정합니다\n\n");
							printf("피아노캣 %d레벨이 내려갔습니다...\n\n", -1);
							Sleep(2000);
							level -= 1;
							printf("3일이 지났습니다.\n\n");
							Sleep(2000);
							day += 3;
							disday += 3;
							pianocat[i] = 0;
							end++;
							break;
						}
					}
					else if (cancze <= 0) {
						printf("참치캔이 없습니다..!\n\n");
						Sleep(2000);
						printf("피아노캣의 기대를 한번에 무너뜨렸어요!\n\n");
						Sleep(2000);
						printf("피아노캣이 지건을 날립니다");
						for (int i = 1000;i > 0;i--) {
							printf("!");
							Sleep(i);
						}
						printf("\n\n당신은 지건을 맞았습니다\n\n");
						Sleep(2000);
						printf("피아노캣의 레벨이 %d 내려갔습니다..\n\n",4);
						printf("3일이 지났습니다.\n\n\n\n");
						pianocat[i] = 0;
						level -= 4;
						day += 3;
						disday += 3;
						end++;
						break;
					}
				}
			}
			else if (pianocat[i] == '*') {
				zingun = 0;
				printf("뒤로 가시겠습니까?\n\n");
				scanf("%d", &back);
				if (back == 0) {
					printf("뒤로 갑니다.\n\n\n\n");
					Sleep(1000);
					pianocat[i] = 0;
					break;
				}
				
				else {
					printf("\n\n");
					printf("골반♥\n\n");
					Sleep(2500);
					if (level >= 10) {
						printf("피아노캣이 춤을 춥니다.\n\n");
						Sleep(2000);
						printf("집사들이 환호를합니다");
						for (int i = 100;i > 0;i--) {
							printf("!");
							Sleep(i);
							i -= 10;

						}
						printf("\n\n");
						Sleep(2000);
						printf("피아노캣의 레벨이 %d만큼 올라갑니다.\n\n", 3);
						Sleep(2000);
						day += 2;
						disday += 3;
						cancze += 3;
						printf("2일이 지났습니다.\n\n");
						Sleep(2000);
						end++;
						break;
					}

					else {
						printf("피아노캣이 .\n\n");
						Sleep(2000);
						printf("피아노캣의 레벨이 %d만큼 감소했습니다\n\n", 3);
						for (int i = 0;i < 6;i++) {
							printf(".");
							Sleep(500);
						}
						Sleep(2000);
						level -= 3;
						day += 2;
						disday += 2;
						end++;
						cancze += 3;
						printf("2일 지났습니다.\n\n");
						Sleep(2000);
						break;
					}
				}

			}
			else if (pianocat[i] == 'g') {
			zingun = 0;
			printf("뒤로 가시겠습니까?\n\n");
			scanf("%d", &back);
			if (back == 0) {
				printf("뒤로 갑니다.\n\n\n\n");
				Sleep(1000);
				pianocat[i] = 0;
				break;
			}
			else {
				printf("헬스장으로 갑니다.");
				for (int j = 0;j < 6;j++) {
					printf(".");
					Sleep(1500);
				}
				printf("\n\n");
				printf("운동을 시작합니다.");
				for (int e = 0;e < 7;e++) {
					printf(".");
					Sleep(1500);
				}
				printf("\n\n");
				printf("피아노캣은 중량이 늘어난 느낌을 받아 행복해합니다!!!.\n\n");
				Sleep(2000);
				printf("피아노캣레벨이 %d만큼 올랐습니다!!\n\n", 10);
				Sleep(2000);
				printf("20일 지났습니다.\n\n\n\n", 20);
				Sleep(1500);
				day += 20;
				disday += 20;
				level += 10;
				break;
			}
			}
			else if (pianocat[i] == '!') {
			zingun = 0;
			printf("뒤로 가시겠습니까?\n\n");
			scanf("%d", &back);
			if (back == 0) {
				printf("뒤로 갑니다.\n\n\n\n");
				Sleep(1000);
				pianocat[i] = 0;
				break;
			}
			else {
				printf("프로그램을 종료합니까?\n\n");
				Sleep(5000);
				printf("Y        N\n\n");
				scanf("%S", &gm);

				if (gm == 'N') {
					printf("뒤로갑니다.\n\n");
					Sleep(1000);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

					break;
				}
				else if (gm == 'Y') {
					printf("종료합니다\n\n");
					exit = 100;
					return 0;
				}
			}
			}
			else if (pianocat[i] == 'd') {
			zingun = 0;
							printf("뒤로 가시겠습니까?\n\n");
							scanf("%d", &back);
							if (back == 0) {
								printf("뒤로 갑니다.\n\n\n\n");
								Sleep(1000);
								pianocat[i] = 0;
								break;
							}
							else {
								printf("도구!\n\n");
								Sleep(2000);
								printf("도구를 사용하시겠습니까?\n\n");
								Sleep(2000);
								printf("Y              N\n\n");
								Sleep(2000);
								scanf("%S", &koe);
								Sleep(2000);
								if (level < 25) {
									printf("도구가 말을 듣지 않습니다\n\n");
									Sleep(2000);
									printf("피아노캣이 스트레스를 받습니다...!\n\n");
									Sleep(2000);
									printf("피아노캣 레벨이 %d내려갔습니다....\n\n", 2);

									printf("3일이 지났습니다.\n\n");
									Sleep(2000);
									level -= 2;
									day += 3;
									disday += 3;
									pianocat[i] = 0;
									break;
								}

								else {
									if (koe == 'Y') {
										printf("도구 사용중\n\n");
										Sleep(2000);
										for (int doea = 0;doea <= 5;doea++) {
											printf(".");
										}
										printf("도구들이 죽어나갑니다..\n\n");
										Sleep(2000);
										for (int doea = 0;doea <= 5;doea++) {
											printf(".");
										}
										printf("피아노캣이 행복을 느낍니다!!\n\n");
										Sleep(2000);
										printf("피아노캣 레벨이 %d올라갔습니다!!\n\n", 15);
										Sleep(2000);
										printf("10일이 지났습니다.\n\n");
										Sleep(2000);
										level += 15;
										day += 10;
										disday += 10;
										pianocat[i] = 0;
										break;






									}
									else if (koe == 'N') {
										printf("도구들이 행복해 합니다.\n\n");
										Sleep(2000);
										printf("1일이 지났습니다\n\n");
										Sleep(2000);
										day += 1;
										disday += 1;
										break;
										pianocat[i] = 0;

									}
								}
							}
						}
			else if (pianocat[i] == 'r') {
			zingun = 0;
			printf("뒤로 가시겠습니까?\n\n");
			scanf("%d", &back);
			if (back == 0) {
				printf("뒤로 갑니다.\n\n\n\n");
				Sleep(1000);
				pianocat[i] = 0;
				break;
			}
			else {
				printf("룰렛!\n\n");
				Sleep(1000);
				printf("돌아간다!\n\n");
				for (int q = 0;q < 5;q++) {
					printf(".");
					Sleep(1000);

				}

				Sleep(1000);

				printf("\n\n");
				if (random == 0) {
					printf("프로틴!!!!!\n\n");
					Sleep(2000);
					printf("피아노캣의 중량이 올라갑니다!\n\n");
					Sleep(2000);
					printf("피아노캣의 기분이 매우 좋아집니다!!\n\n");
					Sleep(2000);
					printf("피아노캣의 레벨이 %d이 올랐습니다!!!\n\n", 20);
					Sleep(2000);
					ango++;
					level += 20;




				}
				else if (random == 1) {
					printf("황금 참치캔!\n\n");
					Sleep(2000);
					printf("피아노캣이 황금 참치캔을 먹습니다!\n\n");
					Sleep(2000);
					printf("피아노캣의 기분이 좋아집니다!!\n\n");
					Sleep(2000);
					printf("피아노캣의 레벨이 %d이 올랐습니다!!!\n\n", 10);

					level += 10;
					ango++;
					Sleep(1000);


				}
				else if (random == 2) {
					printf("스키비디팝!\n\n");
					if (level > 5) {
						printf("추는중");
						for (int i = 0;i < 4;i++) {
							printf("!");
							Sleep(2000);
						}
						printf("\n");
						printf("피아노캣이 행복해 합니다!\n\n");
						Sleep(2000);
						printf("피아노캣의 기분이 괜찮아집니다...!\n\n");
						Sleep(2000);
						printf("피아노캣의 레벨이 %d이 올랐습니다!!", 5);
						Sleep(2000);
						level += 5;
						ango++;


					}
					else {
						Sleep(2000);
						printf("피아노캣이 스키비디팝을 춥니다!\n\n");
						Sleep(2000);
						for (int i = 0;i < 5;i++) {
							printf(".");
							Sleep(300);
						}
						printf("\n\n");
						printf("피아노캣의 기분이 편해집니다..!");
						Sleep(2000);
						printf("피아노캣의 레벨이 %d이 올라갑니다!!\n\n", 2);
						Sleep(2000);
						level +=2;
						ango++;
					}
				}
				else if (random == 3) {
					printf("그랜절!\n\n");
					Sleep(2000);
					if (level > 25) {
						printf("트레커는 버텼다!\n\n");
						Sleep(2000);
						printf("피아노캣의 긴장이 풀렸다!!\n\n");
						Sleep(2000);
						printf("피아노캣의 기분 또한 좋아졌다!!!\n\n");
						Sleep(2000);
						printf("피아노캣의 레벨이 %d 올라갑니다!!!!\n\n", 4);
						level += 4;
						ango++;
					}
					else {
						printf("트레커가 파손되었다!\n\n");
						Sleep(2000);
						for (int i = 0;i < 4;i++) {
							printf(".");
							Sleep(5000);
						}
						printf("\n");
						printf("피아노캣이 극대노 하고있다!!!\n\n");
						Sleep(2000);
						for (int i = 0;i < 10;i++) {
							printf("!");
								Sleep(300);
						}
						Sleep(700);
						printf("피아노캣의 기분이 엄청나게 다운되었다...");
						printf("피아노캣의 레벨이 %d이 내려갑니다...\n\n", 10);
						Sleep(2000);
						level -= 10;
						ango++;
					}
				}
				else if (random == 4) {
					printf("애교!\n\n");
					Sleep(2000);
					printf("집사들이 환호를 합니다!!\n\n");
					if (level > 40) {
						printf("피아노캣이 현자타임에 대한 내성이 생겼습니다!\n\n");
						Sleep(2000);
						printf("피아노캣의 레벨 변동은 없습니다!\n\n");

					}
					else {
						if (ango == 0) {
							printf("그러나 피아노캣이 현자타임이 조금찾아옵니다...\n\n");
							Sleep(2000);
							printf("피아노캣의 레벨이 %d이 내려갑니다...\n\n", 1);
							Sleep(2000);
							level -= 1;
							ango--;
						}
						else {
							printf("피아노캣이 현자타임이 찾아왔습니다...!\n\n");
							Sleep(2000);
							printf("극심한 현자타임으로 인해 힘이 다운됩니다.....\n\n");
							Sleep(2000);
							printf("피아노캣의 레벨이 %d이 내려갑니다.....!\n\n", 20);
							Sleep(2000);
							level -= 20;
							ango++;
						}

					}
				}
				printf("2일이 지났습니다.\n\n");
				day += 2;
				gaca++;
				end--;
				pianocat[i] == 0;
				disday += 2;
				break;
			}
}
            else if (pianocat[i] == '?') {
			zingun = 0;
			printf("뒤로 가시겠습니까?\n\n");
			scanf("%d", &back);
			if (back == 0) {
				printf("뒤로 갑니다.\n\n\n\n");
				Sleep(2000);
				pianocat[i] = 0;
				break;
			}
			else {
				printf("명령어는 cat,hun,*,!,dogo,random,gym 가있습니다.\n\n");
				Sleep(2000);
				printf("명령어의 설명을 보시겠습니까?\n\n");
				Sleep(2000);
				printf("보신다면 1 를 입력해주세요.아니라면 0을 입력해주세요\n\n");
				Sleep(2000);
				scanf("%d", &monpong);
				printf("\n\n"
				);
				Sleep(2000);
				if (monpong == 1) {
					printf("cat은 하트를 출력하며 레벨이 1증가합니다.\n\n");
					Sleep(2000);
					printf("hun은 피아노캣한테 참치캔을 줄수있습니다. 대답에 따라 레벨이 증감합니다.\n\n");
					Sleep(2000);
					printf("*은 골반입니다.상황에따라 레벨이 증감합니다.\n\n");
					Sleep(2000);
					printf("!는 나가기 버튼입니다. 프로그램을 종료하고싶을때 사용하시면됩니다.\n\n");
					Sleep(2000);
					printf("dogo는 말그대로 도구 호출입니다. 이것 또한 상황에따라 레벨이 증감할수 있습니다!\n\n");
					Sleep(2000);
					printf("random는 룰렛입니다. 룰렛 항목에는 프로틴,참치캔,그랜절,스키비디팝,애교가있습니다. 각 행동에따라 레벨이 증감합니다!\n\n 또한 룰렛은 너무 많이 돌린다면 게임 종료가되니 주의해주세요!");
					Sleep(2000);
					printf("\n\ngym은 영어뜻대로 헬스장에갑니다! 헬스장이니 피아노캣의 레벨이 증가하겠죠?!\n\n");
					pianocat[i] = 0;
					break;

				
				}
				
				else {
					pianocat[i] = 0; break;
				}
				
			}
			}
			else if (pianocat[i] == '~') {
			zingun = 0;
			printf("어서왕! 여기는 vip방이라고해! 아마 이코드 알고있는 사람은 캣형밖에없을꺼야!\n\n");
			Sleep(2000);
			printf("여기서는 레벨이라든지 참치캔,룰렛회수,날을 늘릴거나 줄일수있어!\n\n");
			Sleep(2000);
			printf("또한 엔딩으로도 갈수있어! 엔딩을 가고싶으면(스포주의) 1을눌러주고 아니면 0을 입력해줘!\n\n");
			scanf("%d", &hidden);
			printf("\n\n");
			Sleep(2000);
			if (hidden == 1) {
				printf("엔딩은 총 4개! 룰렛 중독엔딩,배드엔딩 1개와 일반엔딩 1개 진엔딩 1개가있어!\n\n");
				Sleep(2000);
				printf("룰렛엔딩으로 갈려면 1 배드엔딩은2 일반엔딩은 3 진엔딩은 4를 입력해줘!\n\n");
				scanf("%d", &ending);
				Sleep(2000);
				printf("게임이 끝나도 당황말고 똑같이 다시 시작하면돼!! 알징?!\n\n 엔딩 잘봐줘!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				Sleep(4000);
				break;
			}
			else {
				printf("참치캔의 갯수조절하고싶으면 1을 룰렛회수는 2를! 레벨은 3을 입력해주고! 날수는 4를 입력해줘\n\n");
				Sleep(2000);
				scanf("%d", &wering);
				if (wering == 1) {
					Sleep(2000);
					printf("참치캔의 갯수를 얼마로 조절할랭? 여기다가 적어봥 참치캔 갯수가 나올꺼양!\n\n");
					scanf("%d", &cancze);
					Sleep(2000);
					printf("참치캔 갯수가%d만큼 됬어!\n\n\n\n",cancze);
					break;
				}
				else if (wering == 2) {
					printf("룰렛회수를 몇번 돌려볼랭? 여기다가 적으면 룰렛 회수가 늘어날꺼야!\n\n");
					scanf("%d", &end);
					printf("룰렛회수가 %d이 됬어!",end);
					break;
				}
				else if (wering == 3) {
					printf("레벨을 어느정도로 해볼랭? 여기다 적으면 레벨이 입력한만큼 올라갈꺼야!\n\n");
					Sleep(2000);
					printf("주의점은 레벨 100이상으로하면 바로 엔딩으로 갈수도있엉! 그건 조심해야행!\n\n");
					scanf("%d", &level);
					printf("레벨이 %d만큼 올랐엉!\n\n\n\n", level);
					break;

				}
				else if (wering == 4) {
					printf("솔직히 날수는 바뀌어도 별다른게 있긴행! 그건 형이 알아서 찾아줭!\n\n");
					Sleep(2000);
					printf("여기다가 입력하면 그일만큼 갈꺼양! 단 최대한 갈수있는 날은 30일이야! 더가고싶으면 반복해줭...!\n\n");
					Sleep(2000);
					scanf("%d", &ead);
					day += ead;

					printf("날수가 %d만큼 증가했어!\n\n\n\n", ead);
					break;
				}
				pianocat[i] = 0;
			}
}
			else if (pianocat[i] == '$') {
			
			printf("현재 가지고있는 룰렛기회와 침치캔 갯수는 %d %d입니다\n\n", random, cancze);
			Sleep(5000);
			zingun = 0;
			pianocat[i] = 0;
			break;
}
			else if (pianocat[i] == 'w') {
			printf("지금 일차는 %d일차 입니다!!\n\n\n\n", disday);
			Sleep(2000);
			break;
}
			else if (pianocat[i] == 'l') {
			







                                           }



			else {
				printf("잘못입력하셨습니다.\n\n\n\n\n\n");
				zingun++;
				pianocat[i] = 0;
				break;
			}
		}
	}
}