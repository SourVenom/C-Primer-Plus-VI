#include "../stdafx.h"
#include "Chapter_9_Functions.h"

/*
Dany jest plik nag��wkowy:
golf.h -- do pe9-1.cpp

coznst int Len=40;
struct golf
{
 char fullname[Len];
 int handicap;
};

//wersja nieinteraktywna
//funkcja ustawia w strukturze golf zadane nazwisko i handicap
//na podstawie argument�w wywo�ania
voit setgolf(golf & g, const char * name, int hc);

//wersja interaktywna
// Funkcja pobiera nazwisko i warto�� handicapu od u�ytkownika
// i ustawia pola struktury g zgodnie z pobranymi warto�ciami;
// zwraca 1, je�li uda�o si� odczyta� z wej�cia warto�� pola name, 
//albo 0, kiedy pole name jest ci�giem pustym
void setgolf(golf & g);

//ustawia handicap gracza
void handicap(golf & g, int hc);

//wy�wietla zawarto�� p�l struktury golf
void showgolf(const golf & g);

Zauwa� �e funkcja setgolf() zosta�a przeci��ona. Zastosowanie jej pierwszej wersji wygl�da�oby
nast�puj�co:
golf ann;
setgolf(ann, "Ann Birdfree", 24);
Wywo�anie funkcji zawiera informacje umieszczane w polach struktury ann. W przypadku drugiej
wersji funkcji setgolf() wygl�da�oby to raczej tak jak poni�ej:
golf andy;
setgolf(andy);
Funkcjia samodzielnie zapyta u�ytkownika programu o warto�ci dla p�l struktury, odczyta je z wej�cia
i zapisze w polach struktury andy. Ta funkcja mog�aby (ale niekoniecznie) odwo�ywa� si� wewn�tznie 
do pierwszej wersji funkcji.

Z�� na bazie takiego nag��wka program wieloplikowy. Jeden z plik�w o nazwie golf.cpp
powinien zawiera� definicje odpowiadaj�ce prototypom z pliku nag��wkowego. Drugi plik
powinien zawiera� funkcj� main() i demonstrowa� wszystkie mo�liwo�ci zastosowaniia funkcji 
prototypowanych w pliku nag��wkowym. Mo�esz na przyk�ad zastosowa� p�tl� w kt�rej 
u�ytkownik wprowadza�by dane dla tablicy struktur golf, przerywan� po wyczerpaniu tablicy
b�d� wprowadzeniu w roli nazwiska gracza ci�gu pustego. Do obs�ugi struktury golf funkcja
main() powinna stosowa� jedynie funkcje prototypowane w pliku nag��wkowym.
*/



int Chapter_9_Assignment1()
{
	//TODO
	std::cout << "\aNothing to see here (YET), move along.\n" << std::endl;
	_getch();
	return 0;
}

//date of creation: 18.08.2017
//Created by: Marcin Nowak