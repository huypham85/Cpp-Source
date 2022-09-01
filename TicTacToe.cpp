#include <iostream>
#include <Windows.h>
using namespace std;
char Omatrix[3][3] = { '1', '2', '3','4', '5','6','7','8','9' };
char matrix[3][3] = { ' ', ' ', ' ',' ', ' ',' ',' ',' ',' ' };
char player = 'X';
void gotoXY (int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void Nocursortype()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}
void draw() {
	cout << " TIC TAC TOE " << endl << "developed by Huypham"<<endl<<endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			textcolor(4);
			cout << "|" << Omatrix[i][j];
		}
		cout << "|" << endl;
	}
	textcolor(3);
	cout << "----------------------------" << endl << "Watch the live view: " << endl<<endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			textcolor(10);
			cout <<"|"<<matrix[i][j];
		}
		cout << "|"<< endl;
	}
}
void toggle() {
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
void input() {
	int number;
	textcolor(5);
	cout <<endl<< "INSERT A NUMBER :";
	cin >> number; 
	if (number < 1 || number>9) {
		textcolor(4);
		cout << "invalid number, please re-insert!!!";
		toggle();
		Sleep(2000);
	}
	if (number == 1&& matrix[0][0] ==' ')
		matrix[0][0] = player;
	else if (number == 2 && matrix[0][1] == ' ')
		matrix[0][1] = player;
	else if (number == 3 && matrix[0][2] == ' ')
		matrix[0][2] = player;
	else if (number == 4 && matrix[1][0] == ' ')
		matrix[1][0] = player;
	else if (number == 5 && matrix[1][1] == ' ')
		matrix[1][1] = player;
	else if (number == 6 && matrix[1][2] == ' ')
		matrix[1][2] = player;
	else if (number == 7 && matrix[2][0] == ' ')
		matrix[2][0] = player;
	else if (number == 8 && matrix[2][1] == ' ')
		matrix[2][1] = player;
	else if (number == 9 && matrix[2][2] == ' ')
		matrix[2][2] = player;
	else {
		textcolor(4);
		cout << "invalid number, please re-insert!!!";
		toggle();
		Sleep(2000);
	}
}
char check() {
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
}
int main() {
	int i=1;
	while(i<=10){
		textcolor(4);
		Nocursortype();
		gotoXY(3,12);
		cout<<"                                                   TIC TAC TOE";
		Sleep(500);
		system("cls");
		Sleep(100);
		i++;
	}
	while (1) {
		draw();
		input();
		toggle();
		system("cls");
		if (check() == 'X') {
			textcolor(6);
			cout << "X-player wins!!!"<<endl<<endl;
			break;
		}
		else if (check() == 'O') {
			textcolor(6);
			cout << "O-player wins!!!"<<endl<<endl;
			break;
		}
	}
	return 0; 
}

