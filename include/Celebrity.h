#ifndef CELEBRITY_H
#define CELEBRITY_H
#include <string>

class Celebrity {
	public:
		Celebrity();
		~Celebrity();
		Celebrity(std::string name, int meet_rating, std::string occ, bool met);
		
		//accessors and mutators
		std::string getName() const;
		int getRanking() const;
		std::string getOcc() const;
		bool getMet() const;

		void setName(std::string name);
		void setRanking(int Ranking);
		void setOcc(std::string occ);
		void setMet(bool met);
		
		//operators that allow for sorting
		bool operator< (Celebrity & c);

	private:
		//private info: name of celebrity, ranking of how much i want to meet them, occupation, and if i have met them or not
		std::string name;
		int ranking;
		std::string occ;
		bool met;
};
#endif
