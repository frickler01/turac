#ifndef PLAYER_H
#define PLAYER_H

/* PLAYER DATA TYPE
 *
 * Holds all properties of a player as well as a pointer to the next player.
 *
 * EXAMPLE
 * (attacking player "Foo", who didn't yet stop)
 * playerT playerFoo = {"Foo",&hand,FALSE,FALSE};
 *
 * NOTE
 * `stopF` has two meanings depending on the player's current role:
 * If a player is attacking or spectating,
 + `stopF == TRUE` means, he won't add any cards.
 * If a player is defending, `stopF == TRUE` means,
 + he gives up and takes all cards from the table.
 * `doneF` denotes if a player has finished the game.
 */

 #define ATT 1
 #define DEF -1
 #define SPEC 0

 #define TRUE 1
 #define FALSE 0

struct playerT
{
	char *name;
	stackT *hand;
	int stopF;
	int doneF;
	playerT *next;
};

typedef struct playerT playerT;

/* PLAYER FUNCTIONS */

// Allocate memory for player with given name and empty hand of given size
playerT *playerNew(char *name, int sizeHand);

// Free member and player memory
void playerDestroy(playerT **playerP);

// Set player state
void playerStart(playerT *playerP);
void playerStop(playerT *playerP);
void playerDone(playerT *playerP);

// Play a given cards from a players hand
// Just return a card
cardT *playCard(playerT *playerP, int numCard);

// Put given card in player's hand
void takeCard(playerT *playerP, cardT *cardP);

#endif // PLAYER_H