#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};

struct List{
	Node* root = nullptr;

};

List test_list;



void PushBack(List* list, int val){
	//cout << "function working";
	if (list->root == nullptr){
        //cout << "If working";
		Node* newnode = new Node;
		newnode->data = val;
		newnode->next = nullptr;
		list->root = newnode;
		//cout<< "it was empty";
	}
	else{
		Node* newnode = new Node;
		newnode = list->root;
		while(newnode->next != nullptr){
			//cout << "function working in while";
			newnode = newnode->next;
			//cout << "i'm stuck";
		}
		Node* lastnode = new Node;
		lastnode->data = val;
		lastnode->next = nullptr;
		newnode->next = lastnode;
       // cout << "added something";
	}
}

void PrintAll(List* list){
        if(list->root != nullptr){
            Node* newnode = new Node;
            newnode = list->root;
            bool flag = true;
            while(flag == true){
                cout << newnode->data;
                if(newnode->next == nullptr)
                    flag = false;
                else
                    newnode = newnode->next;

            }
            cout << "\n";
        }
}
int PopFirst(List* list){
    if(list->root != nullptr){
        Node* newnode = new Node;
        newnode = list->root;
        list->root = newnode->next;
        return(newnode->data);
    }
}

void Clear(List* list){
    while(list->root != nullptr){
        Node* newnode = new Node;
        newnode = list->root;
        list->root = newnode->next;
    }
}
int main()
{
    //cout << "i'm working";
    PushBack(&test_list, 1);
    PushBack(&test_list, 2);
    PushBack(&test_list, 3);
    PrintAll(&test_list);
    cout << PopFirst(&test_list)<< "\n";
    PrintAll(&test_list);
    Clear(&test_list);
    PrintAll(&test_list);
    return(0);
}
