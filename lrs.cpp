#include <iostream>//C++�����������
#include <cstdlib>//ʹ��srand����Ҫ�õ������
#include <ctime>//ʹ��time����Ҫ�õ������
#include <Windows.h>
#include <conio.h>
using namespace std;

void brc() {
	system("cls");
	int jy = 1;
	int sy = 3;
	srand((int)time(0));
	int n = rand() % 15 + 1;
	cout << "                                ����" << n << "��" << endl;
	cout << "                               ���ڷ������" << endl;
	Sleep(1500);
	int m[20];
	for (int i = 1; i <= 15; i++)
		m[i] = 1;
	int s[20] = {0};
	int yy[20] = {0};
	int l = 0, w = 0, j = 0, p = 0;
	for (int i = 1; i <= 15; i++) {
		do {
			int a = rand() % 4 + 1;
			if (a == 1 && l < 2) {

				l++;
				s[i] = 1;
			} else if (a == 2 && w < 2) {
				w++;
				s[i] = 2;
			} else if (a == 4 && p < 1) {
				p++;
				s[i] = 4;
			} else if (a == 3 && j < 10) {
				j++;
				s[i] = 3;
			}
		} while (s[i] == 0);
	}
	if (s[n] == 1)
		cout << "                               ����>>ɱ��<<" << endl;
	else if (s[n] == 2)
		cout << "                               ����>>Ԥ�Լ�<<" << endl;
	else if (s[n] == 3)
		cout << "                               ����>>ƽ��<<" << endl;
	else
		cout << "                               ����>>Ů��<<" << endl;
	cout << "                             ��Ϸ����5���ʼ" << endl;
	Sleep(5000);
	int c = 15;
	int f = 0, flag = 0;
	int day = 1;
	int lr;
	int tp[20] = {0};
	do {
		lr = 0;
		system("cls");
		cout << "                                 ��" << day << "��ʼ" << endl;
		int x;
		for (int i = 1; i <= 15; i++) {
			if (i == n && m[n] == 1) {
				if (s[n] == 1) {
					cout << "                                 ����ɱ��" << endl;
					for (int j = 1; j <= 15; j++)
						if (m[j] == 1 && s[j] != 1)
							cout << j << " ";
					cout << endl;
					cout << "                                 ��ѡ��ɱ��" << endl;
					int a;
					cin >> a;
					m[a] = 0;
					cout << endl;
					cout << "                                 ɱ��ɱ��" << a << "��";
					if (s[a] == 1)
						cout << "(ɱ��)" << endl;
					else if (s[a] == 2)
						cout << "(Ԥ�Լ�)" << endl;
					else if (s[a] == 3)
						cout << "(ƽ��)" << endl;
					else
						cout << "(Ů��)" << endl;
					c--;
				} else if (s[n] == 2) {
					cout << "                                 ����Ԥ�Լ�" << endl;
					cout << "                               ";
					for (int j = 1; j <= 15; j++)
						if (m[j] == 1)
							cout << j << " ";
					cout << endl;
					cout << "                              ��ѡ��Ԥ��˭�����" << endl;
					int a;
					cin >> a;
					if (s[a] == 1) {
						cout << "                        " << a << "����ɱ�֣���ע��" << endl;
						Sleep(1000);
					} else
						cout << "                            " << a << "����ƽ��" << endl;
				}
			} else if (s[i] == 1 && m[i] == 1) {
				int a;
				do {
					a = rand() % 15 + 1;
				} while (a == i || m[a] == 0 || s[a] == 1);
				cout << "                           ɱ��ɱ����" << a << "��";
				if (s[a] == 1)
					cout << "(ɱ��)" << endl;
				else if (s[a] == 2)
					cout << "(Ԥ�Լ�)" << endl;
				else if (s[a] == 3)
					cout << "(ƽ��)" << endl;
				else
					cout << "(Ů��)" << endl;
				m[a] = 0;
				c--;
			} else if (s[i] == 2) {
				if (flag == 0 || m[flag] == 0) {
					int a;
					do {
						a = rand() % 15 + 1;
					} while (a == i || m[a] == 0);
					if (s[a] == 1)
						yy[a] = 1;
					else if (s[a] == 3)
						yy[a] = 3;
				}
			} else if (s[i] == 4) {
				f = 0;
				while (f == 0) {
					int a;
					a = rand() % 2 + 1;
					if (a == 1) {
						if (sy > 0) {
							sy--;
							f = 1;
							int b;
							do {
								b = rand() % 15 + 1;
								b = rand() % 15 + 1;
							} while (b == i || m[b] == 0);
							m[b] = 0;
							cout << "                           Ů�׶�����" << b << "��";
							if (s[b] == 1)
								cout << "(ɱ��)" << endl;
							else if (s[b] == 2)
								cout << "(Ԥ�Լ�)" << endl;
							else if (s[b] == 3)
								cout << "(ƽ��)" << endl;
							c--;
						}
					} else if (a == 2 && day > 1) {
						if (jy > 0) {
							jy--;
							f = 1;
							int b;
							do {
								b = rand() % 15 + 1;
							} while (b == i || m[b] == 1);
							c++;
							cout << "                           Ů�׸�����" << b << "��" << endl;
							m[b] = 1;
						}
					}

				}
			}
		}
		if (s[n] == 4) {
			cout << "                                 ����Ů��" << endl;
			cout << "���״����" << endl;
			for (int j = 1; j <= 15; j++)
				if (m[j] == 1)
					cout << j << " ";
			cout << endl;
			cout << "                        ��ѡ�� 1.* ɱ *���� 2.* �� *" << endl;
			int a, f = 0;
			while (f == 0) {
				cin >> a;
				if (a == 1) {
					if (sy > 0) {
						sy--;
						f = 1;
						cout << "                                ��ѡ����ɱ��" << endl;
						for (int i = 1; i <= 15; i++)
							if (m[i] == 1)
								cout << i << " ";
						cout << endl;
						int b;
						cin >> b;
						if (s[b] == 1)
							cout << "(ɱ��)" << endl;
						else if (s[b] == 2)
							cout << "(Ԥ�Լ�)" << endl;
						else if (s[b] == 3)
							cout << "(ƽ��)" << endl;
						else
							cout << "(Ů��)" << endl;
						m[b] = 0;
						c--;
					} else {
						cout << ">>��ҩ<<����" << endl;
					}
				} else if (a == 2) {
					if (jy > 0) {
						jy--;
						f = 1;
						cout << "��ѡ���˸���" << endl;
						cout << "����������" << endl;
						for (int i = 1; i <= 15; i++)
							if (m[i] == 0)
								cout << i << "��,���:" << s[i] << " " << endl;;
						int b;
						cin >> b;
						m[b] = 1;
						c++;
					} else {
						cout << ">>����ҩˮ<<����" << endl;
					}
				}
			}
		}


		Sleep(1000);
		double p[20] = {0};
		cout << "                                 ��" << day << "�����" << endl;
		cout << endl;
		if (m[n] == 0) {
			cout << "                             ���Ѿ�>>��<<��";
			break;
		}

		cout << "                                    ��" << endl;
		cout << "                       ";
		for (int i = 1; i <= 15; i++)
			if (m[i] == 1)
				cout << i << " ";
		cout << endl;
		cout << "                                    ��ͶƱ...." << endl;
		for (int i = 1; i <= 15; i++) {
			if (i == n && m[n] == 1) {
				cout << endl;
				cout << "                                 ��ѡ��Ͷ����" << endl;
				int a = 99;
				while (a == 99) {
					cin >> a;
					if (a == 99)
						for (int i = 1; i <= 15; i++)
							if (m[i] == 1)
								cout << "                                    " << i << "." << s[i] << endl;
				}
				if (s[i] == 3 && day > 4)
					p[a] += 1.5;
				else
					p[a]++;
				cout << endl;
				cout << "                                    " << i << "->" << a << endl;
				if (s[a] == 3) {
					tp[a] = i;
				}
			} else if (s[i] == 1 && m[i] == 1) {
				int a;
				do {
					a = rand() % 15 + 1;
				} while (m[a] == 0 || a == i || s[a] == 1);
				p[a]++;
				cout << "                                    " << i << "->" << a << endl;
				if (s[a] == 3) {
					tp[a] = i;
				}
			} else if (s[i] == 2 && m[i] == 1) {
				if (flag != 0) {
					p[f]++;
					cout << "                                    " << i << "->" << flag << endl;
				} else {
					int a;
					do {
						a = rand() % 15 + 1;
					} while (m[a] == 0 || a == i || yy[a] == 3);
					p[a]++;
					if (s[a] == 3) {
						tp[a] = i;
					}
					cout << "                                    " << i << "->" << a << endl;
				}
			} else if (s[i] == 3 && m[i] == 1) {
				if (tp[i] == 0) {
					int a;
					do {
						a = rand() % 15 + 1;
					} while (m[a] == 0 || a == i);
					p[a]++;
					cout << "                                    " << i << "->" << a << endl;
				} else {
					if (m[tp[i]] == 1) {
						p[tp[i]]++;
						cout << "                                    " << i << "->" << tp[i] << endl;
					} else {
						int a;
						do {
							a = rand() % 15 + 1;
						} while (m[a] == 0 || a == i);
						p[a]++;
						cout << "                                    " << i << "->" << a << endl;
					}
				}
			} else if (s[i] == 4 && m[i] == 1) {
				int a;
				do {
					a = rand() % 15 + 1;
				} while (m[a] == 0 || a == i);
				p[a]++;
				cout << "                                    " << i << "->" << a << endl;
			}
		}
		system("cls");
		cout << "                                 ͶƱ�����" << endl;
		for (int i = 1; i <= 15; i++)
			if (m[i] == 1)
				cout << "                                 " << i << "��" << "  Ʊ����" << p[i] << endl;
		int sw, max = -100;
		for (int i = 1; i <= 15; i++) {
			if (p[i] > max) {
				sw = i;
				max = p[i];
			}
		}
		m[sw] = 0;
		cout << "                                  " << sw << "����" << endl;
		c--;
		cout << "                              " << sw << "�ŵ������";
		if (s[sw] == 1)
			cout << "ɱ��" << endl;
		else if (s[sw] == 2)
			cout << "Ԥ�Լ�" << endl;
		else if (s[sw] == 3)
			cout << "ƽ��" << endl;
		else
			cout << "Ů��" << endl;
		day++;
		if (s[n] != 1) {
			for (int i = 1; i <= 15; i++)
				if (s[i] == 1 && m[i] == 1)
					lr = 1;
		} else {
			if (s[n] == 1 && c == 2)
				lr = 0;
		}
		system("pause");
		cout << endl;
	} while (m[n] == 1 && c > 1);
	cout << "                                             ��Ϸ����" << endl;
}

int main() {
	srand((int)time(0));
	char a = '1';
	while (1) {
		system("cls");
		cout << "                                   ɱ����Ϸ" << endl;
		cout << "--------------------------------------------------------------------------------";
		cout << "                                  1.��ʼ��Ϸ" << endl;
		cout << "                                2.�鿴��Ϸ����" << endl;
		a = getch();
		if (a == '1') {
			cout << "                                  1. 15�˳�" << endl;
			cout << "                           2. 30������ս(10����)<�����ڴ�>" << endl;
			a = '2';
			while (a == '2') {
				a = getch();
				switch (a) {
					case '1':
						brc();
						break;
				}
				if (a == '1')
					break;
			}
			if (a == '1')
				break;
		} else if (a == '2') {
			cout << "ɱ�֣�ÿ�����ϵ�ʱ���ʹ��ɱ��Ȩɱ��һ��" << endl; //1
			cout << "Ԥ�Լң�ÿ�����Ͽ���֪��һ���˵����" << endl; //2
			cout << "ƽ���޼���,�������ƽ��ʱ���ڵ�5��ӵ��1.5Ʊ��ͶƱȨ" << endl; //3
			cout << "���ˣ�����ݽ�����30�����־��У�������ɴ���һ��" << endl;
			cout << "ͶƱϸ��\n��Ϸ�г���������ȫ���ɳ���AI�˹�����" << endl;
			cout << "ɱ�ֲ���ɱ�����ѣ���������ͶƱ����" << endl;
			cout << "Ԥ�Լ����Ԥ�Ե�ɱ�ֽ�һֱ����ͶƱ�����Ԥ�Ե�ƽ����Զ�������ͶƱ" << endl;
			cout << "ƽ��Ͷ��һ�����϶���ͶƱ������" << endl;
			cout << "********���úó���AI��Ϸ�����ҳ�ɱ��**********" << endl;
			system("pause");
		}
	}
	return 0;
}