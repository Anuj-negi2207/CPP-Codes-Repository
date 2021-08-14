#include<iostream>
using namespace std;
class bank
{
	public:
		virtual void getbalance()=0;
};
class bankA: public bank
{
	public:
		void getbalance()
		{
			cout<<"$100 deposited";
		}
};
class bankB: public bank
{
	public:
		void getbalance()
		{
			cout<<"$150";
		}
};
class bankC:public bank
{
	public:
		void getbalance()
		{
			cout<<"$200";
		}
};
int  main()
{
	bankA i;
	bankB j;
	bankC k;
	
	i.getbalance();
	j.getbalance();
	k.getbalance();
	return 0;
}
