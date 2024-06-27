#ifndef HISTORY_LINKEDLIST_H
#define HISTORY_LINKEDLIST_H

#include "QString"

class hislinkedlist {
private:

    int listSize; // Keep track of the list size

public:

    struct Game {
        int index;
        char used_token;
        QString game_result;
        Game* next;
        Game(char used, QString res) : used_token(used), game_result(res) {}
    };

    Game* head;

    hislinkedlist() : head(nullptr), listSize(0) {}

    ~hislinkedlist() {
        while (head != nullptr) {
            Game* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Check if the list is empty
    bool empty() const {
        return head == nullptr;
    }

    // Get the size of the list
    int size() const {
        return listSize;
    }

    //search algorithm
    bool isfound(int ind) {
        bool flag = false;
        Game* temp = head;
        while (temp != nullptr) {
            if (temp->index == ind)
            {
                flag = true;
                break;
            }
            temp = temp->next;
        }
        return flag;
    }

    // Add element to the end of the list
    void push_back(char used, QString res) {
        Game* newNode = new Game(used, res);
        if (empty()) {
            listSize = 0;
            newNode->index = listSize;
            head = newNode;
        }
        else {
            Game* temp = head;
            newNode->index = listSize;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        ++listSize;
    }

    // Remove the first element
    void pop_front() {
        if (!empty()) {
            Game* temp = head;
            head = head->next;
            delete temp;
            --listSize;
        }
    }

    // Insert a new element at a specified position (0-based index)
    void insert(int index, char used, QString res) {
        if (index > listSize) return; // Index out of bounds
        Game* newNode = new Game(used, res);

        if (index == 0) { // Insert at the beginning
            newNode->next = head;
            head = newNode;
        } else { // Insert at middle or end
            Game* temp = head;
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        ++listSize;
    }

    // Erase an element at a specified position (0-based index)
    void erase(int index) {
        if (index >= listSize || empty()) return; // Index out of bounds or list is empty

        Game* toDelete;
        if (index == 0) { // Erase the first element
            toDelete = head;
            head = head->next;
        } else { // Erase from middle or end
            Game* temp = head;
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            toDelete = temp->next;
            temp->next = toDelete->next;
        }
        delete toDelete;
        --listSize;
    }


    // Print all elements
    Game* GetGameNode(int ind){
        Game* temp = head;
        while (temp != nullptr) {
            if (ind == temp->index)
            {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};
#endif // HISTORY_LINKEDLIST_H
