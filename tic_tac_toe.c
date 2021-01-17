#include <stdio.h>
char box[9] = {'0','1', '2', '3', '4', '5', '6', '7', '8'};

int checkwin();
void creatingBoard();
void markingBoard(int,char);
int main() {
	int choice,mark,player=1,i,m;
	for(i=0; i<9; i++) {
		creatingBoard(box[i]);
		player=(player%2)?1:2;
		printf("player %d enter a no ",player);
		scanf("%d",&choice);
		mark=(player==1)?'x':'o';
		markingBoard(choice,mark);
		m=checkwin(mark);
		if (m==1) {
			creatingBoard(box[i]);
			printf("Player %d win ",player);
			break;
		}
		player++;
	}
	if (m==0)
		printf("Game draw");
	return 0;
}
void creatingBoard() {
        
	printf("\n\n\tTic Tac Toe  @ Created By Amit gusain @\n\n");
	printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c \n", box[0], box[1], box[2]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c \n", box[3], box[4], box[5]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c \n", box[6], box[7], box[8]);
	printf("     |     |     \n\n");
}
void markingBoard(int choice,char mark) {
	if (choice==0&&box[0]=='0')
		box[0]=mark;
	else if	(choice==1&&box[1]=='1')
		box[1]=mark;
	else if (choice==2&&box[2]=='2')
		box[2] = mark;
	else if (choice==3&&box[3]=='3')
		box[3]=mark;
	else if (choice==4&&box[4]=='4')
		box[4]=mark;
	else if (choice==5&&box[5]=='5')
		box[5]=mark;
	else if (choice==6&&box[6]=='6')
		box[6]=mark;
	else if (choice==7&&box[7]=='7')
		box[7]= mark;
	else if (choice==8&&box[8]=='8')
		box[8]=mark;

	else {
		printf("Invalid move ");
	}
}

int checkwin() {
	if (box[0]==box[1]&&box[1]==box[2])
		return 1;

	else if (box[3]==box[4]&&box[4]==box[5])
		return 1;

	else if (box[6]==box[7]&&box[7]==box[8])
		return 1;

	else if (box[0]==box[3]&&box[3]==box[6])
		return 1;

	else if (box[1]==box[4]&&box[4]==box[7])
		return 1;

	else if (box[2]==box[5]&&box[5]==box[8])
		return 1;

	else if (box[0]==box[4]&&box[4]==box[8])
		return 1;

	else if (box[2]==box[4]&&box[4]==box[6])
		return 1;

	else if (box[0]!='0'&&box[1]!='1'&&box[2]!='2'&&
	         box[3]!='3'&&box[4] != '4'&&box[5]!= '5'&& box[6]!='6'&&box[7]!='7'&&box[8]!='8')
		return 0;
	else
		return 0;
}


