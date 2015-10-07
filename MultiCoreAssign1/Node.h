#include <atomic>
#include "StaticTreeBarrier.h"

using namespace std;

class Node : public StaticTreeBarrier
{
private:
	atomic<int> child_count;
	int children;
	Node *parent;

public:
	Node(Node *my_parent, int count);
	void await();
	void child_done();
};