/*pianocat ����Ű����̴�. cat�� �Է½� ��Ʈ ���+1, hun�� �Է½� ��ġĵ ���
��ġĵ�� �ָ� +3 ���شٸ� -1
gym�Է½� �ູ ���+5,*�Է½� ��ݢ����,-3 !�Է½� ����
doge�� �Է��ϸ� ������ ��ȯ�Ѵ� �� ������ �ִµ� �������� �÷����ϸ� ã�ƺ���
���� ������ 0���Ϸ� �������� ���ӿ������ȴ�.
�귿 �ý��� �߰�!(Ĺ������ �����-�Ϸ�-
�׷���
�ֱ�
��ġĵ
��Ű�����
����ƾ(ī�信 �����)

���������� �ǾƳ�Ĺ�� �ൿ�� �޶����� �κе� �ִ�.
�׸��� ������ 100������ �ȴٸ� ������ ������ ���̳���.*/


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
	printf("�����������������������������������������������   \n");
	printf("��  ######### #    #########  #   #     #########  #        # # #        ####### #        ��   \n");
	printf("��    #   #   #           #   #####            #   #       #      #           #  #        ��   \n");
	printf("��    #   #   #     ######    #####      ######    #       #      #          #   #        ��   \n");
	printf("��  ######### #         #     #   #          #     #        # # #           #    #        ��   \n");
	printf("��                          #                             ##########                      ��   \n");
	printf("��                         #  #                               #                           ��   \n");
	printf("��                       #      #                             #                           ��   \n");
	printf("�����������������������������������������������   \n");
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
	//������ ����
	num1();//Ÿ��Ʋ
	Sleep(1000);
	
	printf("�÷����ϱ� �ռ� ������ �����ðڽ��ϱ�?\n\n");
	Sleep(2000);
	printf("��´ٸ� 1�� �Է����ֽð� ���� �ʴ´ٸ� 0�� �Է����ּ���.\n\n");
	scanf("%d", &surnung);//1�� �Է��ϸ� �������.�ƴϸ� �Ѿ��
	
	if (surnung == 1){
		while (1) {
			printf("�� ������ �ϴ� ����� �����Դϴ�! ����� �ൿ���� �ǾƳ�Ĺ�� Ű��������!\n\n");
			Sleep(2000);
			printf("�� ���ӿ��� �귿ȸ��,��ġĵ,����,������ �ֽ��ϴ�.\n\n");
			Sleep(2000);
			printf("�귿ȸ���� ó�� ����ȸ���� 1ȸ�̸� �귿�� ������ ���� ��� �ൿ�� �귿 1���Ǳ�ȸ�� ����ϴ�.\n\n");
			printf("��ġĵ�� �귿�� ���� ����ȸ���� 1ȸ�̸�, cat�� �Է��ϰų� ����� �Է��Ͻø� ��ġĵ�� �� 1��,3�� �������ֽ��ϴ�.\n\n");
			Sleep(2000);
			printf("day=�� ���� �߿��ϸ�  �� �ൿ������ ������ �����մϴ�!!\n\n");
			Sleep(2000);
			printf("�߰����ϸ鼭 �÷������ּ���!\n\n");
			Sleep(2000);
			printf("�������� �����Դϴ�!\n\n");
			Sleep(2000);
			printf("������ ȣ������ �ǾƳ�Ĺ�� �⺻���ȵ����� �����Ͻø� ���Ͻǲ������ϴ�!\n\n");
			Sleep(2000);
			printf("�׸��� �ൿ������ ������ ������ �մϴ� �߰����ؾ߰���!\n\n");
			Sleep(2000);
			printf("���������� �ǾƳ�Ĺ�� �ൿ������ �����ϸ� �������� 100������ �����ø� ������ ���ɴϴ�!\n\n");
			Sleep(2000);
			printf(" �׸��� �ൿ�� ���캸�� ('cat,hun,*,!,dogo,gym,random,$')�� �ֽ��ϴ�.\n\n");
			Sleep(2000);
			printf("cat�� �Է��ϸ� �ǾƳ�Ĺ�� ��Ʈ�� ������ ����1�� �ö󰩴ϴ�!\n\n �׸��� ��ġĵ�� 1�� ����ϴ�!\n\n"); 
			Sleep(2000);
			printf("hun�� �Է��ϸ� �ǾƳ�Ĺ�� ��ġĵ�� ��û�մϴ�!.\n\n");
			Sleep(2000);
			printf("��ġĵ�� �ָ� ������ �����ϰ���?     ���شٸ� ��.. ȭ�����ؿ�!\n\n");
			Sleep(2000);
			printf("gym�Է½� �ｺ�������ϴ�! �ｺ���� ���ٺ��� �� �����Ÿ�����?\n\n");
			Sleep(2000);
			printf("*�� �Է��Ѵٸ� ��ݢ��� ��ϴ�! �׷��� �ൿ������ ���̴޶�����!!�Է½� ����˴ϴ�.\n\n");
			Sleep(2000);
			printf("doge�� �Է��ϸ� ������ ��ȯ�մϴ�. �� ������ �ִµ� �������� �÷����ϸ� ã�ƺ���!\n\n");
			Sleep(2000);
			printf("$�� �Է��Ͻø� �귿��ȸ����ġĵ ������ ���ɴϴ�!!\n\n");
			Sleep(2000);
			printf("���������� �Է��� �� �ൿ�� �ϱ�ȴ� �ϸ� 0�� �Է����ּ���!\n\n");
			Sleep(2000);
			printf("�� 0�� �Է¾����� �Ѿ�ٸ� �ڷ� ���������ϴ�! �������ּ���\n\n");
			Sleep(2000);
			printf("���������� �ǾƳ�Ĺ�� �ൿ�� �޶����� �κ��� ��û�����ϴ�\n\n");
			Sleep(2000);
			printf("�׸��� ?�� �Է��Ͻø� �ൿ�� �Ӱ��ִ��� ������ ���ݴϴ�! ó���Ͻø� �ѹ��� �����ֽø� �����ؿ�\n\n");
			Sleep(2000);
			printf("������ ������ �ൿ������ ���� ��������, �ʰԳ������� �𸨴ϴ�.\n\nȭ����!! \n\n");
			Sleep(2000);
			printf("��¥ ���������� ����� �ʹ� ���� �̻��ϰ� ġ�ø�... ��F�Ե����� �ƽǲ��� �Ͻ��ϴ�!!\n\n");
			printf("�ٽ� �����ðڽ��ϱ�?\n\n");
			Sleep(2000);
			printf("�ٽ� ��´ٸ� 1�� �Է����ּ���.  �ȵ�´ٸ� 0�� �Է����ּ���\n\n");
			scanf("%d", &surnung);
			printf("\n\n\n\n\n\n\n");
			if (surnung != 1) {
				break;
			}
		}
	}//����
	
	   
	printf("�����ϱ� �ռ� �� �����ڴ� ó�� ������ ������̸� ��Ÿ�����̶� ���� �ٲ� �� �ִ� ��Ұ� �����ϴ�.\n\n");
	Sleep(2000);
		printf("��Ÿ,�������� �������ֽ��ϴ�. ���� ���ظ� ���ϸ� �÷��� ���ּ��� �����մϴ�.(����:���̹� ĹŸ��=>��Ʃ��\n\n");
		Sleep(2000);
		printf("�ε���");
		for (int i = 3;i > 0;i--) {
			
				printf(".");
				Sleep(500);
			}
		printf("\n\n");

		    //ī���� �ٿ�
		
		printf("������ �����մϴ�\n\n");
		for (int i = 3;i>0;i--) {
			printf("%d",i);
			for (int j = 0;j < 5;j++) {
				printf(".");
				Sleep(500);
			}
			printf("\n");
			
		}      //ī���� �ٿ�
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	

		
	
	Sleep(1500);
	//�ڵ��
	printf("ù���!\n\n\n\n");
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
		
		//�����Լ�
		srand(time(NULL));
		int random = 0;
		//����
		random = rand() % 5;
		if (zingun == 5) {
			printf("�ǾƳ�Ĺ�� ����� ��Ÿ�� ���� �ش���մϴ�!!!!!!!!\n\n");
			Sleep(2000);
			printf("����");
			for (int i = 1000;i >0;i--) {
				printf("!");
				Sleep(i);
				i -= 100;
			}
		
			printf("\n\n�ǾƳ�Ĺ�� ������ %d��ŭ �������ϴ�...\n\n", 20);
			Sleep(2000);
			printf("�Ϸ簡 �������ϴ�.\n\n\n\n");
			Sleep(2000);
			level -= 20;
			day++;
			
		}
		if ((level < 0 || day == 200)||ending==2) {
			for (int i = 0;i < 20;i++) {
				printf("\n\n");
				Sleep(200);
			}
			printf("�ǾƳ�Ĺ�� ������� �Ǹ��� �Ͽ����ϴ�.\n\n");
			Sleep(2000);
			printf("����� ������ �غ� �մϴ�.\n\n");
			Sleep(2000);
			printf("�� ���� �� ��� �ִ°ž�?\n\n");
			Sleep(2000);
			printf("�ҳ���");
			for (int i = 0;i < 5;i++) {
				printf(".");
				Sleep(300);
			}
			printf("\n\n");
			printf("���� ������~\n\n");
			Sleep(2000);
			printf("����� ������ �°� �������� ���Ҵ�.\n\n");
			Sleep(2000);
			printf("��忣��\n\n");
			printf("\n \n\n\n\n");
			Sleep(2000);
			printf("");
			printf("               -������-               ");
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
			printf("�ǾƳ�Ĺ�� û������ ���ҽ��ϴ�.\n\n");
			Sleep(2000);
			printf("�ǾƳ�Ĺ�� ����� �귿 ȸ���� ���ҽ��ϴ�.\n\n");

			Sleep(2000);
			printf("����� �����Ͽ����ϴ�.\n\n ");
			Sleep(2000);
			printf("�ǾƳ�Ĺ�� ������ �����ϴ�....!!!\n\n");
			Sleep(2000);
			printf("����!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			Sleep(2000);
			printf("��忣��\n\n");
			Sleep(2000);
			printf("\n\n\n\n");
			Sleep(2000);
			printf("�귿 �ߵ���\n\n");
			Sleep(2000);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nGame over\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(4000);
			return 0;
		}
		if (level >= 25 && level < 50) {
			printf("�ǾƳ�Ĺ�� ������� ��̸� �����ϴ�.\n");
			printf("%d�� %d�� %d�� \n\n�ǾƳ�Ĺ%d����\n", year, mon, day, level);


		}
		if (level >= 75 && level < 100) {
			printf("�ǾƳ�Ĺ�� �ູ���մϴ�!\n");
			printf("%d�� %d�� %d�� \n\n�ǾƳ�Ĺ%d����\n", year, mon, day, level);
		}
		if (level >= 50 && level < 75) {
			printf("�ǾƳ�Ĺ�� ��������!\n\n");
			printf("%d�� %d�� %d�� \n\n�ǾƳ�Ĺ%d����\n", year, mon, day, level);
		}
		if (level > 100||ending==3) {
			for (int i = 0;i < 20;i++) {
				printf("\n\n");
				Sleep(200);
			}
			printf("�ǾƳ�Ĺ�� ���� ������Ʈ���ӷ� �Ǿ����ϴ�!\n\n");
			Sleep(3000);
			printf("�ǾƳ�Ĺ�� ����� ����Ҳ��ϴ�!\n\n");
			Sleep(3000);
			printf("\"�븻����\"");
			printf("\n\n\n\n\n");
			Sleep(3000);
			printf("                     ---���---                       \n\n\n\n  ");
			Sleep(3000);
			printf("������ �����Ҷ��� �ϼ��� �Ű�Ẹ����!\n\n");
			Sleep(3000);
			return 0;

		}
		if ((level > 100 && day == 100)||ending==4) {
			for (int i = 0;i < 20;i++) {
				printf("\n\n");
				Sleep(200);
			}
			Sleep(1800);
			printf("�ǾƳ�Ĺ�� ������� ���� �������߽��ϴ�!!\n");
			Sleep(2000);
			printf("������ �־��� �������� ���縦 ǥ�մϴ�!\n\n");
				Sleep(2000);
			printf("�ǾƳ�Ĺ�� ����� ������ ����Ҳ��ϴ�!!\n\n");
			Sleep(2000);
			printf("���翣��\n\n");
			Sleep(2000);
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			printf("\"----��ǰ����---\"");
			printf("\n\n\n\n\n");
			printf("�÷������ּż� �ʹ� �����ؿ�! ������ ������ ������ּ���!\n\n");
		}
	    if (level < 50) {
			printf("%d�� %d�� %d�� \n\n�ǾƳ�Ĺ%d����\n",year,mon,day, level);

		}
		if (mon == 10 && day == 18) {
			printf("������ ��Ĺ�� ����!!\n\n");
			Sleep(2000);
			printf("��!! ���ϼ����� �������� ��ġĵ�̶� �귿��ȸ�� �帳�ϴ�!\n\n");
			Sleep(2000);
			printf("%d��%d�� �帳�ϴ�!", cancze, random);
			Sleep(2000);
		}
		
		//��ɾ� �ݺ���
		for (int i = 0;1;i++) {
			pianocat[i] = 0;
			printf("\n");
			scanf("%s",&pianocat);
			printf("\n");
			Sleep(1000);
			//�� ��ɾ�
			if (pianocat[i] == 'c') {
				
				if (pianocat[i + 1] == 'a') {
					
					if (pianocat[i + 2] == 't') {
						
						zingun = 0;
						printf("�ڷ� ���ðڽ��ϱ�?\n\n");
						scanf("%d", &back);
						if (back == 0) {
							printf("�ڷ� ���ϴ�.\n\n\n\n");
							Sleep(1000);
							pianocat[i] = 0;
							break;
						}
						else{
							for (int s = 0;s < 6;s++) {
								printf(".");
								Sleep(400);
							}

							printf("��\n\n");
							Sleep(2000);
							printf("�ǾƳ�Ĺ%d���� �ö����ϴ�!!\n\n", 1);
							Sleep(2000);
							level++;
							disday++;
							day++;
							cancze++;
							end++;
							pianocat[i] = 0;
							printf("�Ϸ簡 �������ϴ�.\n\n");
							Sleep(2000);
							break;
						}
					}
				}
			}//cat �Է½� ��Ʈ���
			else if (pianocat[i] == 'h') {
				zingun = 0;
				printf("�ڷ� ���ðڽ��ϱ�?\n\n");
				scanf("%d", &back);
				if (back == 0) {
					printf("�ڷ� ���ϴ�.\n\n\n\n");
					Sleep(1000);
					pianocat[i] = 0;
					break;
				}
				else {
					printf("��ġĵ!\n\n");
					if (cancze > 0) {
						Sleep(2000);
						printf("��ġĵ�� �ֽðڽ��ϱ�?\n\n");
						Sleep(1000);
						printf("Y        N\n\n");
						scanf("%S", &answer);
						if (answer == 'Y') {
							printf("��ġĵ�� �Ѱ��־����ϴ�\n\n");
							Sleep(200);
							printf("�ǾƳ�Ĺ%d�����̿ö����ϴ�!!\n\n", 3);
							Sleep(2000);
							level += 3;
							pianocat[i] = 0;
							printf("3���� �������ϴ�.\n\n");
							Sleep(2000);
							day += 3;
							disday += 3;
							cancze--;
							end++;
							pianocat[i] = 0;
							break;
						}
						if (answer == 'N') {
							printf("��ġĵ�� �����ʾҽ��ϴ�.\n\n");
							Sleep(2000);
							printf("�ǾƳ�Ĺ�� ���� ȭ�� ������ �����մϴ�\n\n");
							printf("�ǾƳ�Ĺ %d������ ���������ϴ�...\n\n", -1);
							Sleep(2000);
							level -= 1;
							printf("3���� �������ϴ�.\n\n");
							Sleep(2000);
							day += 3;
							disday += 3;
							pianocat[i] = 0;
							end++;
							break;
						}
					}
					else if (cancze <= 0) {
						printf("��ġĵ�� �����ϴ�..!\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ��븦 �ѹ��� ���ʶ߷Ⱦ��!\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ������ �����ϴ�");
						for (int i = 1000;i > 0;i--) {
							printf("!");
							Sleep(i);
						}
						printf("\n\n����� ������ �¾ҽ��ϴ�\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ������ %d ���������ϴ�..\n\n",4);
						printf("3���� �������ϴ�.\n\n\n\n");
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
				printf("�ڷ� ���ðڽ��ϱ�?\n\n");
				scanf("%d", &back);
				if (back == 0) {
					printf("�ڷ� ���ϴ�.\n\n\n\n");
					Sleep(1000);
					pianocat[i] = 0;
					break;
				}
				
				else {
					printf("\n\n");
					printf("��ݢ�\n\n");
					Sleep(2500);
					if (level >= 10) {
						printf("�ǾƳ�Ĺ�� ���� ��ϴ�.\n\n");
						Sleep(2000);
						printf("������� ȯȣ���մϴ�");
						for (int i = 100;i > 0;i--) {
							printf("!");
							Sleep(i);
							i -= 10;

						}
						printf("\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ������ %d��ŭ �ö󰩴ϴ�.\n\n", 3);
						Sleep(2000);
						day += 2;
						disday += 3;
						cancze += 3;
						printf("2���� �������ϴ�.\n\n");
						Sleep(2000);
						end++;
						break;
					}

					else {
						printf("�ǾƳ�Ĺ�� .\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ������ %d��ŭ �����߽��ϴ�\n\n", 3);
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
						printf("2�� �������ϴ�.\n\n");
						Sleep(2000);
						break;
					}
				}

			}
			else if (pianocat[i] == 'g') {
			zingun = 0;
			printf("�ڷ� ���ðڽ��ϱ�?\n\n");
			scanf("%d", &back);
			if (back == 0) {
				printf("�ڷ� ���ϴ�.\n\n\n\n");
				Sleep(1000);
				pianocat[i] = 0;
				break;
			}
			else {
				printf("�ｺ������ ���ϴ�.");
				for (int j = 0;j < 6;j++) {
					printf(".");
					Sleep(1500);
				}
				printf("\n\n");
				printf("��� �����մϴ�.");
				for (int e = 0;e < 7;e++) {
					printf(".");
					Sleep(1500);
				}
				printf("\n\n");
				printf("�ǾƳ�Ĺ�� �߷��� �þ ������ �޾� �ູ���մϴ�!!!.\n\n");
				Sleep(2000);
				printf("�ǾƳ�Ĺ������ %d��ŭ �ö����ϴ�!!\n\n", 10);
				Sleep(2000);
				printf("20�� �������ϴ�.\n\n\n\n", 20);
				Sleep(1500);
				day += 20;
				disday += 20;
				level += 10;
				break;
			}
			}
			else if (pianocat[i] == '!') {
			zingun = 0;
			printf("�ڷ� ���ðڽ��ϱ�?\n\n");
			scanf("%d", &back);
			if (back == 0) {
				printf("�ڷ� ���ϴ�.\n\n\n\n");
				Sleep(1000);
				pianocat[i] = 0;
				break;
			}
			else {
				printf("���α׷��� �����մϱ�?\n\n");
				Sleep(5000);
				printf("Y        N\n\n");
				scanf("%S", &gm);

				if (gm == 'N') {
					printf("�ڷΰ��ϴ�.\n\n");
					Sleep(1000);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

					break;
				}
				else if (gm == 'Y') {
					printf("�����մϴ�\n\n");
					exit = 100;
					return 0;
				}
			}
			}
			else if (pianocat[i] == 'd') {
			zingun = 0;
							printf("�ڷ� ���ðڽ��ϱ�?\n\n");
							scanf("%d", &back);
							if (back == 0) {
								printf("�ڷ� ���ϴ�.\n\n\n\n");
								Sleep(1000);
								pianocat[i] = 0;
								break;
							}
							else {
								printf("����!\n\n");
								Sleep(2000);
								printf("������ ����Ͻðڽ��ϱ�?\n\n");
								Sleep(2000);
								printf("Y              N\n\n");
								Sleep(2000);
								scanf("%S", &koe);
								Sleep(2000);
								if (level < 25) {
									printf("������ ���� ���� �ʽ��ϴ�\n\n");
									Sleep(2000);
									printf("�ǾƳ�Ĺ�� ��Ʈ������ �޽��ϴ�...!\n\n");
									Sleep(2000);
									printf("�ǾƳ�Ĺ ������ %d���������ϴ�....\n\n", 2);

									printf("3���� �������ϴ�.\n\n");
									Sleep(2000);
									level -= 2;
									day += 3;
									disday += 3;
									pianocat[i] = 0;
									break;
								}

								else {
									if (koe == 'Y') {
										printf("���� �����\n\n");
										Sleep(2000);
										for (int doea = 0;doea <= 5;doea++) {
											printf(".");
										}
										printf("�������� �׾���ϴ�..\n\n");
										Sleep(2000);
										for (int doea = 0;doea <= 5;doea++) {
											printf(".");
										}
										printf("�ǾƳ�Ĺ�� �ູ�� �����ϴ�!!\n\n");
										Sleep(2000);
										printf("�ǾƳ�Ĺ ������ %d�ö󰬽��ϴ�!!\n\n", 15);
										Sleep(2000);
										printf("10���� �������ϴ�.\n\n");
										Sleep(2000);
										level += 15;
										day += 10;
										disday += 10;
										pianocat[i] = 0;
										break;






									}
									else if (koe == 'N') {
										printf("�������� �ູ�� �մϴ�.\n\n");
										Sleep(2000);
										printf("1���� �������ϴ�\n\n");
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
			printf("�ڷ� ���ðڽ��ϱ�?\n\n");
			scanf("%d", &back);
			if (back == 0) {
				printf("�ڷ� ���ϴ�.\n\n\n\n");
				Sleep(1000);
				pianocat[i] = 0;
				break;
			}
			else {
				printf("�귿!\n\n");
				Sleep(1000);
				printf("���ư���!\n\n");
				for (int q = 0;q < 5;q++) {
					printf(".");
					Sleep(1000);

				}

				Sleep(1000);

				printf("\n\n");
				if (random == 0) {
					printf("����ƾ!!!!!\n\n");
					Sleep(2000);
					printf("�ǾƳ�Ĺ�� �߷��� �ö󰩴ϴ�!\n\n");
					Sleep(2000);
					printf("�ǾƳ�Ĺ�� ����� �ſ� �������ϴ�!!\n\n");
					Sleep(2000);
					printf("�ǾƳ�Ĺ�� ������ %d�� �ö����ϴ�!!!\n\n", 20);
					Sleep(2000);
					ango++;
					level += 20;




				}
				else if (random == 1) {
					printf("Ȳ�� ��ġĵ!\n\n");
					Sleep(2000);
					printf("�ǾƳ�Ĺ�� Ȳ�� ��ġĵ�� �Խ��ϴ�!\n\n");
					Sleep(2000);
					printf("�ǾƳ�Ĺ�� ����� �������ϴ�!!\n\n");
					Sleep(2000);
					printf("�ǾƳ�Ĺ�� ������ %d�� �ö����ϴ�!!!\n\n", 10);

					level += 10;
					ango++;
					Sleep(1000);


				}
				else if (random == 2) {
					printf("��Ű�����!\n\n");
					if (level > 5) {
						printf("�ߴ���");
						for (int i = 0;i < 4;i++) {
							printf("!");
							Sleep(2000);
						}
						printf("\n");
						printf("�ǾƳ�Ĺ�� �ູ�� �մϴ�!\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ����� ���������ϴ�...!\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ������ %d�� �ö����ϴ�!!", 5);
						Sleep(2000);
						level += 5;
						ango++;


					}
					else {
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ��Ű������� ��ϴ�!\n\n");
						Sleep(2000);
						for (int i = 0;i < 5;i++) {
							printf(".");
							Sleep(300);
						}
						printf("\n\n");
						printf("�ǾƳ�Ĺ�� ����� �������ϴ�..!");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ������ %d�� �ö󰩴ϴ�!!\n\n", 2);
						Sleep(2000);
						level +=2;
						ango++;
					}
				}
				else if (random == 3) {
					printf("�׷���!\n\n");
					Sleep(2000);
					if (level > 25) {
						printf("Ʈ��Ŀ�� �����!\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ������ Ǯ�ȴ�!!\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ��� ���� ��������!!!\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ������ %d �ö󰩴ϴ�!!!!\n\n", 4);
						level += 4;
						ango++;
					}
					else {
						printf("Ʈ��Ŀ�� �ļյǾ���!\n\n");
						Sleep(2000);
						for (int i = 0;i < 4;i++) {
							printf(".");
							Sleep(5000);
						}
						printf("\n");
						printf("�ǾƳ�Ĺ�� �ش�� �ϰ��ִ�!!!\n\n");
						Sleep(2000);
						for (int i = 0;i < 10;i++) {
							printf("!");
								Sleep(300);
						}
						Sleep(700);
						printf("�ǾƳ�Ĺ�� ����� ��û���� �ٿ�Ǿ���...");
						printf("�ǾƳ�Ĺ�� ������ %d�� �������ϴ�...\n\n", 10);
						Sleep(2000);
						level -= 10;
						ango++;
					}
				}
				else if (random == 4) {
					printf("�ֱ�!\n\n");
					Sleep(2000);
					printf("������� ȯȣ�� �մϴ�!!\n\n");
					if (level > 40) {
						printf("�ǾƳ�Ĺ�� ����Ÿ�ӿ� ���� ������ ������ϴ�!\n\n");
						Sleep(2000);
						printf("�ǾƳ�Ĺ�� ���� ������ �����ϴ�!\n\n");

					}
					else {
						if (ango == 0) {
							printf("�׷��� �ǾƳ�Ĺ�� ����Ÿ���� ����ã�ƿɴϴ�...\n\n");
							Sleep(2000);
							printf("�ǾƳ�Ĺ�� ������ %d�� �������ϴ�...\n\n", 1);
							Sleep(2000);
							level -= 1;
							ango--;
						}
						else {
							printf("�ǾƳ�Ĺ�� ����Ÿ���� ã�ƿԽ��ϴ�...!\n\n");
							Sleep(2000);
							printf("�ؽ��� ����Ÿ������ ���� ���� �ٿ�˴ϴ�.....\n\n");
							Sleep(2000);
							printf("�ǾƳ�Ĺ�� ������ %d�� �������ϴ�.....!\n\n", 20);
							Sleep(2000);
							level -= 20;
							ango++;
						}

					}
				}
				printf("2���� �������ϴ�.\n\n");
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
			printf("�ڷ� ���ðڽ��ϱ�?\n\n");
			scanf("%d", &back);
			if (back == 0) {
				printf("�ڷ� ���ϴ�.\n\n\n\n");
				Sleep(2000);
				pianocat[i] = 0;
				break;
			}
			else {
				printf("��ɾ�� cat,hun,*,!,dogo,random,gym ���ֽ��ϴ�.\n\n");
				Sleep(2000);
				printf("��ɾ��� ������ ���ðڽ��ϱ�?\n\n");
				Sleep(2000);
				printf("���Ŵٸ� 1 �� �Է����ּ���.�ƴ϶�� 0�� �Է����ּ���\n\n");
				Sleep(2000);
				scanf("%d", &monpong);
				printf("\n\n"
				);
				Sleep(2000);
				if (monpong == 1) {
					printf("cat�� ��Ʈ�� ����ϸ� ������ 1�����մϴ�.\n\n");
					Sleep(2000);
					printf("hun�� �ǾƳ�Ĺ���� ��ġĵ�� �ټ��ֽ��ϴ�. ��信 ���� ������ �����մϴ�.\n\n");
					Sleep(2000);
					printf("*�� ����Դϴ�.��Ȳ������ ������ �����մϴ�.\n\n");
					Sleep(2000);
					printf("!�� ������ ��ư�Դϴ�. ���α׷��� �����ϰ������ ����Ͻø�˴ϴ�.\n\n");
					Sleep(2000);
					printf("dogo�� ���״�� ���� ȣ���Դϴ�. �̰� ���� ��Ȳ������ ������ �����Ҽ� �ֽ��ϴ�!\n\n");
					Sleep(2000);
					printf("random�� �귿�Դϴ�. �귿 �׸񿡴� ����ƾ,��ġĵ,�׷���,��Ű�����,�ֱ����ֽ��ϴ�. �� �ൿ������ ������ �����մϴ�!\n\n ���� �귿�� �ʹ� ���� �����ٸ� ���� ���ᰡ�Ǵ� �������ּ���!");
					Sleep(2000);
					printf("\n\ngym�� ������� �ｺ�忡���ϴ�! �ｺ���̴� �ǾƳ�Ĺ�� ������ �����ϰ���?!\n\n");
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
			printf("���! ����� vip���̶����! �Ƹ� ���ڵ� �˰��ִ� ����� Ĺ���ۿ���������!\n\n");
			Sleep(2000);
			printf("���⼭�� �����̶���� ��ġĵ,�귿ȸ��,���� �ø��ų� ���ϼ��־�!\n\n");
			Sleep(2000);
			printf("���� �������ε� �����־�! ������ ���������(��������) 1�������ְ� �ƴϸ� 0�� �Է�����!\n\n");
			scanf("%d", &hidden);
			printf("\n\n");
			Sleep(2000);
			if (hidden == 1) {
				printf("������ �� 4��! �귿 �ߵ�����,��忣�� 1���� �Ϲݿ��� 1�� ������ 1�����־�!\n\n");
				Sleep(2000);
				printf("�귿�������� ������ 1 ��忣����2 �Ϲݿ����� 3 �������� 4�� �Է�����!\n\n");
				scanf("%d", &ending);
				Sleep(2000);
				printf("������ ������ ��Ȳ���� �Ȱ��� �ٽ� �����ϸ��!! ��¡?!\n\n ���� �ߺ���!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				Sleep(4000);
				break;
			}
			else {
				printf("��ġĵ�� ���������ϰ������ 1�� �귿ȸ���� 2��! ������ 3�� �Է����ְ�! ������ 4�� �Է�����\n\n");
				Sleep(2000);
				scanf("%d", &wering);
				if (wering == 1) {
					Sleep(2000);
					printf("��ġĵ�� ������ �󸶷� �����ҷ�? ����ٰ� ����g ��ġĵ ������ ���ò���!\n\n");
					scanf("%d", &cancze);
					Sleep(2000);
					printf("��ġĵ ������%d��ŭ ���!\n\n\n\n",cancze);
					break;
				}
				else if (wering == 2) {
					printf("�귿ȸ���� ��� ��������? ����ٰ� ������ �귿 ȸ���� �þ����!\n\n");
					scanf("%d", &end);
					printf("�귿ȸ���� %d�� ���!",end);
					break;
				}
				else if (wering == 3) {
					printf("������ ��������� �غ���? ����� ������ ������ �Է��Ѹ�ŭ �ö󰥲���!\n\n");
					Sleep(2000);
					printf("�������� ���� 100�̻������ϸ� �ٷ� �������� �������־�! �װ� �����ؾ���!\n\n");
					scanf("%d", &level);
					printf("������ %d��ŭ �ö���!\n\n\n\n", level);
					break;

				}
				else if (wering == 4) {
					printf("������ ������ �ٲ� ���ٸ��� �ֱ���! �װ� ���� �˾Ƽ� ã�Ƣa!\n\n");
					Sleep(2000);
					printf("����ٰ� �Է��ϸ� ���ϸ�ŭ ������! �� �ִ��� �����ִ� ���� 30���̾�! ����������� �ݺ��آa...!\n\n");
					Sleep(2000);
					scanf("%d", &ead);
					day += ead;

					printf("������ %d��ŭ �����߾�!\n\n\n\n", ead);
					break;
				}
				pianocat[i] = 0;
			}
}
			else if (pianocat[i] == '$') {
			
			printf("���� �������ִ� �귿��ȸ�� ħġĵ ������ %d %d�Դϴ�\n\n", random, cancze);
			Sleep(5000);
			zingun = 0;
			pianocat[i] = 0;
			break;
}
			else if (pianocat[i] == 'w') {
			printf("���� ������ %d���� �Դϴ�!!\n\n\n\n", disday);
			Sleep(2000);
			break;
}
			else if (pianocat[i] == 'l') {
			







                                           }



			else {
				printf("�߸��Է��ϼ̽��ϴ�.\n\n\n\n\n\n");
				zingun++;
				pianocat[i] = 0;
				break;
			}
		}
	}
}