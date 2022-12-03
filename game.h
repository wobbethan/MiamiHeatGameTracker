#pragma once
#include<iomanip>
#include<iostream>
#include<String>
#include<vector>

using namespace std;

class game {

private:
	string homeTeam;
	string awayTeam;
	int homeScore;
	int awayScore;
	string mvp;
	int points;
	int assists;
	int rebounds;
	int blocks;
	int steals;
	int turnOvers;
	int fouls;
	double shootingPercent;
	int gameID;
	bool win = false;

public:

	game(string home, string away, int hScore, int aScore, string MVP, int p, int a, int r, int b, int s, int TO, int f, double sp, int _gameID) {

		this->homeTeam = home;
		this->awayTeam = away;
		this->homeScore = hScore;
		this->awayScore = aScore;
		this->mvp = MVP;
		this->points = p;
		this->assists = a;
		this->rebounds = r;
		this->blocks = b;
		this->steals = s;
		this->turnOvers = TO;
		this->fouls = f;
		this->shootingPercent = sp;
		this->gameID = _gameID;
		if (hScore > aScore) {
			this->win = true;
		}

	};

	int getGameID() {
		return this->gameID;
	}

	string getMVP() {
		return this->mvp;
	}

	void printData() {
		cout << "Game ID: " << this->gameID ;
		if (this->win == true)
			cout << "											    WIN\n";
		else
			cout << "											   LOSS\n";

		cout << this->homeTeam << " (" << this->homeScore << " points scored) vs. " << this->awayTeam << " (" << this->awayScore << " points scored)\n";

		cout << endl;
		cout << "Highest Performing Player: " << this->mvp << endl;
		cout << endl;
		cout << "Points Scored: " << this->points << " Assists " << this->assists << " Rebounds: " << this->rebounds << " Blocks: " << this->blocks<<  " Steals: " << this->steals << " Turn Overs: " << this->turnOvers << " Fouls: " << this->fouls << " Shooting %: " << this->shootingPercent << "%" << endl;
		cout << endl;
		cout << "-------------------------------------------------------------------------------------------------------\n";

	}

};