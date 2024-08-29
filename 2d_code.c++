
#include <iostream>
#include <time.h>

using namespace std;


class Tic_Tac_Toe{
	
	
	private:
		char board[3][3];
		char player;
		
	public:
		
		void Create_Board(){
			
			cout << "   ****************" << endl;
        	for (int i = 0; i < 3; i++) {
            cout << "   | ";
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << "  | ";
            	}
            cout << endl << "   ****************" << endl;
        	}
    	}
    	
    	void Create_Spaces(){
    		for (int i = 0; i < 3; i++) {
            	for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            	}
        	}	
		}
        
        void Choose_Player(){
        	
        	srand(time(NULL));
        	int player_options[2] = {1, 2};
        	player = player_options[rand() % 2];
        	if (player == 1) {
            	cout << "\nComputer plays first!" << endl;
        	} else if (player == 2) {
            	cout << "\nYou play first!" << endl;
        	}
    	}
	
		
		void Switch_to_User(){
    		if (player == 1){
    			player = 2;
			}
		}
		
		void Switch_to_Computer(){
			if (player == 2){
				player = 1;
			}
		}

		
		void Choose_Move(){
			int row;
			int column;
			
			while (true){
				if (player == 2){
					cout << "\nYour move:" << endl;
					cout << "What row? (0-2)" << endl;
					cin >> row;
					cout << "What column? (0-2)" << endl;
					cin >> column;
					if ((0 <= row) && (row < 3) && (0 <= column) && (column < 3) && board[row][column]== ' ') {
						board[row][column]='X';
						Switch_to_Computer();
						break;	
					}
					else{
						cout << "Invalid. Choose again." << endl;
					}
				}
			
				else if (player == 1){
					char row_column_choice[3] = {0, 1, 2};
					row = row_column_choice[rand()%3]; 
					column = row_column_choice[rand()%3];
					if ((0 <= row) && (row < 3) && (0 <= column) && (column < 3) && board[row][column]== ' ') {
						cout << "\nComputer's move:" << endl;
						board[row][column]='O';
						Switch_to_User();
						break;
					}	
				}		
			}
			
		}
		
		
		int Full_Board(){
			bool Full = true;
			for (int i = 0; i<3; i++){
				for (int j = 0; j<3; j++){
					if (board[i][j]==' '){
						Full = false;
						break;
					}
				}
			}
			if (Full){
				cout << "Board is full. It's a draw. End of game." << endl;
				return 1;
			}
		}
		
		
		int Check_if_Win(){
			for (int i = 0; i<3; i++){
				if (board[i][0]=='X' && board[i][1]=='X' && board[i][2]=='X'){
					cout << "You won!" << endl;
					return 1;
				}
				if (board[i][0]=='O' && board[i][1]=='O' && board[i][2]=='O'){
				
					cout << "Computer won!" << endl;
					return 1;
				}
				if (board[0][i]=='X' && board[1][i]=='X' && board[2][i]=='X'){
				
					cout << "You won!" << endl;
					return 1;
				}
				if (board[0][i]=='O' && board[1][i]=='O' && board[2][i]=='O'){
				
					cout << "Computer won!" << endl;
					return 1;
				}
	
			
			if (board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X'){
			
				cout << "You won!" << endl;
				return 1;
			}
			if (board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O'){
				
				cout << "You won!" << endl;
				return 1;
			}
			if (board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X'){
				
				cout << "You won!" << endl;
				return 1;
			}
			if (board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O'){
				
				cout << "Computer won!" << endl;
				return 1;
			}

		}

	}
			
};


int main() {
    Tic_Tac_Toe play;
    play.Create_Spaces();
    play.Create_Board();
    play.Choose_Player();
    while (true){
    	play.Choose_Move();
    	play.Create_Board();
    	if (play.Check_if_Win() == 1){
    		break;
		};
		if (play.Full_Board() == 1){
			break;
		};	
	}
}
