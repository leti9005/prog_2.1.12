#ifndef MAIN_LIST_H
#define MAIN_LIST_H

#include <iostream>

#include "Node.h"

template <typename T>
class List {
	public:
		List() {};

		void push(T data) {
			if (this->head == nullptr) {
				this->head = new Node<T>(data);
				this->end = this->head;
			} else {
				Node<T> *current = this->end;

				current->pNext = new Node<T>(data);
				this->end = current->pNext;
			}

			this->size++;
		};

		T getElement(int index) {
			Node<T> *current = this->head;

			int counter = 0;

			while (current != nullptr) {
				if (counter == index) {
					return current->value;
				}

				current = current->pNext;
				counter++;
			}
		}

		int getSize() {
			return this->size;
		};

	private:
		int size = 0;
		Node<T> *head = nullptr;
		Node<T> *end = nullptr;
};


#endif //MAIN_LIST_H
