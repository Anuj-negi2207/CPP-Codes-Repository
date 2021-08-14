#include<iostream>

using namespace std;
class batsman
{
	int bcode, innings, notout, runs;
	string bname;
	float batavg;
	void calcavg()
		{
			if(innings==notout)
				batavg=-1;
			else if(innings<notout)
				batavg=-2;
			else
				batavg= runs/(innings-notout);
		}
	public:
		void readdata()
		{
			cout<<"Enter Batsman code(eg.- 0001): ";
			cin>>bcode;
			cout<<"Enter Batsman Name: ";
			cin>>bname;
			
			cout<<"Enter the innings, notout and runs of the player: \n";
			cin>>innings>>notout>>runs;
		}
		
		
		
		void displaydata()
		{
			cout<<"\nBatsman Code:\t\t"<<bcode;
			cout<<"\nBatsman Name:\t\t"<<bname;
			cout<<"\nBatsman Innings:\t"<<innings;
			cout<<"\nBatsman Notout:\t\t"<<notout;
			cout<<"\nBatsman Runs:\t\t"<<runs;
			
			calcavg();
			
			if(batavg==-1)
				cout<<"\nBatsman didn't play any match";
			else if(batavg==-2)
				cout<<"\nBatsman data is not correct.";
			else
				cout<<"\nBatsman Average:\t"<<batavg;
		}
};

int main()
{
	batsman b1;
	cout<<"For batsman 1:\n";
	b1.readdata();
	b1.displaydata();
}
