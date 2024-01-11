// Projekt		øvelser 2. semester
//
// Fil			CircularBuffer-Point.h
//
// Beskrivelse	Interface til klassen CircularBuffer
//
// Forfatter	NVJ
//
// Version		1.1 - 120905 - ændret til at indeholde Point objekter

#pragma once

#include "Point.h"


class CircularBuffer
{
public:
	CircularBuffer( int=10 );
	CircularBuffer &insert( Point & );
	Point meanValue( ) const;
	void print( ) const;
	~CircularBuffer();
private:
	Point *arrayPtr_;
	int size_;
	int newestIndex_;
};