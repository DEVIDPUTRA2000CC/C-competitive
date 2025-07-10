#include <bits/stdc++.h>
using namespace std;
class  Node{
	public:
	int data;
	Node* next; // making a userdefine data type node which contain val & pointer pointing towards next node
	Node(int val){ // constructing node and pointing next to null
      data=val;
	  next= NULL;
	}
};
class List{
	           // here defineing list 
	private:
	Node* head; 
	Node* tail;
	public:
	List(){
		head=tail=NULL; // here list is empty tail and head are null
	}
	void push_front(int val){
		Node* newnode= new Node(val); // new is a keyword initiat
		if(head==NULL){
			head = tail =newnode; // when list is empty
			return;
		}else{
			newnode->next=head; 
			head = newnode;
		}
		
	}
	void push_back(int val){
		Node* newnode=new Node(val);
		if(head==NULL){
		head=tail=newnode;
		return;
		}else{
			tail->next=newnode;
			tail=newnode;
		}
	}
	void pop_front(){
		if(head!=NULL){
		Node* temp=head;
		head=head->next; // now second element becomes head
		temp->next=NULL; // pointing temp(first element on list) towards null val or derefrancing (*temp).next=null;  
		delete temp; // removing temp
		}
	}
	void pop_back(){
			Node* temp = head;
			if(head!=NULL){
            
			while(temp->next!=tail){
				temp= temp->next;
			}
			temp->next=NULL;
			delete tail;
		   tail=temp;
			}
			
		}
		void insert(int val, int position){
			Node* Newnode= new Node(val);
			if(position<0){
				return;
			}if(position==0){
				push_front(val);
			}else{
				Node* temp=head;
				for(int i=0; i<position-1; i++){
					temp=temp->next;
				}
				Newnode->next=temp->next;
				temp->next=Newnode;
			}
		}
		int search(int key){
			int idx=0;
			Node* temp=head;
			while(temp!=NULL){
				if(temp->data==key){
					return idx;
				}
				temp=temp->next;
				idx++;
			}
		}
	
	void printll(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;

	}

};
int main(){
  List ll;
  //your code is here 
}
