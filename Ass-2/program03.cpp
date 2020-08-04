#include<iostream>
class DateTime {
	private:
		int hrs, mins, secs;
	public:
		void setTime(int);
		void getTime();
};

void DateTime::setTime(int seconds) {
	hrs = 0;
	mins = 0;
	secs = 0;
	if(seconds >= 3600) {
		hrs = seconds/3600;
		seconds %= 3600;
	}
	if(seconds >= 60) {
		mins = seconds/60;
		seconds %= 60;
	}
	secs = seconds;
}

void DateTime::getTime() {
	std::cout << hrs << ":" << mins << ":" << secs;
}

int main() {
	int secs;
	DateTime time;
	std::cout << "Enter the seconds: ";
	std::cin >> secs;
	time.setTime(secs);
	time.getTime();
	return 0;
}