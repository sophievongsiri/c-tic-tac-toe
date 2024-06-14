#include <iostream>
#include <ctime>

using namespace std;

class Tic_Tac_Toe {
private:
    char board[3][3];

public:
	char player;
    void Create_Board() {
        cout << "   ****************" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "   | ";
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << "  | ";
            }
            cout << endl << "   ****************" << endl;
        }
    }

    void Create_Spaces() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }
    }

    void Choose_Player() {
        srand(time(NULL));
        player = (rand() % 2 == 0) ? '1' : '2';
        if (player == '1') {
            cout << "\nComputer plays first!" << endl;
        } else {
            cout << "\nYou play first!" << endl;
        }
    }

    void Switch_to_User() {
        if (player == '1') {
            player = '2';
        }
    }

    void Switch_to_Computer() {
        if (player == '2') {
            player = '1';
        }
    }

    void Choose_Move() {
        int row;
        int column;

        while (true) {
            if (player == '2') {
                cout << "\nYour move:" << endl;
                cout << "What row? (0-2)" << endl;
                cin >> row;
                cout << "What column? (0-2)" << endl;
                cin >> column;
                if ((0 <= row) && (row < 3) && (0 <= column) && (column < 3) && board[row][column] == ' ') {
                    board[row][column] = 'X';
                    Switch_to_Computer();
                    break;
                } else {
                    cout << "Invalid. Choose again." << endl;
                }
            } else if (player == '1') {
                row = rand() % 3;
                column = rand() % 3;
                if (board[row][column] == ' ') {
                    cout << "\nComputer's move:" << endl;
                    board[row][column] = 'O';
                    Switch_to_User();
                    break;
                }
            }
        }
    }

    int Full_Board() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    return 0;
                }
            }
        }
        cout << "Board is full. It's a draw. End of game." << endl;
        return 1; 
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
class Tic_Tac_Toe3D : public Tic_Tac_Toe {

public:
	char board3D[3][3][3];
	    
    void Create_Board() {
        for (int i = 0; i < 3; i++) {
            cout << "   ****************" << endl;
            for (int j = 0; j < 3; j++) {
                cout << "   | ";
                for (int k = 0; k < 3; k++) {
                    cout << board3D[i][j][k] << "  | ";
                }
                cout << endl << "   ****************" << endl;
            }
            cout << endl;
        }
    }

    void Create_Spaces() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    board3D[i][j][k] = ' ';
                }
            }
        }
    }

    void Choose_Move() {
        int layer;
        int row;
        int column;

        while (true) {
            if (player == '2') {
                cout << "\nYour move:" << endl;
                cout << "What layer? (0-2)" << endl;
                cin >> layer;
                cout << "What row? (0-2)" << endl;
                cin >> row;
                cout << "What column? (0-2)" << endl;
                cin >> column;
                if ((0 <= layer) && (layer < 3) && (0 <= row) && (row < 3) && (0 <= column) && (column < 3) && board3D[layer][row][column] == ' ') {
                    board3D[layer][row][column] = 'X';
                    Switch_to_Computer();
                    break;
                } else {
                    cout << "Invalid. Choose again." << endl;
                }
            } else if (player == '1') {
                layer = rand() % 3;
                row = rand() % 3;
                column = rand() % 3;
                if (board3D[layer][row][column] == ' ') {
                    cout << "\nComputer's move:" << endl;
                    board3D[layer][row][column] = 'O';
                    Switch_to_User();
                    break;
                }
            }
        }
    }

	void Check_if_Win() {
    	int user_score = 0;
    	int computer_score = 0;

    
   		for (int i = 0; i < 3; i++) {
        	for (int j = 0; j < 3; j++) {
            	if (board3D[i][j][0] == 'X' && board3D[i][j][1] == 'X' && board3D[i][j][2] == 'X') {
   	             	user_score++;
    	        } else if (board3D[i][j][0] == 'O' && board3D[i][j][1] == 'O' && board3D[i][j][2] == 'O') {
        	        computer_score++;
	            }
    	        if (board3D[i][0][j] == 'X' && board3D[i][1][j] == 'X' && board3D[i][2][j] == 'X') {
        	        user_score++;
            	} else if (board3D[i][0][j] == 'O' && board3D[i][1][j] == 'O' && board3D[i][2][j] == 'O') {
                	computer_score++;
	            }
    	    }
        	if (board3D[i][0][0] == 'X' && board3D[i][1][1] == 'X' && board3D[i][2][2] == 'X') {
            	user_score++;
 	        } else if (board3D[i][0][0] == 'O' && board3D[i][1][1] == 'O' && board3D[i][2][2] == 'O') {
  	          	computer_score++;
   	     	}
   	     	if (board3D[i][0][2] == 'X' && board3D[i][1][1] == 'X' && board3D[i][2][0] == 'X') {
            	user_score++;
        	} else if (board3D[i][0][2] == 'O' && board3D[i][1][1] == 'O' && board3D[i][2][0] == 'O') {
            	computer_score++;
        	}
   	 	}
   		for (int j = 0; j < 3; j++) {
        	for (int k = 0; k < 3; k++) {
            	if (board3D[0][j][k] == 'X' && board3D[1][j][k] == 'X' && board3D[2][j][k] == 'X') {
            	    user_score++;
            	} else if (board3D[0][j][k] == 'O' && board3D[1][j][k] == 'O' && board3D[2][j][k] == 'O') {
            	    computer_score++;
            	}
        	}
    	}

    	cout << "User Score: " << user_score << endl;
    	cout << "Computer Score: " << computer_score << endl;

    	if (user_score > computer_score) {
        	cout << "User won!" << endl;
    	} else if (user_score < computer_score) {
    	    cout << "Computer won!" << endl;
    	} else {
    	    cout << "It was a draw." << endl;
    	}
	}
	
	int Full_Board() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
            	for (int k = 0; k < 3; k++){
            		if (board3D[i][j][k] == ' ') {
                    return 0;
					}
                }
            }
        }
        cout << "Board is full. Retrieving score..." << endl;
        return 1; 
    }
};

int main() {
    Tic_Tac_Toe3D play;
    play.Create_Spaces();
    play.Create_Board();
    play.Choose_Player();
    while (true) {
        play.Choose_Move();
        play.Create_Board();
        if (play.Full_Board()==1){
        	play.Check_if_Win();
        	break;
		}
    }
}
    



