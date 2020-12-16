#ifndef TEAMDATA_H
#define TEAMDATA_H
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
class TeamData
{

public:
	TeamData();
	void setRating(int value);
	void setTeamCode(const std::string &value);
	void setName(const std::string &value);
	void setPlace(int value);
	std::string getTeamCode() const;
	int getRating() const;
	int getPlace() const;
	std::string getName() const;
	TeamData operator+(TeamData t);
	TeamData operator=(TeamData t);
	bool operator==(TeamData t);
	int operator[](int);
	void operator()(std::string name, int place, int rating, std::string teamCode);
	friend std::ostream & operator<<(std::ostream& o, TeamData &t);
	friend std::istream & operator>>(std::istream& io, TeamData &t);
	operator std::string() const;
private:
	std::string teamCode;
	int rating;
	int place;
	std::string name;
};

class TeamDataArr
{
public:
	TeamDataArr();
	~TeamDataArr();
	void Write(const std::string &fname, const int id);
	TeamData Read(const std::string &fname, int id);
	void Import(const std::string &fname);
	void Export(const std::string &fname);
	std::string GetView() const;
	void Add(TeamData *data);
private:
	std::vector<TeamData*> team;
};

#endif // TEAMDATA_H