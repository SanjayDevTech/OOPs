#include<iostream>
struct Node {
    int data;
    Node* next = NULL;
    Node(int x) {
        data = x;
    }
};
class LinkedList {
    private:
    Node* head = NULL;
    int len = 0;
    public:
    Node* pop(int index) {
        if(index < 0 || index > len-1) {
            return NULL;
        }
        len--;
        if(index == 0) {
            Node* dead = head;
            head = head->next;
            return dead;
        }
        int count = 0;
        Node* ptr = head;
        while(ptr->next != NULL) {
            if(count == index-1) {
                break;
            }
            ptr = ptr->next;
            count++;
        }
        Node* dead = ptr;
        ptr = ptr->next;
        return ptr;
    }
    bool insert(int index, Node* temp) {
        if(index < 0 || index >= len) {
            return false;
        }
        len++;
        if(index == 0) {
            temp->next = head;
            head = temp;
            return true;
        }
        int count = 0;
        Node* ptr = head;
        while(ptr->next != NULL) {
            if(count == index-1) {
                break;
            }
            ptr = ptr->next;
            count++;
        }
        temp->next = ptr->next;
        ptr->next = temp;
        return true;
    }
    void append(Node* temp) {
        len++;
        if(head == NULL) {
            head = temp;
            return;
        }
        Node* ptr = head;
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
    void print() {
        if(head == NULL) {
            std::cout << "[]\n";
            return;
        }
        std::cout << "[";
        while(head->next != NULL) {
            std::cout << head->data << ", ";
            head = head->next;
        }
        std::cout << head->data << "]\n";
    }

};

int main() {
    LinkedList list;
    list.append(new Node(5));
    list.insert(0, new Node(8));
    list.insert(1, new Node(7));
    Node* popped = list.pop(0);
    if(popped != NULL) {
        std::cout << "Value => " << popped->data << " is popped at 0\n";
        delete popped;
    }
    list.print();
}
