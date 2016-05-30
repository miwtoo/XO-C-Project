#include <stdio.h>

char square[10] ={'0', '1', '2', '3',
                       '4', '5', '6',
                       '7', '8', '9',};

void board();
int checkwin();
int ai(int num);

int main(){
    int count = 1, num, player;
    char mark;


    printf("\n\n\t   XO by Miwtoo\n\n\n");
    printf("\t              \n");
    printf("\t\n");
    printf("\t     %c | %c | %c  \n", '1', '2', '3');
    printf("\t    ---+---+---\n");
    printf("\t     %c | %c | %c  \n", '4', '5', '6');
    printf("\t    ---+---+---\n");
    printf("\t     %c | %c | %c  \n", '7', '8', '9');
    printf("\t\n\n\n");

    printf("Press any key to continue...\n");
    getch();
    system("cls");

    do{
        player = (count%2 == 1) ? 1:2;
        mark = (player == 1) ? 'X':'O';
        board();

        printf("Round %d\n\n", count);

        if(player == 1){
            printf("Player %d(%c) : ",player,mark);
            scanf("%d", &num);
        }
        else{
            num = ai(num);
        }

        if(num == 1 && square[1] == '1'){
            square[1] = mark;
        }
        else if(num == 2 && square[2] == '2'){
            square[2] = mark;
        }
        else if(num == 3 && square[3] == '3'){
            square[3] = mark;
        }
        else if(num == 4 && square[4] == '4'){
            square[4] = mark;
        }
        else if(num == 5 && square[5] == '5'){
            square[5] = mark;
        }
        else if(num == 6 && square[6] == '6'){
            square[6] = mark;
        }
        else if(num == 7 && square[7] == '7'){
            square[7] = mark;
        }
        else if(num == 8 && square[8] == '8'){
            square[8] = mark;
        }
        else if(num == 9 && square[9] == '9'){
            square[9] = mark;
        }
        else{
            while(num >= 9){
                printf("Please Enter number 1-9!!\n");
                printf("Player %d : ",player);
                scanf("%d", &num);
            }
        }

        count++;
        system("cls");
    }while(checkwin() != 1);

    board();
    printf("Player %d Win!!!\n",player);
    getch();

    return 0;
}

void board(){
    printf("\n\n\t   XO by Miwtoo\n\n\n");
    printf("\t              \n");
    printf("\t\n");
    printf("\t     %c | %c | %c  \n", square[1], square[2], square[3]);
    printf("\t    ---+---+---\n");
    printf("\t     %c | %c | %c  \n", square[4], square[5], square[6]);
    printf("\t    ---+---+---\n");
    printf("\t     %c | %c | %c  \n", square[7], square[8], square[9]);
    printf("\t\n\n\n");
}

int checkwin(){
    if(square[1] == square[2] && square[2] == square[3]){
        return 1;
    }
    else if(square[4] == square[5] && square[5] == square[6]){
        return 1;
    }
    else if(square[7] == square[8] && square[8] == square[9]){
        return 1;
    }
    else if(square[1] == square[4] && square[4] == square[7]){
        return 1;
    }
    else if(square[2] == square[5] && square[5]== square[8]){
        return 1;
    }
    else if(square[3] == square[6] && square[6] == square[9]){
        return 1;
    }
    else if(square[1] == square[5] && square[5] == square[9]){
        return 1;
    }
    else if(square[3] == square[5] && square[5] == square[7]){
        return 1;
    }
    else if(square[1] == '1' && square[2] == '2' && square[3] == '3' && square[4] == '4' && square[5] == '5' && square[6] == '6' && square[7] == '7' && square[8] == '8' && square[9] == '9'){
        return 0;
    }
    else {
        return 0;
    }
}

int ai(int num){
    num = rand()%10;
}


