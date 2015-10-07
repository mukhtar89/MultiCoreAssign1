#include "Node.h"

Node::Node(Node *my_parent, int count)
{
	children = count;
	child_count.store(count, std::memory_order_seq_cst);
	parent = my_parent;
}

void Node::await()
{
	bool my_sense = thread_sense;

}