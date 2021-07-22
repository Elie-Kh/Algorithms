class Node {
	int val;
	Node* next;
	Node* prev;
	
	Node();
	Node(int val);
	
	Node* getNext();
	Node* setNext(Node* node);
	
	Node* getPrev();
	Node* setPrev(Node* node);
	
	int getVal();
	void setVal(int value);
	
}