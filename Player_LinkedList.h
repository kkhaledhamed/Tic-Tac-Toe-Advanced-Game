#ifndef PLAYER_LINKEDLIST_H
#define PLAYER_LINKEDLIST_H

#include <QString>
#include <QMessageBox.h>

#include "History_LinkedList.h"


class playerlinkedlist {

public:

    struct player {
        int index;
        QString username;
        QString password;
        player* next;
        hislinkedlist* history;
        player(QString name, QString pass) : username(name), password(pass), next(nullptr) {}
    };

    playerlinkedlist() : head(nullptr), listSize(0) {}

    ~playerlinkedlist() {
        while (head != nullptr) {
            player* temp = head;
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
    bool isfound(QString user, QString pass, player** plNode) {
        bool flag = false;
        if(empty()){
            return flag;
        }
        *plNode = GetPlayerNode(user, pass);
        if(*plNode != nullptr){
            flag = true;
        }
        return flag;
    }

    // Add element to the end of the list
    void push_back(QString username, QString password, player** plNode) {
        player* newNode = new player(username, password);
        *plNode = newNode;
        if (empty()) {
            listSize = 0;
            newNode->index = listSize;
            head = newNode;
        }
        else {
            newNode->index = listSize;
            player* temp = head;
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
            player* temp = head;
            head = head->next;
            delete temp;
            --listSize;
        }
    }

    // Insert a new element at a specified position (0-based index)
    void insert(int index, QString username, QString password) {
        if (index > listSize) return; // Index out of bounds
        player* newNode = new player(username, password);

        if (index == 0) { // Insert at the beginning
            newNode->next = head;
            head = newNode;
        } else { // Insert at middle or end
            player* temp = head;
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

        player* toDelete;
        if (index == 0) { // Erase the first element
            toDelete = head;
            head = head->next;
        } else { // Erase from middle or end
            player* temp = head;
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            toDelete = temp->next;
            temp->next = toDelete->next;
        }
        delete toDelete;
        --listSize;
    }

    player* GetPlayerNode(QString user, QString pass) {
        player* temp = head;
        while (temp != nullptr) {
            if (temp->username == user && temp->password == pass)
            {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }

    // Get the history games all elements
    hislinkedlist* GetPlayerHistory(QString user, QString pass) {
        player* temp = nullptr;
        temp = GetPlayerNode(user, pass);
        return temp->history;
    }

private:
    int listSize; // Keep track of the list size
    player* head;
};

#endif // PLAYER_LINKEDLIST_H
