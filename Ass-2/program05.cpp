/*
C++ program input list of candidates and find winner of the election based on received votes
*/

#include<iostream>
class Candidate {
	private:
		std::string name;
		int votes;
	public:
		void setDetail(std::string s, int i) {
			name = s;
			votes = i;
		}
};

int main() {
	int N;
	std::string name;
	int votes;
	int winnerVotes = 0;
	std::string winnerName;
	std::cout << "Enter the total candidate: ";
	std::cin >> N;
	Candidate candidates[N];
	for (int i = 0; i < N; i++) {
		std::cout << "Type name and votes of " << i+1 << " candidate" << std::endl;
		std::cin >> name >> votes;
		if(winnerVotes < votes) {
			winnerVotes = votes;
			winnerName = name;
		}
		candidates[i].setDetail(name, votes);
	}
	std::cout << "Winner is " << winnerName << " with " << winnerVotes << " votes" << std::endl;
	return 0;
}