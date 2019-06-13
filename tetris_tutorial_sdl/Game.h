#ifndef _GAME_
#define _GAME_

// ------ Includes -----

#include "Board.h"
#include "Pieces.h"
#include "IO.h"
#include <time.h>


// ------ Defines -----

#define WAIT_TIME 700			// Number of milliseconds that the piece remains before going 1 block down */ 


// --------------------------------------------------------------------------------
//									 Game
// --------------------------------------------------------------------------------

class Game
{
public:

	Game			(Board *pBoard, Pieces *pPieces, IO *pIO, int pScreenHeight);

	void DrawScene ();
	void CreateNewPiece ();

	int mPosX, mPosY;				// Position of the piece that is falling down
	int mPiece, mRotation;			// Kind and rotation the piece that is falling down

private:

	int mScreenHeight;				// Screen height in pixels
	int mNextPosX, mNextPosY;		// Position of the next piece
	int mNextPiece, mNextRotation;	// Kind and rotation of the next piece

	
	Board *mBoard;
	Pieces *mPieces;
	IO *mIO;

	int GetRand (int pA, int pB);
	void InitGame();
	void DrawPiece (int pX, int pY, int pPiece, int pRotation);
	void DrawBoard ();
};

#endif // _GAME_
