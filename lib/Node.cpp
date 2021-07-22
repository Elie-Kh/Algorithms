#include "Node.h"

Node::Node() { };

Node::Node(int val) {
	this.val = val;
}

Node* Node::getNext() {
	return next;
}

void Node::setNext(Node* node) {
	next = node;
}

Node* Node::getPrev() {
	
}

void Node::setPrev(Node* node) {
	prev = node;
}

int Node::getVal() {
	return val;
}

void Node::setVal(int value) {
	val = value;
}
