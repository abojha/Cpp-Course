
#include<iostream>	//for I/O
#include "msoftcon.h" //for console graphics
#include<cstdlib> //for random()
#include<ctime>  // for time()
using namespace std;
const int CPF = 5; //columns per furlong
const int maxHorses = 7;	//maximum number of horsess
class track;				//for forwar references


//////////////////////////////////////////////////////////////////////////
class horse
{
private:
	const track* ptrTrack;		//pointer to track
	int horse_number;		//this horse's number
	float finish_time;			//this horse's finish time
	float distance_run;			// distance run so far
public:
	
	horse(const int n, const track* ptrT) :
		horse_number(n), ptrTrack(ptrT), distance_run(0.0), finish_time(0.0) {}
	~horse(){}

	void display_horse(const float elapsed_time);
}; //end class horse
//////////////////////////////////////////////////////////////////////////

class track
{
private:
	horse* hArray[maxHorses];						//array of ptr-to-horses
	int total_horses;								//total number of horses
	int horse_count;								//hourse created so far
	const float track_length;						//track length in furlongs
	float elapsed_time;								//time since start of race

public:
	track(float lenT, int nH);						//2-arg constructor
	~track();										//destructor
	void display_track();							//display track
	void run();										//run the race
	float get_track_len() const;					//return total track length

};//end class track
//-----------------------------------------------------------------------------------------
void horse::display_horse(float elapsed_time) // for each horse
{
	set_cursor_pos(1 + int(distance_run * CPF), 2 + horse_number * 2);
	
	set_color(static_cast<color>(cBLUE + horse_number)); //horse 0 is blue

	char horse_char = '\0' + static_cast<char>(horse_number); //draw horse
	_putch(' '); _putch('\xDB'); _putch(horse_char); _putch('\xDB'); //untill finish
	
	if (distance_run < ptrTrack->get_track_len() + 1.0 / CPF)
	{
		if (rand() % 3)		//skip about 1 to 3 ticks
			distance_run += 0.2F;	//advance 0.2 furlongs
		finish_time = elapsed_time; //update finish time
	}
	else
	{
		int mins = int(finish_time) / 60;
		int sec = int(finish_time) - mins * 60;
		cout << "Time = " << mins << ":" << sec;

	}
}//end display horse
//---------------------------------------------------------------------------------------------
track::track(float lenT, int nH) : //track constructor
	track_length(lenT), total_horses(nH), horse_count(0), elapsed_time(0.0)
{
	init_graphics();				//start graphics
	total_horses =					//not more than 7
		(total_horses > maxHorses) ? maxHorses : total_horses;
	for (int j = 0; j < total_horses; j++)  //make each horse
		hArray[j] = new horse(horse_count++, this);
	
	time_t aTime;				//Initialize randome number
	srand(static_cast<unsigned>(time(&aTime)));
	display_track();
}	//end track constructor
//-------------------------------------------------------------------------------------------
track :: ~track()
{
	for (int j = 0; j < total_horses; j++) //delete each horse
		delete hArray[j];
}
//------------------------------------------------------------------------------------------
void track::display_track()
{
	clear_screen();					//clear screen

	for (int f = 0; f <= track_length; f++)		//for each furlong
		for (int r = 1; r <= total_horses * 2 + 1; r++) //and screen row
		{
			set_cursor_pos(f * CPF + 5, r);
			if (f == 0 || f == track_length)
				cout << '\xDE';		//draw start or finish line
			else
				cout << '\xB3';
		}

}//end display_track()

void track::run()
{
	while (!_kbhit())
	{
		elapsed_time += 1.75;		//update time
		for (int j = 0; j < total_horses; j++)
			hArray[j]->display_horse(elapsed_time);
		wait(500);
	}
						//eat the keystroke
	cout << endl;
}
float track::get_track_len() const
{
	return track_length;
}

int main()
{
	float length;
	int total; 

	//get data from the user
	cout << "\nEnter track length (furlongs; 1 to 12:";
	cin >> length;

	cout << "\nEnter Number of Horses (1 to 7): ";
	cin >> total;
	track theTrack(length, total);//create the track
	theTrack.run();
	return 0;
}//end main()