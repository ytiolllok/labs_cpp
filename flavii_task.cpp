#include <iostream>
using namespace std;

int n = 0;
long k = 0;

struct Node {
	int data;
	Node* next;
};

struct List{
	Node* root = nullptr;

};

List people;

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




int main(){
    cin >> n >> k;
    bool flag = true;
    for(int i = 1; i <=n; i++){
            PushBack(&people, i);
    }
    Node* current_node = people.root;
    Node* previous_node;
    Node* newnode = new Node;
    newnode = people.root;
		while(newnode->next != nullptr){
			//cout << "function working in while";
			newnode = newnode->next;
			//cout << "i'm stuck";
		}
    newnode->next = people.root;
    //cout <<  (people.root != people.root->next);
    while(flag){
        for (int i = 1; i < k; i++){
            //cout << "i started on" << current_node->data << endl;
            previous_node = current_node;
            current_node = current_node->next;
            //cout << "i'm now on " << current_node->data << endl;
        }
        //cout << "cycle over at " << current_node->data << endl;
        previous_node->next = current_node->next;
        current_node = current_node->next;
        if (previous_node->next == current_node->next)
            flag = false;

    }
    if (k != 1)
        cout << previous_node->data;
    else
        cout << n;
}
