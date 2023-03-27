#ifndef STOCK
#include <iostream>

class Stock
{
private:
	std::string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

public:
	void acquire(std::string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock topval(Stock&);
	Stock(std::string, int, float);
	Stock();
	~Stock();
};

#endif // !STOCK