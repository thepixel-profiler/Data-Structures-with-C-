//WAP to create a linked list
class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
int main(){
    Node *head = new Node(20);
    Node *second = new Node(30);
    head->next = second;
    Node *third = new Node(40);
    second->next = third;

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}