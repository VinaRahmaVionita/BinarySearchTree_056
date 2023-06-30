#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild; 
	Node* rightchild;

	//Construktor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL;    //initializing ROOT to null
	}

	void insert(string element)   //insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL);   //Allocatedmemory for the new node 
		