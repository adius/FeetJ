#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include "bass/bass.h"
#include "songlist.h"

#include <iostream>

class Player : public QObject
{
	Q_OBJECT

	public:
		Player();
//		Q_INVOKABLE void playA();
//		Q_INVOKABLE void playB();
		void playTrack(int track);
		void setTrack(int track, Song s);
		void setTrackVolume(int track, float vol);
		SongList lib;

	public slots:
		void testSlot();

	private:
		HSTREAM trackA;
		HSTREAM trackB;
		HSTREAM* getTrackByNo(int n);
};

#endif // PLAYER_H
