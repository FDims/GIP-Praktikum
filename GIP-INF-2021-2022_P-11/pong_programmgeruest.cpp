// Datei: pong.cpp

#define CIMGGIP_MAIN
#include "CImgGIP06.h"
using namespace std;

int main()
{
	// F�r das "blaue Spielfeld" ...
	const unsigned int x0 = 100, y0 = 100;
	const unsigned int x1 = 500, y1 = 500;
	// F�r Position und Ausdehnung des wei�en Balls ...
	int xb = 200, yb = 300;
	const int ball_size = 10;
	// Geschwindigkeit des Balls ...
	int delta_x = -3, delta_y = -3;
	// Ausdehnung und Position des Schlaegers ...
	const int schlaeger_size_x = 50, schlaeger_size_y = 20;
	int xs = 300, ys = y1 - schlaeger_size_y;

	gip_white_background();
	while (gip_window_not_closed())
	{
		// Sp�ter n�tig, damit die Graphik "schneller" wird �
		// gip_stop_updates();

		// Blaues "Spielfeld" neu zeichnen ...

		// Ball zeichnen ...

		// Schlaeger zeichnen ...

		// Schlaeger verschieben ...

		// Falls der Schl�ger au�erhalb des Spielfelds => zur�cksetzen ...

		// Ball-Kollisionen mit dem Rand ...

		// Kollision mit Schlaeger ...

		// Unterer Rand erreicht => Abbruch

		// Bewege Ball ...

		// Sp�ter n�tig, damit die Graphik "schneller" wird �
		// gip_start_updates();

		// Sp�ter n�tig, wenn die Graphik "auf schneller gestellt" ist:
		// Etwas Pause, damit das Spiel nicht zu schnell l�uft ...
		// gip_wait(50);
	}
	return 0;
}
