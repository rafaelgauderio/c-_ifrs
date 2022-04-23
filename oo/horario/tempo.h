#ifndef TEMPO_H_INCLUDED
#define TEMPO_H_INCLUDED

using namespace std;

class Tempo {
public:
	Tempo(int = 0, int = 0, int = 10);
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	int getHour();
	int getMinute();
	int getSecond();

	void impressaoUniversal();
	void impressaoPadrao();

private:
	int hour;
	int minute;
	int second;
};

#endif /* TEMPO_H_ */
