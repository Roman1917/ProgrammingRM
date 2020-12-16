

////////////////////////////////////
#include "Lab7G.h"

TeamData::TeamData()
{

}

void TeamData::setRating(int value)
{
	rating = value;
}

void TeamData::setTeamCode(const std::string &value)
{
	teamCode = value;
}

void TeamData::setName(const std::string &value)
{
	name = value;
}

void TeamData::setPlace(int value)
{
	place = value;
}

std::string TeamData::getTeamCode() const
{
	return teamCode;
}

int TeamData::getRating() const
{
	return rating;
}

int TeamData::getPlace() const
{
	return place;
}

std::string TeamData::getName() const
{
	return name;
}

TeamData TeamData::operator+(TeamData t) {
	TeamData t1;
	t1.place = t.getPlace() + this->getPlace();
	t1.rating = t.getRating() + this->getRating();
	t1.name = this->name;
	t1.teamCode = this->teamCode;
	return t1;
}

TeamData TeamData::operator=(TeamData t) {
	place = t.getPlace();
	name = t.getName();
	rating = t.getRating();
	teamCode = t.getTeamCode();
	return t;
}

bool TeamData::operator == (TeamData t) {
	if (place == t.getPlace() && rating == t.getRating() && name == t.getName() && teamCode == t.getTeamCode())
		return true;
	return false;
}

int TeamData::operator[](int)
{
	return name.length();
}

void TeamData::operator()(std::string name, int place, int rating, std::string teamCode)
{
	setName(name);
	setPlace(place);
	setRating(rating);
	setTeamCode(teamCode);
}

std::ostream & operator<<(std::ostream& o, TeamData &t) {
	o << t.getName() << " "
		<< t.getTeamCode() << " "
		<< t.getRating() << " "
		<< t.getPlace();
	return o;

}

TeamData::operator std::string() const
{
	return name + " "
		+ teamCode + " "
		+ std::to_string(rating) + " "
		+ std::to_string(place);
}

std::istream & operator>>(std::istream& io, TeamData &t) {
	std::cout << "Enter name, team code, rating and place." << std::endl;
	std::string name, teamCode;
	int place, rating;
	io >> name >> teamCode >> rating >> place;
	t.setName(name);
	t.setPlace(place);
	t.setRating(rating);
	t.setTeamCode(teamCode);
	return io;
}

TeamDataArr::TeamDataArr()
{

}

TeamDataArr::~TeamDataArr()
{

}

void TeamDataArr::Write(const std::string &fname, const int id)
{
	std::ofstream fh;
	fh.open(fname, std::ios::out | std::ios::app);
	fh << (std::string)(*team.at(id));
	fh.close();
}

TeamData TeamDataArr::Read(const std::string &fname, int id)
{
	std::ifstream fh;
	fh.open(fname, std::ios::in);

	std::string line;
	for (int i = 0; i < id + 1; i++)
	{
		if (!std::getline(fh, line))
			throw std::invalid_argument("Record not found");
	}
	fh.close();

	TeamData tmp;
	std::stringstream ss;
	ss << line;
	ss >> tmp;
	return tmp;
}

void TeamDataArr::Import(const std::string &fname)
{
	std::ofstream fh;
	fh.open(fname, std::ios::out);
	if (!fh.is_open())
		throw std::invalid_argument("Failed to create file");

	for (TeamData *s : team)
		fh << (*s) << "\n";
	fh.close();
}

void TeamDataArr::Export(const std::string &fname)
{
	std::ifstream fh;
	fh.open(fname, std::ios::in);
	if (!fh.is_open())
		throw std::invalid_argument("File not found");
	TeamData tmp;
	std::string line;
	while (std::getline(fh, line))
	{
		std::stringstream ss;
		ss << line;
		ss >> tmp;
		team.push_back(new TeamData(tmp));
	}
	fh.close();
}

std::string TeamDataArr::GetView() const
{
	std::string res;
	for (int i = 0; i < team.size(); i++)
	{
		res += std::string(*team.at(i)) + "\n";
	}
	return res;
}

void TeamDataArr::Add(TeamData *data)
{
	TeamData *tmp = new TeamData();
	*tmp = *data;
	team.push_back(tmp);
}