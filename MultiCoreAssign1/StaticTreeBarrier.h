#include <mutex>

#include "Barrier.h"

using namespace std;

class StaticTreeBarrier : public Barrier
{
protected:
	int radix;
	bool sense;
	Node *node;
	__declspec() bool thread_sense;
	int nodes;

public:
	StaticTreeBarrier(int size, int my_radix);
	void build(Node *parent, int depth);
	void await();

};