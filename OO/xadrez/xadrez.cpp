#include <iostream>
using namespace std;

class Piece {
    private:
        int row;
        int column;
        int color;

    public:
        Piece (int row, int column, int color) : row (row), column(column), color(color) {}

        int getRow() const {
            return row;
        }
        int getColumn() const {
            return column;
        }
        
        virtual bool canMove(int new_row, int new_column) = 0;

        int getColor () {
            return color;
        }
};

class Pawn : public Piece {
    public:
    Pawn (int row, int column, int color) : Piece (row, column, color) {}

    virtual bool canMove(int new_row, int new_column) {
        //aqui lógica para ver se o piano pode se mover para aquela posição 
        return true;
    }
};

class Rook : public Piece {
   public:
   Rook (int row, int column, int color) : Piece (row, column, color) {}
    
    virtual bool canMove(int new_row, int new_column) {
        //aqui lógica para ver se o piano pode se mover para aquela posição 
        return true;
    }
};

class Chess {
    private:
        Piece *board [8][8];
    public:
        Chess () {
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    board [i][j] = NULL;
                }
            }
            
            for (int j = 0; j < 8; j++) {
                board [1][j] = new Pawn(1, j, 0);
                board [6][j] = new Pawn(6, j, 1);
            }

            board [0][0] = new Rook(0, 0, 0);
            board [0][7] = new Rook(0, 7, 0);

            board [7][0] = new Rook(7, 0, 0);
            board [7][7] = new Rook(7, 7, 0);
        }

    void nextMove(int color) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] != NULL && board[i][j]->getColor() == color) {
                    //achei cor apropriada que pode se mover
                    for (int k = 0; k < 8; k++){
                        for (int l = 0; l < 8; l++) {
                            if (board [i][j] -> canMove(k, l)) {
                                //achei um movimento possível
                            }
                        }
                    }
                }
            }
        }
    }
};

int main () {
    return 0;
}